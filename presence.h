#pragma once
#include "listes.h"

/**
 * @brief permet d'identifier les mots apparents dans les deux listes en question.
 * @param listes : liste de liste
*/
void mots_apparents(Listes& listes);

/**
 * @brief permet d'identifier les mots n'apparaissant pas dans les deux listes en question.
 * @param listes : liste de liste
*/
void mots_pas_apparents(Listes& listes);

/**
* @brief permet d'identifier les mots n'apparaissant pas dans deux listes parmis un nombre choisi de listes.
* @param listes : liste de liste
*/
void mots_apparentsv2(Listes& listes);