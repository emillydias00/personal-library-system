#ifndef EXCECAO_SISTEMA_HPP
#define EXCECAO_SISTEMA_HPP

#include <stdexcept>
#include <string>

/**
 * @brief Exceção customizada do domínio.
 */
class ExcecaoSistema : public std::runtime_error {
public:
    explicit ExcecaoSistema(const std::string& msg) : std::runtime_error(msg) {}
};

#endif // EXCECAO_SISTEMA_HPP
