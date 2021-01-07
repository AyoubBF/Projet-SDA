#pragma once
#include "listes.h"

/**
 * @brief initialise une liste de liste dynamiquement
 * @param listes : liste de liste
*/
void initialiser_listes(Listes& listes);

/**
 * @brief initialise une liste de mot dynamiquement
 * @param liste : liste de mot
*/
void initialiser(Liste& liste);

/**
 * @brief permet d'ecrire des mots dans une liste et d'allouer de l'espace dynamiquement
 * @param liste : liste de mot
 * @param id : mot entr�e
*/
void ecrire(Liste& liste, Mot& id);

/**
* @brief permet de liberer de la m�moire dynamiquement allouee avec la fonction initialisee
* @param liste : liste de mot
* @param id : mot entr�e
*/
void detruire(Liste& liste);