#pragma once

/**
 * @brief structure de la grille compos�e de ses caract�res et d'un bool�en indiquant si la case a �tt� visit� ou non
*/
struct Grille {
	char caractere[4][4];
	bool visite[4][4];
};

/**
 * @brief Permet d'initialiser une grille avec tous les bool�ens des cases initialis�s � false (donc non-visit�es)
 * @param grille : la grille 4 x 4
*/
void ecrire_grille(Grille& grille);

/**
 * @brief r�initialise les bool�ens � false
 * @param grille : la grille 4 x 4
*/
void reinitialiser(Grille& grille);

/**
 * @brief fonction r�cursive permettant de voir si le mot est valide
 * @param grille : la grille 4 x 4
 * @param id : le mot entr�e
 * @param pos : la position de la case du mot
 * @param x coordonn�es en abscisse 
 * @param y coordonn�es en ordonn�e
 * @return true si la case est valide sinon false
*/
bool sous_recherche(Grille grille, Mot id, unsigned int pos, int x, int y);

/**
 * @brief fonction permettant de r�initialiser les bool�ens et d'utiliser la sous_recherche
 * @param grille : la grille 4 x 4
 * @param id : le mot entr�e
 * @return true si la case est valide sinon false
*/
bool recherche(Grille& grille, Mot& id);

/**
 * @brief verifie si les coordonn�es de la case concern�e sont adjacentes aux coordonn�es de toutes les autres cases
 * @param x coordonn�es en abcisse
 * @param y coordonn�es en ordonn�e
 * @param i boucle de coordonn�es en abcisse
 * @param j boucle de coordonn�es en ordonn�e
 * @return true si la case est adjacente sinon false
*/
bool verif_adjacent(int x, int y, int i, int j);

/**
 * @brief verifie si les coordonn�es de la case concern�e hors-limite
 * @param x coordonn�es en abcisse
 * @param y coordonn�es en ordonn�e
 * @return true si la case est hors-limite sinon false
*/
bool verif_limite(int x, int y);