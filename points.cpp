#pragma warning (disable : 4996)
#include <iostream>
#include <string.h>
#include "lecture.h"
#include "points.h"
#include "dynam.h"

using namespace std;

void initialiser(Liste& liste) {
	liste.nb_mots = 0;
	liste.nb_points = 0;
	liste.capa = 1;
	liste.pas_extension = 5;
	liste.tab_mots = new Mot[liste.capa];
}

void detruire(Liste& liste) {
	delete[] liste.tab_mots;
}


void comptage_de_points(int nb_lettres_mot, Liste& liste) {
	int nb_points_mot = 0;
	nb_lettres_mot <= 2 ? nb_points_mot = 0 :
	nb_lettres_mot == 3 || nb_lettres_mot ==4 ? nb_points_mot = 1 :
	nb_lettres_mot == 5 ? nb_points_mot = 2 :
	nb_lettres_mot == 6 ? nb_points_mot = 3 :
	nb_lettres_mot == 7 ? nb_points_mot = 5 :
	nb_lettres_mot > 8 ? nb_points_mot = 11 : nb_points_mot = 0;
	
	liste.nb_points += nb_points_mot;
}

void exo1() {
	Mot buffer;
	Liste liste;
	initialiser(liste);
	while (strcmp(buffer, "*") != 0) {
		lire_liste(buffer, liste);
		comptage_de_points(strlen(buffer), liste);
	}
	cout << liste.nb_points;
	detruire(liste);
}