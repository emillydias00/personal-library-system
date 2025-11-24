#include "Aplicacao.hpp"
#include <iostream>

int main(int argc, char** argv) {
    // se passar --test, roda testes (arquivo tests/test_acervo.cpp)
    if (argc>1) {
        std::string arg = argv[1];
        if (arg=="--test" || arg=="-t") {
            // compile tests separately; aqui assumimos teste em binário tests/test_acervo
            std::cout << "Execute: make test\n";
            return 0;
        }
    }
    Aplicacao app;
    return app.run();
}
