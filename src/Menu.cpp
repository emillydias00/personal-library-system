#include "Menu.hpp"
#include "ExcecaoSistema.hpp"
#include <iostream>
#include <sstream>

Menu::Menu(Acervo& acervo) : acervo_(acervo) {}

int Menu::lerInt(const std::string& prompt) {
    while (true) {
        std::cout << prompt;
        std::string linha;
        if (!std::getline(std::cin, linha)) return 0;
        std::istringstream iss(linha);
        int v; if (iss >> v) return v;
        std::cout << "Entrada inválida. Digite um número.\n";
    }
}

std::string Menu::lerLinha(const std::string& prompt) {
    std::cout << prompt;
    std::string linha;
    std::getline(std::cin, linha);
    return linha;
}

void Menu::executar() {
    bool sair=false;
    while(!sair) {
        std::cout << "\n=== Biblioteca Pessoal ===\n"
                  << "1-Cadastrar 2-Listar 3-Buscar 4-Editar 5-Remover 6-AtualizarStatus 7-ListarPorStatus 0-Sair\n";
        int opc = lerInt("Opção: ");
        try {
            switch(opc) {
                case 0: sair=true; break;
                case 1: opcaoCadastrar(); break;
                case 2: opcaoListar(); break;
                case 3: opcaoBuscar(); break;
                case 4: opcaoEditar(); break;
                case 5: opcaoRemover(); break;
                case 6: opcaoAtualizarStatus(); break;
                case 7: opcaoListarStatus(); break;
                default: std::cout << "Opção inválida\n";
            }
        } catch (const ExcecaoSistema& e) {
            std::cout << "Erro: " << e.what() << "\n";
        } catch (const std::exception& e) {
            std::cout << "Erro inesperado: " << e.what() << "\n";
        }
    }
}

void Menu::opcaoCadastrar() {
    std::string t = lerLinha("Título: ");
    std::string a = lerLinha("Autor: ");
    int id = acervo_.adicionarLivro(t,a);
    std::cout << "Cadastrado com ID " << id << "\n";
}
void Menu::opcaoListar() {
    auto v = acervo_.listarTodos();
    if (v.empty()) { std::cout << "Acervo vazio\n"; return; }
    for (const auto& l : v) l.imprimirResumo();
}
void Menu::opcaoBuscar() {
    std::string termo = lerLinha("Termo: ");
    auto v = acervo_.buscar(termo);
    if (v.empty()) { std::cout << "Nenhum resultado\n"; return; }
    for (const auto& l : v) l.imprimirResumo();
}
void Menu::opcaoEditar() {
    int id = lerInt("ID: ");
    std::string nt = lerLinha("Novo título: ");
    std::string na = lerLinha("Novo autor: ");
    if (acervo_.editarPorId(id, nt, na)) std::cout << "Atualizado\n"; else std::cout << "ID não encontrado\n";
}
void Menu::opcaoRemover() {
    int id = lerInt("ID: ");
    if (acervo_.removerPorId(id)) std::cout << "Removido\n"; else std::cout << "ID não encontrado\n";
}
void Menu::opcaoAtualizarStatus() {
    int id = lerInt("ID: ");
    std::string s = lerLinha("Status (não iniciado/lendo/lido): ");
    if (acervo_.atualizarStatus(id, s)) std::cout << "Status atualizado\n"; else std::cout << "ID não encontrado\n";
}
void Menu::opcaoListarStatus() {
    std::string s = lerLinha("Status: ");
    auto v = acervo_.listarPorStatus(s);
    if (v.empty()) { std::cout << "Nenhum livro com esse status\n"; return; }
    for (const auto& l : v) l.imprimirResumo();
}
