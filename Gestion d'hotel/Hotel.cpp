#include "Hotel.h"

void Hotel::ajouterChambre(int num, const std::string& type, double prix) {
    chambres.emplace(num, Chambre(num, type, prix)); // Fournir explicitement la clé (num)
}

void Hotel::ajouterClient(int id, const std::string& nom, const std::string& prenom) {
    clients.push_back(Client(id, nom, prenom));
}

void Hotel::creerReservation(int idClient, int numeroChambre, const std::string& debut, const std::string& fin) {
	bool isClientValide = false;
	int indexClient = 0;
    for (size_t i = 0; i < clients.size();i++) {
   
		if (clients[i].id == idClient) {
			indexClient = i;
			isClientValide = true;
			break;
		}
    }
    if (!isClientValide) {
	    std::cerr << "Erreur : Client invalide." << std::endl;
	    return;
    }
    if (chambres.find(numeroChambre) == chambres.end()) {
        std::cerr << "Erreur : Chambre invalide." << std::endl;
        return;
    }

    Chambre& chambre = chambres[numeroChambre];
    if (!chambre.isDisponible()) {
        std::cerr << "Erreur : Chambre non disponible." << std::endl;
        return;
    }

    reservations.emplace_back(&clients[indexClient], &chambre, debut, fin);
    chambre.setDisponible(false);
}

void Hotel::ajouterPersonnel(const std::string& nom, const std::string& poste, double salaire) {
    personnels.push_back(Personnel(nom, poste, salaire));
}

void Hotel::afficherReservations() {
    for (auto& res : reservations) {
        res.afficherInfo();
    }
}
