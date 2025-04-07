#include "Personnel.h"

Personnel::Personnel(string n, string p, double s) : nom(n), poste(p), salaire(s) {}

void Personnel::afficherInfo() {
    cout << "Personnel: " << nom << " - Poste: " << poste << " - Salaire: " << salaire << "€" << endl;
}