#pragma once
#include "liste.h"

/**
 * @brief permet de verifier si la mot entré est un doublon pour ne pas le recopier dans les resultats
 * @param liste : liste de mot
 * @param id : mot entré
 * @return true si il s'agit d'un doublon sinon false
*/
bool verification_doublon(Liste& liste, Mot& id);

/**
 * @brief permet de trier une liste de mot dans l'ordre alphabetique
 * @param liste : liste de mot
*/
void tri_alphabetique(Liste& liste);