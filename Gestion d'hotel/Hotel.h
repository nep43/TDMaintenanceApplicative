#ifndef HOTEL_H
#define HOTEL_H
#include <unordered_map>
#include <vector>
#include "Chambre.h"
#include "Client.h"
#include "Reservation.h"
#include "Personnel.h"

class Hotel {
private:
    std::unordered_map<int, Chambre> chambres;
    std::vector<Client> clients;
    std::vector<Reservation> reservations;
    std::vector<Personnel> personnels;

public:
    // Getters
    const std::unordered_map<int, Chambre>& getChambres() const { return chambres; }
    const std::vector<Client>& getClients() const { return clients; }
    const std::vector<Reservation>& getReservations() const { return reservations; }
    const std::vector<Personnel>& getPersonnels() const { return personnels; }

    // Setters
    void setChambres(const std::unordered_map<int, Chambre>& newChambres) { chambres = newChambres; }
    void setClients(const std::vector<Client>& newClients) { clients = newClients; }
    void setReservations(const std::vector<Reservation>& newReservations) { reservations = newReservations; }
    void setPersonnels(const std::vector<Personnel>& newPersonnels) { personnels = newPersonnels; }

    void ajouterChambre(int num, const std::string& type, double prix);
    void ajouterClient(int id, const std::string& nom, const std::string& prenom);
    void creerReservation(int indexClient, int indexChambre, const std::string& debut, const std::string& fin);
    void ajouterPersonnel(const std::string& nom, const std::string& poste, double salaire);
    void afficherReservations();
    void afficherChambres() {
        for (const auto& chambre : chambres) {
            chambre.second.afficherInfo();
        }
    }
    void afficherClients() {
        for (const auto& client : clients) {
            std::cout << "Client ID: " << client.id << ", Nom: " << client.nom << ", Prenom: " << client.prenom << std::endl;
        }
    }
};

#endif // HOTEL_H
