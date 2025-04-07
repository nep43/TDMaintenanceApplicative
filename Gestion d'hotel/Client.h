#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
using namespace std;

class Client {
public:
    string nom, prenom;
    int id;

    Client(int id, string n, string p);
    void afficherInfo();
};

#endif // CLIENT_H
#pragma once
