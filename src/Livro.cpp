#include "Livro.hpp"
#include "Validador.hpp"
#include <iostream>

Livro::Livro() : id_(-1), titulo_(), autor_(), status_("não iniciado") {}
Livro::Livro(int id, const std::string& titulo, const std::string& autor, const std::string& status)
    : id_(id), titulo_(titulo), autor_(autor), status_(status) {}

int Livro::getId() const { return id_; }
const std::string& Livro::getTitulo() const { return titulo_; }
const std::string& Livro::getAutor() const { return autor_; }
const std::string& Livro::getStatus() const { return status_; }

void Livro::setId(int id) { id_ = id; }
void Livro::setTitulo(const std::string& t) { Validador::validarStringNaoVazia(t, "Título"); titulo_ = t; }
void Livro::setAutor(const std::string& a) { Validador::validarStringNaoVazia(a, "Autor"); autor_ = a; }
void Livro::setStatus(const std::string& s) {
    if (s != "não iniciado" && s != "lendo" && s != "lido") throw ExcecaoSistema("Status inválido");
    status_ = s;
}

void Livro::imprimirResumo() const {
    std::cout << "ID: " << id_ << " | " << titulo_ << " | " << autor_ << " | " << status_ << "\n";
}
