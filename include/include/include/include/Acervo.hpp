#ifndef ACERVO_HPP
#define ACERVO_HPP

#include "Livro.hpp"
#include <vector>
#include <optional>

/**
 * @brief Gerencia coleção de livros.
 */
class Acervo {
public:
    Acervo();

    int adicionarLivro(const std::string& titulo, const std::string& autor);
    bool removerPorId(int id);
    bool editarPorId(int id, const std::string& novoTitulo, const std::string& novoAutor);
    bool atualizarStatus(int id, const std::string& status);

    std::optional<std::reference_wrapper<Livro>> buscarPorId(int id);
    std::vector<Livro> buscar(const std::string& termo) const;
    std::vector<Livro> listarTodos() const;
    std::vector<Livro> listarPorStatus(const std::string& status) const;

    size_t contar() const;

private:
    std::vector<Livro> livros_;
    int proximoId_;
    int encontrarIndicePorId(int id) const;
};

#endif // ACERVO_HPP

