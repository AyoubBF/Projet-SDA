#pragma warning (disable : 4996)
#include <iostream>
#include <string.h>
#include "lecture.h"
#include "canonique.h"
#include "dynam.h"

using namespace std;

void lire_listes2(Mot& id, Listes& listes, unsigned int i) {
	cin >> id;
	if (strcmp(id, "*") != 0) {
		ecrire(listes.tab_listes[listes.nb_listes], id);
	}
	else {
		listes.nb_listes++;
		if (listes.nb_listes >= listes.capalistes)
		{
			Liste* listeMot = new Liste[listes.capalistes * 2];

			for (unsigned int j = 0; j < listes.nb_listes; j++)
			{
				listeMot[j] = listes.tab_listes[j];
			}
			delete[] listes.tab_listes;
			listes.tab_listes = listeMot;
			listes.capalistes *= 2;

		}
	}
}

void mots_apparents(Listes& listes) {
	initialiser(listes.tab_listes[listes.nb_listes]);
	for (unsigned int i = 0; i < listes.tab_listes[1].nb_mots; i++) {
		for (unsigned int j = 0; j < listes.tab_listes[0].nb_mots; j++) {
			if (strcmp(listes.tab_listes[0].tab_mots[j], listes.tab_listes[1].tab_mots[i]) == 0) {
				ecrire(listes.tab_listes[2], listes.tab_listes[1].tab_mots[i]);
				break;
			}
		}
	}
}

void exo4() {
	Mot buffer;
	strcpy(buffer, "NULL");
	Listes listes;
	initialiser_listes(listes);
	for (unsigned int k = 0; k < 2; k++) {
		initialiser(listes.tab_listes[k]);
		while (strcmp(buffer, "*") != 0) {
			lire_listes2(buffer, listes, k);
		}
		strcpy(buffer, "NULL");
	}
	tri_alphabetique(listes.tab_listes[1]);
	mots_apparents(listes);
	for (unsigned int z = 0; z < listes.tab_listes[2].nb_mots; z++) {
		cout << listes.tab_listes[2].tab_mots[z] << endl;
	}
	cout << "*" << endl;
	for (unsigned int m = 0; m < listes.nb_listes; m++) {
		detruire(listes.tab_listes[m]);
	}
	delete[] listes.tab_listes;
}