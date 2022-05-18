#ifndef ECHIQUIERHEADER
#define ECHIQUIERHEADER



#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include<ctype.h>

typedef enum
{
    VRAI = 0,
    FAUX = 1
}Bool;

typedef enum
{
    BLANC = 0,
    NOIR = 1,
    EMPTY= -1
} Couleur;

typedef enum
{
    VIDE = 0,
    PION = 1,
    CAVALIER = 2,
    FOU = 3,
    TOUR = 4,
    DAME = 5,
    ROI = 6,

} Nom;

typedef struct
{
    Nom nom;
    Couleur couleur;
    char aff;

} Piece;

/**
 * @brief Initialise un echiquier de la taille choisit
 *
 * @param taille -> taille de l'échiquier
 * @return Piece**
 */
Piece **initializeechiquier(int taille);

/**
 * @brief Libère la mémoire alloué pour l'échiquier 
 *
 * @param taille -> taille de l'échiquier
 * @param echiquier -> Tableau à  deux dimensions de structures
 */
void freechiquier(int taille, Piece ***echiquier);

/**
 * @brief Reverse l'echiquier permettant ainsi aux joueurs de voir leurs echiquier de la bonne manière
 *
 * @param taille -> taille de l'echiquier
 * @param echiquier -> Tableau à  deux dimensions de structure
 */
void reverse(int taille, Piece **echiquier);
#endif