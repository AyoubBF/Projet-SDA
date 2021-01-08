#pragma once
#include "listes.h"

/**
 * @brief permet d'analyser les mots apparents dans les deux listes concernées
 * @param listes : listes de listes
*/
void mots_apparents(Listes& listes);

/**
 * @brief permet d'analyser les mots n'apparaissant pas dans les deux listes concernées
 * @param listes : listes de listes
*/
void mots_pas_apparents(Listes& listes);

/**
 * @brief permet d'analyser les mots apparents dans au moins deux listes parmis une liste de plusieurs listes
 * @param listes : listes de listes
*/
void mots_apparentsv2(Listes& listes);