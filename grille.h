#pragma once

#include "dynam.h"
#include "lecture.h"
#include "canonique.h"

/**
 * @brief structure de la grille composée de ses caractères et d'un booléen indiquant si la case a étté visité ou non
*/
struct Grille {
	char caractere[4][4];
	bool visite[4][4];
};

/**
 * @brief Permet d'initialiser une grille avec tous les booléens des cases initialisés à false (donc non-visitées)
 * @param grille : la grille 4 x 4
*/
void ecrire_grille(Grille& grille);

/**
 * @brief réinitialise les booléens à false
 * @param grille : la grille 4 x 4
*/
void reinitialiser(Grille& grille);

/**
 * @brief fonction récursive permettant de voir si le mot est valide
 * @param grille : la grille 4 x 4
 * @param id : le mot entrée
 * @param pos : la position de la case du mot
 * @param x coordonnées en abscisse 
 * @param y coordonnées en ordonnée
 * @return true si la case est valide sinon false
*/
bool sous_recherche(Grille grille, Mot id, unsigned int pos, int x, int y);

/**
 * @brief fonction permettant de réinitialiser les booléens et d'utiliser la sous_recherche
 * @param grille : la grille 4 x 4
 * @param id : le mot entrée
 * @return true si la case est valide sinon false
*/
bool recherche(Grille& grille, Mot& id);

/**
 * @brief verifie si les coordonnées de la case concernée sont adjacentes aux coordonnées de toutes les autres cases
 * @param x coordonnées en abcisse
 * @param y coordonnées en ordonnée
 * @param i boucle de coordonnées en abcisse
 * @param j boucle de coordonnées en ordonnée
 * @return true si la case est adjacente sinon false
*/
bool verif_adjacent(int x, int y, int i, int j);

/**
 * @brief verifie si les coordonnées de la case concernée hors-limite
 * @param x coordonnées en abcisse
 * @param y coordonnées en ordonnée
 * @return true si la case est hors-limite sinon false
*/
bool verif_limite(int x, int y);