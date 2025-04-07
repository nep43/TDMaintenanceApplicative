#include "Reservation.h"

Reservation::Reservation(Client* c, Chambre* ch, string debut, string fin) : client(c), chambre(ch), dateDebut(debut), dateFin(fin), active(true) {
    chambre->setDisponible(false);
}

void Reservation::afficherInfo() {
    cout << "Reservation: " << client->nom << " " << client->prenom << " a réservé la chambre " << chambre->getNumero() << " du " << dateDebut << " au " << dateFin << endl;
}

