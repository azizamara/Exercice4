#ifndef AQUATIQUES_H
#define AQUATIQUES_H
#include "Pokemon.h"
class Aquatiques :
    public Pokemon
{
private:
    int nbreNageoires;

public:
    Aquatiques(string s = "", float p = 0.0, int n = 0) : Pokemon(s, p)
    {
        nbreNageoires = n;
    }
    ~Aquatiques() {}
    float calculer_vitesse()
    {
        return nbreNageoires *(poids / 25) * calculer_energie_absorb_quotid();
    }
    float calculer_energie_absorb_quotid()
    {
        return poids / 2;
    }
    void afficher()
    {
        cout << "Je suis " << nom << " mon poids est de " << poids << " kg, ma vitesse actuelle est de " << calculer_vitesse() << " km / h, j absorbe quotidiennement une energie de " << calculer_energie_absorb_quotid() << ", j ai " << nbreNageoires << " nageoires."<< endl;



    }
};



#endif // AQUATIQUES_H
