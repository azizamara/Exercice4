#ifndef DORMEURS_H
#define DORMEURS_H
#include "Pokemon.h"
class Dormeurs :
    public Pokemon
{
private:
    float taille;
    int nbrePattes;
    int nbHeures;

public:
    Dormeurs(string s = "", float p = 0.0, float t = 0.0, int n = 0, int h = 0) : Pokemon(s, p)
    {
        taille = t;
        nbrePattes = n;
        nbHeures = h;
    }
    ~Dormeurs() {}
    float calculer_vitesse()
    {
        return nbrePattes * ((poids + 1) / 10) * 2 * calculer_energie_absorb_quotid();
    }
    float calculer_energie_absorb_quotid()
    {
        return taille * taille - nbHeures * 2;
    }
    void afficher()
    {
        cout << "Je suis " << nom << " mon poids est de " << poids << " kg, ma vitesse actuelle est de " << calculer_vitesse() << " km / h, j absorbe quotidiennement une energie de " << calculer_energie_absorb_quotid() << ", j ai " << nbrePattes << " pattes, ma taille est de " << taille << ", je dors pour reposer " << nbHeures <<" heures."<< endl;



    }
};

#endif // DORMEURS_H
