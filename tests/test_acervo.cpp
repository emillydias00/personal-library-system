#include "../include/Acervo.hpp"
#include "../include/ExcecaoSistema.hpp"
#include <iostream>
#include <cassert>

int main() {
    try {
        Acervo a;
        int id1 = a.adicionarLivro("Livro A","AutorA");
        int id2 = a.adicionarLivro("Livro B","AutorB");
        assert(a.contar()==2);
        a.editarPorId(id1,"Livro A2","AutorA2");
        auto r = a.buscar("A2");
        assert(r.size()==1);
        a.atualizarStatus(id2,"lendo");
        auto s = a.listarPorStatus("lendo");
        assert(s.size()==1);
        a.removerPorId(id1);
        assert(a.contar()==1);
        std::cout << "Todos testes OK\n";
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Falha nos testes: " << e.what() << "\n";
        return 1;
    }
}
