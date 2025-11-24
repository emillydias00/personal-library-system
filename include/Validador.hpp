#ifndef VALIDADOR_HPP
#define VALIDADOR_HPP

#include <string>

/**
 * @brief Funções utilitárias de validação.
 */
namespace Validador {
    void validarStringNaoVazia(const std::string& s, const std::string& campo);
    void validarAno(int ano);
}

#endif // VALIDADOR_HPP
