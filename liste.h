#pragma once

const unsigned int MAX_LETTRES = 15;
const unsigned int MAX_MOTS = 50;

typedef char Mot[MAX_LETTRES + 1];

struct Liste {
	Mot tab_mots[MAX_MOTS + 1];
	unsigned int nb_mots;
	unsigned int nb_points;
};


