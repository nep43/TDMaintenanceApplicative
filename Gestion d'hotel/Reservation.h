#pragma once
#ifndef RESERVATION_H
#define RESERVATION_H
#include "Client.h"
#include "Chambre.h"

class Reservation {
public:
    Client* client;
    Chambre* chambre;
    string dateDebut, dateFin;
    bool active;

    Reservation(Client* c, Chambre* ch, string debut, string fin);
    void afficherInfo();
};

#endif // RESERVATION_H

#pragma once
