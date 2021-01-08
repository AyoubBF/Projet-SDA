#pragma once

const unsigned int MAX_LETTRES = 30;

/**
 * @brief tableau de caract�res formant un mot
*/
typedef char Mot[MAX_LETTRES + 1];

/**
 * @brief structure d'une liste de mot avec ses champs permettant de stock�
 * le nombre de mots, le nombre de points et les param�tres de dynamicit�
*/
struct Liste {
	Mot* tab_mots;
	unsigned int capa;
	unsigned int pas_extension;
	unsigned int nb_mots;
	unsigned int nb_points;
};
