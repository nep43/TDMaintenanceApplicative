#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <iostream>
using namespace std;

class Personnel {
public:
    string nom, poste;
    double salaire;

    Personnel(string n, string p, double s);
    void afficherInfo();
};

#endif // PERSONNEL_H

#pragma once
#pragma once
