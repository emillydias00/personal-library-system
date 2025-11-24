#ifndef MENU_HPP
#define MENU_HPP

#include "Acervo.hpp"

/**
 * @brief Menu textual para interação com usuário.
 */
class Menu {
public:
    Menu(Acervo& acervo);
    void executar();

private:
    Acervo& acervo_;
    int lerInt(const std::string& prompt);
    std::string lerLinha(const std::string& prompt);

    void opcaoCadastrar();
    void opcaoListar();
    void opcaoBuscar();
    void opcaoEditar();
    void opcaoRemover();
    void opcaoAtualizarStatus();
    void opcaoListarStatus();
};

#endif // MENU_HPP
