#include "villes.h"
#define MAX_FILE_NAME 100

//construction du tableau de ville_tab :
ville_tab * construction_tab_ville_tab ()
{
	//1ere etape : on met le contenu du fichier dans un char**
	char** contenu_fichier = tableau_char_villes();
	
	//2eme etape : on crée le tableau de ville_tab
	ville_tab * tab_resultat[23];// = (ville_tab*)malloc(sizeof(ville_tab)*23);//pourquoi en dynamique ?
	
	
	for (int k = 0; k<23;k++) //on parcourt le tableau de char*
	{
		//initialisation du nom
		tab_resultat[k]->nom = char_en_ville(contenu_fichier[k]);

		
		//initialisation de la liste associée
		tab_resultat[k]->liste.nom_ville = 
	}
}

ville char_en_ville(char* ville_char) // convertit une chaine de caractère en enum ville
{
	ville a_retourner;
	
	if (ville_char == "Amiens")
		a_retourner = AMIENS;
		
	if (ville_char == "Bayonne")
		a_retourner = BAYONNE;
	
	if (ville_char == "Bordeaux")
		a_retourner = BORDEAUX;
	
	if (ville_char == "Bourges")
		a_retourner = BOURGES;
	
	if (ville_char == "Caen")
		a_retourner = CAEN;
	
	if (ville_char == "Clermont-Ferrand")
		a_retourner = CLERMONT_FERRAND;
	
	if (ville_char == "Dijon")
		a_retourner = DIJON;
	
	if (ville_char == "Grenoble")
		a_retourner = GRENOBLE;
	
	if (ville_char == "Le-Mans")
		a_retourner = LE_MANS;
	
	if (ville_char == "Lille")
		a_retourner = LILLE;
	
	if (ville_char == "Lyon")
		a_retourner = LYON;
	
	if (ville_char == "Marseille")
		a_retourner = MARSEILLE;
	
	if (ville_char == "Metz")
		a_retourner = METZ;
	
	if (ville_char == "Montpellier")
		a_retourner = MONTPELLIER;
	
	if (ville_char == "Nantes")
		a_retourner = NANTES;
	
	if (ville_char == "Nice")
		a_retourner = NICE;
	
	if (ville_char == "Niort")
		a_retourner = NIORT;
		
	if (ville_char == "Paris")
		a_retourner = PARIS;
		
	if (ville_char == "Reims")
		a_retourner =REIMS;
		
	if (ville_char == "Rennes")
		a_retourner = RENNES;
		
	if (ville_char == "Strasbourg")
		a_retourner = STRASBOURG;
		
	if (ville_char == "Toulouse")
		a_retourner = TOULOUSE;
		
	if (ville_char == "Tours")
		a_retourner = TOURS;
		
	return a_retourner;
}

char** tableau_char_villes() //fonction qui lit le fichier villes.csv et crée un tableau de chaine de caractères (tableau de char*) qui contient toutes les villes
{
	//1ere etape : on met le contenu du fichier dans un char**
	// ex : "amiens" = 1er element
	//		"bayonne" = 2eme element
	//		...
	// on a donc un tableau de char*
	char** contenu_fichier = (char**)malloc(sizeof(char*)*23); // déclaration et allocation mémoire
	for (int i = 0; i<23; i++)
	{
		contenu_fichier[i] = (char*)malloc(sizeof(char)*20);
	}
	FILE* fichier = fopen("villes.csv","r"); //accès en lecture du fichier villes.csv
	if( fichier != NULL )
	{
		//methode en lisant ville par ville
		chaine_ville = fgets(fichier); //pour ignorer la premiere chaine de caractère
		for (int i =0; i <73; i++) // 23 itérations car 23 villes
		{
			contenu_fichier[i] = fgets(fichier); //remplissage
			contenu_fichier[i] +='\0'; //on marque la fin de la chaine
		}		
	}
	fclose(fichier); // fermeture du fichier
	
	return contenu_fichier;
}



char** tab_connexions()
{
	char** contenu_fichier = (char**)malloc(sizeof(char*)*1000); // déclaration et allocation mémoire
	char** tab_connexions;
	for (int i = 0; i<23; i++) //initialisation de la taille pour chaque chaines de caractères
	{
		contenu_fichier[i] = (char*)malloc(sizeof(char)*20);
		tab_connexions[i] = (char*)malloc(sizeof(char)*20);
	}
	
	FILE* fichier = fopen("connexions.csv","r"); //accès en lecture du fichier villes.csv
	if( fichier != NULL )
	{
		//methode en lisant ville par ville
		char* useless = fgets(fichier); //pour ignorer la premiere chaine de caractère
		for (int i =0; i <73; i++) // 23 itérations car 23 villes
		{
			contenu_fichier[i] = fgets(fichier); //remplissage
			contenu_fichier[i] +='\0'; //on marque la fin de la chaine
		}		
	}
	fclose(fichier); // fermeture du fichier
	
	return contenu_fichier;
}



