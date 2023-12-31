/**
 * \file motPrivee.h
 * \brief Fichier .h des fonctions privée du TAD Mot
 * \version 1.0
 * \date 24/12/2021
 *
 */

#ifndef __MOT_PRIVEE__
#define __MOT_PRIVEE__


/**
 *\fn MOT_Mot *MOT_obtenirLesMots(MOT_TableauDeMots tableauMots);
 *\brief Permet d'obtenir le pointeur sur le premier mot du tableau
 *
 *\param tableauMots : Le tableau de mot
 *\return Le pointeur sur le premier mot du tableau
 */

MOT_Mot *MOT_obtenirLesMots(MOT_TableauDeMots tableauMots);

/**
 *\fn MOT_Mot MOT_copierMot(MOT_Mot mot);
 *\brief Copie un mot.
 *
 *\param mot : Le mot qui sera copié.
 *\return Le mot copié, il est égale à celui mis en paramètre mais pas identique.
 */

MOT_Mot MOT_copierMot(MOT_Mot mot);

/**
 *\fn void MOT_fixerIemeMot(MOT_TableauDeMots *tableau, MOT_Mot mot, int i);
 *\brief Fixe un mot à une position donné.
 *\attention Précondition : i < MOT_obtenirLongueurTabMot(*tableau)
 *
 *\param *tableau : Le pointeur sur le tableau de mot qui sera modifié.
 *\param mot : Le mot qui sera fixer à la position i du tableau
 *\param i : La position du Mot dans le tableau.
 */

void MOT_fixerIemeMot(MOT_TableauDeMots *tableau, MOT_Mot mot, int i);

/**
 *\fn int MOT_fixerLongeurMot(MOT_Mot *mot, int longeur)
 *\brief fixe la longeur d'un mot
 *
 *\param *mot : le poiteur du mot
 *\param longeur : la nouvelle longeur du mot
*/

void MOT_fixerLongueurMot(MOT_Mot *mot, int longeur);


#endif