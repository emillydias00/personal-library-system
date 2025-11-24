#ifndef APLICACAO_HPP
#define APLICACAO_HPP

#include "Acervo.hpp"

/**
 * @brief Classe principal que orquestra a aplicação.
 */
class Aplicacao {
public:
    Aplicacao();
    int run();

private:
    Acervo acervo_;
};

#endif // APLICACAO_HPP
