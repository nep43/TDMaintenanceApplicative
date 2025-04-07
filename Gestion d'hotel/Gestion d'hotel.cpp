// Gestion d'hotel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Hotel.h"
#include "testGestionHotel.h"

int main() {
    testUnitaire();
    Hotel hotel;
    hotel.ajouterChambre(101, "Simple", 80);
    hotel.ajouterChambre(103, "Double", 120);

    hotel.ajouterClient(1, "Dupont", "Jean");

    hotel.creerReservation(1, 103, "10-05-2025", "15-05-2025");

    hotel.ajouterPersonnel("Martin", "RÃƒÂ©ceptionniste", 2000);

    hotel.afficherReservations();
	
    return 0;
}
