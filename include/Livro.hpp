#ifndef LIVRO_HPP
#define LIVRO_HPP

#include "Entidade.hpp"
#include <string>

/**
 * @brief Classe Livro: armazena informações do livro.
 */
class Livro : public Entidade {
public:
    Livro();
    Livro(int id, const std::string& titulo, const std::string& autor, const std::string& status = "não iniciado");

    int getId() const;
    const std::string& getTitulo() const;
    const std::string& getAutor() const;
    const std::string& getStatus() const;

    void setId(int id);
    void setTitulo(const std::string& t);
    void setAutor(const std::string& a);
    void setStatus(const std::string& s);

    void imprimirResumo() const override;

private:
    int id_;
    std::string titulo_;
    std::string autor_;
    std::string status_;
};

#endif // LIVRO_HPP
