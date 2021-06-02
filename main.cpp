#include <iostream>
#include "Pokemon.h"
#include "Terractifs.h"
#include "Dormeurs.h"
#include "PokemonWorld.h"
using namespace std;

int main()
{
	PokemonWorld pw;
	Pokemon* t = new Terractifs("Pikachu", 12.5, 10, 2, 0.5);
	Pokemon* d = new Dormeurs("Ronflex", 250, 10, 4,45);
	t->afficher();
	d->afficher();
	pw.ajouter(t);
	pw.ajouter(d);

}

