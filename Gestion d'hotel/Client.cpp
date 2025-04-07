#include "Client.h"

Client::Client(int i, string n, string p) : id(i), nom(n), prenom(p) {}

void Client::afficherInfo() {
    cout << "Client: " << nom << " " << prenom << " (ID: " << id << ")" << endl;
}
