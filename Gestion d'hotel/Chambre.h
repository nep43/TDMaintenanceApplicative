#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <iostream>
#include <string>

class Chambre {
private:
    int numero;
    std::string type;
    double prixParNuit;
    bool disponible;

public:
    // Constructeur par défaut
    Chambre() : numero(0), type(""), prixParNuit(0.0), disponible(true) {}

    // Constructeur avec paramètres
    Chambre(int num, const std::string& t, double prix);

    // Getters
    int getNumero() const;
    const std::string& getType() const;
    double getPrixParNuit() const;
    bool isDisponible() const;

    // Setters
    void setDisponible(bool dispo);

    void afficherInfo() const;
};

#endif // CHAMBRE_H


