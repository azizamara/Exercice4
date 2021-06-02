#ifndef TERRACTIFS_H
#define TERRACTIFS_H

#include <Pokemon.h>

class Terractifs :
    public Pokemon
{
private:
    float taille;
    int nbrePattes;
    float vitalite;

public:
    Terractifs(string s="",float p=0.0,float t=0.0,int n=0,float v=0.0) : Pokemon(s,p)
    {
        taille = t;
        nbrePattes = n;
        vitalite = v;
    }
    ~Terractifs() {}
    float calculer_vitesse()
    {
        return nbrePattes* ((poids + 1) / 10) * 2 * calculer_energie_absorb_quotid();
    }
    float calculer_energie_absorb_quotid()
    {
        return vitalite * taille * taille * 100;
    }
    void afficher()
    {
        cout << "Je suis " << nom << " mon poids est de " << poids << " kg, ma vitesse actuelle est de " << calculer_vitesse() << " km / h, j absorbe quotidiennement une energie de " << calculer_energie_absorb_quotid() << ", j ai " << nbrePattes << " pattes, ma taille est de " << taille << ", ma vitalite est de " << vitalite << endl;



    }
};

#endif // TERRACTIFS_H
