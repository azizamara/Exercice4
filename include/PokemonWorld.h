#ifndef POKEMONWORLD_H
#define POKEMONWORLD_H
#include <vector>
#include <iostream>
using namespace std;
#include "Pokemon.h"

class PokemonWorld
{
private:
	vector<Pokemon*> world;

public:
	PokemonWorld(){}
	~PokemonWorld() {}
	void ajouter(Pokemon* p)
	{
		world.push_back(p);
	}

	void supprimer(string s)
	{
		vector<Pokemon*> ::iterator itr;
		for (itr = world.begin(); itr != world.end()+1; itr++)
		{
			if ((*itr)->nom == s)
				break;
		}
		if (itr != world.end())
			world.erase(itr);
		else
			cout << "pokemon non trouve " << endl;
	}

	void supprimer()
	{
		world.pop_back();
	}

	float calculer_energie_absorb()
	{
		vector<Pokemon*> ::iterator itr;
		float s = 0.0;
		for (itr = world.begin(); itr != world.end(); itr++)
		{
			s += (*itr)->calculer_energie_absorb_quotid();
		}
		return s;
	}

	float calcul_vitesse()
	{
		vector<Pokemon*> ::iterator itr;
		float v = 0.0;
		for (itr = world.begin(); itr != world.end(); itr++)
		{
			v += (*itr)->calculer_vitesse();
		}
		return v / world.size();
	}

};


#endif // POKEMONWORLD_H
