#ifndef ENTIDADE_HPP
#define ENTIDADE_HPP

/**
 * @brief Entidade abstrata para permitir herança e polimorfismo.
 */
class Entidade {
public:
    virtual ~Entidade() = default;
    virtual void imprimirResumo() const = 0;
};

#endif // ENTIDADE_HPP
