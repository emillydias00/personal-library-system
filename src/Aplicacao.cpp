#include "Aplicacao.hpp"
#include "Menu.hpp"

Aplicacao::Aplicacao() : acervo_() {}

int Aplicacao::run() {
    Menu menu(acervo_);
    menu.executar();
    return 0;
}
