#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
using namespace std;
class Pokemon
{
protected:

	float poids;

public:
	string nom;
	Pokemon(string s = "", float p = 0.0) { nom = s; poids = p; }
	~Pokemon() {}
	virtual float calculer_vitesse() = 0;
	virtual float calculer_energie_absorb_quotid() = 0;
	virtual void afficher() = 0;
};


#endif // POKEMON_H
