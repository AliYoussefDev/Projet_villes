#include <stdio.h>
#include <stdlib.h>


typedef enum {AMIENS, BAYONNE, BORDEAUX, BOURGES, CAEN, CLERMONT_FERRAND, DIJON, GRENOBLE, LE_MANS, LILLE, LYON, MARSEILLE, METZ, MONTPELLIER, NANTES, NICE, NIORT, PARIS, REIMS, RENNES, STRASBOURG, TOULOUSE,TOURS} ville; 
//permet de distinguer les différentes villes.

typedef struct element_liste
{
	ville nom_ville;
	int distance;
	int heures;
	int minutes;
	struct element_liste * next;
} e_liste;
//chaque element de cette struct représente une ville adjacente, sa distance et le temps de trajet par rapport à chaque "ville_tab"

typedef struct Liste {
	Element* premier;
} Liste;


typedef struct 
{
	ville nom;
	e_liste liste;
} ville_tab;
//on crée un tableau de cette struct qui répertorie les toutes les villes et leurs villes adjacentes.

ville_tab * construction_tab_ville_tab();

ville char_en_ville(char* ville_char);

char** tableau_char_villes();

int nombre_de_lignes_csv(char* filename);