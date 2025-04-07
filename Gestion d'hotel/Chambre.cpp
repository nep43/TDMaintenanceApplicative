#include "Chambre.h"

Chambre::Chambre(int num, const std::string& t, double prix)
    : numero(num), type(t), prixParNuit(prix), disponible(true) {}

void Chambre::afficherInfo() const {
    std::cout << "Chambre " << numero << " - " << type << " - "
              << (disponible ? "Disponible" : "Occupée") << std::endl;
}

int Chambre::getNumero() const { return numero; }
const std::string& Chambre::getType() const { return type; }
double Chambre::getPrixParNuit() const { return prixParNuit; }
bool Chambre::isDisponible() const { return disponible; }
void Chambre::setDisponible(bool dispo) { disponible = dispo; }
