#include "Validador.hpp"
#include "ExcecaoSistema.hpp"
#include <stdexcept>

namespace Validador {
    void validarStringNaoVazia(const std::string& s, const std::string& campo) {
        if (s.empty()) throw ExcecaoSistema(campo + " não pode ser vazio");
    }
    void validarAno(int ano) {
        if (ano <= 0) throw ExcecaoSistema("Ano inválido");
    }
}
