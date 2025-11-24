#include "Acervo.hpp"
#include "Validador.hpp"
#include "ExcecaoSistema.hpp"
#include <algorithm>

Acervo::Acervo() : proximoId_(1) {}

int Acervo::adicionarLivro(const std::string& titulo, const std::string& autor) {
    Validador::validarStringNaoVazia(titulo, "Título");
    Validador::validarStringNaoVazia(autor, "Autor");
    Livro l;
    l.setId(proximoId_++);
    l.setTitulo(titulo);
    l.setAutor(autor);
    livros_.push_back(l);
    return l.getId();
}

int Acervo::encontrarIndicePorId(int id) const {
    for (size_t i=0;i<livros_.size();++i) if (livros_[i].getId()==id) return static_cast<int>(i);
    return -1;
}

bool Acervo::removerPorId(int id) {
    int idx = encontrarIndicePorId(id);
    if (idx==-1) return false;
    livros_.erase(livros_.begin()+idx);
    return true;
}

bool Acervo::editarPorId(int id, const std::string& novoTitulo, const std::string& novoAutor) {
    int idx = encontrarIndicePorId(id);
    if (idx==-1) return false;
    livros_[idx].setTitulo(novoTitulo);
    livros_[idx].setAutor(novoAutor);
    return true;
}

bool Acervo::atualizarStatus(int id, const std::string& status) {
    int idx = encontrarIndicePorId(id);
    if (idx==-1) return false;
    livros_[idx].setStatus(status);
    return true;
}

std::optional<std::reference_wrapper<Livro>> Acervo::buscarPorId(int id) {
    int idx = encontrarIndicePorId(id);
    if (idx==-1) return std::nullopt;
    return std::optional<std::reference_wrapper<Livro>>(std::ref(livros_[idx]));
}

std::vector<Livro> Acervo::buscar(const std::string& termo) const {
    std::vector<Livro> res;
    std::string t = termo;
    std::transform(t.begin(), t.end(), t.begin(), ::tolower);
    for (const auto& l : livros_) {
        std::string ti = l.getTitulo(); std::string au = l.getAutor();
        std::transform(ti.begin(), ti.end(), ti.begin(), ::tolower);
        std::transform(au.begin(), au.end(), au.begin(), ::tolower);
        if (t.empty() || ti.find(t) != std::string::npos || au.find(t) != std::string::npos) res.push_back(l);
    }
    return res;
}

std::vector<Livro> Acervo::listarTodos() const { return livros_; }

std::vector<Livro> Acervo::listarPorStatus(const std::string& status) const {
    std::vector<Livro> res;
    for (const auto& l : livros_) if (l.getStatus()==status) res.push_back(l);
    return res;
}

size_t Acervo::contar() const { return livros_.size(); }
