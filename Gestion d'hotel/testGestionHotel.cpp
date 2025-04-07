#include <cassert>
#include "Reservation.h"
#include "Hotel.h"

void testUnitaire() {
    // Test de la classe Chambre
    Chambre chambre(101, "Simple", 80.0);
    assert(chambre.getNumero() == 101);
    assert(chambre.getType() == "Simple");
    assert(chambre.getPrixParNuit() == 80.0);
    assert(chambre.isDisponible());
    chambre.setDisponible(false);
    assert(!chambre.isDisponible());

    // Test de la classe Client
    Client client(1, "Dupont", "Jean");
    assert(client.id == 1);
    assert(client.nom == "Dupont");
    assert(client.prenom == "Jean");

    // Test de la classe Personnel
    Personnel personnel("Martin", "Receptionniste", 2000.0);
    assert(personnel.nom == "Martin");
    assert(personnel.poste == "Receptionniste");
    assert(personnel.salaire == 2000.0);

    // Test de la classe Hotel
    Hotel hotel;
    hotel.ajouterChambre(102, "Double", 120.0);
    hotel.ajouterClient(2, "Martin", "Paul");
    hotel.creerReservation(2, 102, "12-05-2025", "18-05-2025");
    assert(hotel.getChambres().size() == 1);
    assert(hotel.getClients().size() == 1);
    assert(hotel.getReservations().size() == 1);


}