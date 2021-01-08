#pragma warning (disable : 4996)
#include <iostream>
#include "grille.h"

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

void reinitialiser(Grille& grille) {
	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0; j < 4; j++)
		{
			grille.visite[i][j] = false;
		}
	}
}

bool sous_recherche(Grille grille, Mot id, unsigned int pos, int x, int y);

bool recherche(Grille& grille, Mot& id) {
	reinitialiser(grille);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		{
			if (sous_recherche(grille, id, 0, i, j)) {
				return true;
			}
		}
	}
	return false;
}

bool verif_adjacent(int x, int y, int i, int j) {
	bool cond1 = false;
	bool cond2 = false;
	int a = x - i;
	int b = y - j;

	switch (a) {
	case -1: cond1 = true; break;
	case 0: cond1 = true; break;
	case 1: cond1 = true; break;
	default: break;
	}

	switch (b) {
	case -1: cond2 = true; break;
	case 0: cond2 = true; break;
	case 1: cond2 = true; break;
	default: break;
	}

	if (cond1 && cond2) {
		return true;
	}
	return false;
}

bool verif_limite(int x, int y) {
	bool cond1 = false;
	bool cond2 = false;

	switch (x) {
	case 0: cond1 = true; break;
	case 1: cond1 = true; break;
	case 2: cond1 = true; break;
	case 3: cond1 = true; break;
	default: break;
	}

	switch (y) {
	case 0: cond2 = true; break;
	case 1: cond2 = true; break;
	case 2: cond2 = true; break;
	case 3: cond2 = true; break;
	default: break;
	}

	if (cond1 && cond2) {
		return true;
	}
	return false;
}

bool sous_recherche(Grille grille, Mot id, unsigned int pos, int x, int y) {
	if ( pos >= strlen(id)) {
		return true;
	}
	if (verif_limite(x, y)==false) {
		return false;
	}
	if (grille.caractere[x][y] != id[pos]) {
		return false;
	}
	if (grille.visite[x][y] == true) {
		return false;
	}
	grille.visite[x][y] = true;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if(verif_adjacent(x, y ,i ,j )){
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
	cin >> buffer;
	while (strcmp(buffer, "*") != 0) {
		if (recherche(grille, buffer)) {
			if(verification_doublon(liste, buffer)==false)
				ecrire(liste, buffer);
		}
		cin >> buffer;
	}
	tri_alphabetique(liste);
	for (unsigned int i = 0; i < liste.nb_mots; i++) {
		cout << liste.tab_mots[i] << endl;
	}
	cout << "*" << endl;
	detruire(liste);
}
