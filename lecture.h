#pragma once
#include "listes.h"

/**
 * @brief permet d'�crire un mot dans une liste tout en v�rifiant s'il s'agit d'un doublon. 
 * @param id 
 * @param liste 
*/
void lire_liste(Mot& id, Liste& liste);

/**
 * @brief permet d'�crire un mot dans une liste tout en v�rifiant s'il s'agit d'un doublon. Et permet aussi d'allouer de l'espace pour des nouvelles listes dynamiquement
 * @param id : mot entr�
 * @param liste : liste de mot
*/
void lire_listes(Mot& id, Listes& listes, unsigned int i);