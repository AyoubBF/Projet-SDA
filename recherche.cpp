#pragma warning (disable : 4996)
#include <iostream>
#include <string>
#include "liste.h"
#include "dynam.h"
#include "grille.h"
#include "lecture.h"
#include "canonique.h"

using namespace std;

void ecrire_grille(Grille& grille) {
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 4; j++)
		{
			cin >> grille.caractere[i][j];
			grille.visite[i][j] = false;
		}
	}
}

bool sous_recherche(Grille grille, Mot id, unsigned int pos, unsigned int x, unsigned int y);

bool recherche(Grille& grille, Mot& id) {
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 4; j++)
		{
			if (sous_recherche(grille, id, 0, i, j)) {
				return true;
			}
		}
	}
	return false;
}

bool sous_recherche(Grille grille, Mot id, unsigned int pos, unsigned int x, unsigned int y) {
	if ( pos >= strlen(id)) {
		return true;
	}
	if (grille.caractere[x][y] == id[pos]) {
		return false;
	}
	if (grille.visite[x][y] == true) {
		return false;
	}
	grille.visite[x][y] = true;
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 4; j++) {
			if ((x - i) >= -1 && (x - i) <= 1 && (y - j) >= -1 && (y - j) <= 1) {
				cout << x - i << endl;
				cout << y - j << endl;
				if (sous_recherche(grille, id, pos + 1, i, j)) {
					return true;
				}
			}
		}
	}
	grille.visite[x][y] = false;
	return false;
}


void exo6() {
	Liste liste;
	Grille grille;
	Mot buffer;
	ecrire_grille(grille);
	initialiser(liste);
	while (strcmp(buffer, "*") != 0) {
		lire_liste(buffer, liste);
		recherche(grille, buffer);
	}
	tri_alphabetique(liste);
	for (unsigned int i = 0; i < liste.nb_mots; i++) {
		cout << liste.tab_mots[i] << endl;
	}
	cout << "*" << endl;
	detruire(liste);
}
