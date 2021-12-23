#include<stdio.h>
#include<string.h>
#include"correcteurOrthographique.h"
#include"dictionnaire.h"
#include"mot.h"

void afficherAide(){
	printf("Aide de asispell :\n");
	printf("\t asispell -h : cette aide\n");
	printf("\t asispell -d dico : correction de l'entree standard a l'aide du dictionnaire dico\n");
	printf("\t asispell -d dico -f fic : completer le dictionnaire dico a l'aide des mots du fichier fic (un mot par ligne)\n");
}

int main(int argc, char **argv){	
	char *nomDictionnaire,*nomFichier ;
	DICTIONNAIRE_Dictionnaire dictionnaire;
	if (argc>1){//appel avec option
		if (strcmp(argv[1],"-h")==0){//utilisateur demande de l'aide envoie de SOS ! d'un terrien en detresse
			afficherAide();
		}
		else{
			if (strcmp(argv[1],"-d")==0 && argc>=2){//première option est -d ET il y a un nom de fichier (a priori mais c'est une précondition) après
				nomDictionnaire = argv[2];
				dictionnaire = DICTIONNAIRE_chargerDictionnaire(nomDictionnaire);//on charge le dictionnaire meme si il est vide
				//Quesaquo du dictionnaire qui n'existe pas et qu'il faut créé (voir dans la lib DICO)
				if (argc >= 3){// il reste de paramètres en option
					if (strcmp(argv[3],"-f")==0 && argc>=4){// l'utilisateur souhaitent ajouter des mots ET a donner le nom du fichier à ajouter
						nomFichier = argv[3];
						DICTIONNAIRE_ajouterFichier(&dictionnaire,nomFichier);
					}
					else {//le paramètre suivant n'est pas -f OU le fichier n'a pas été donné
						afficherAide();
					}
				}
				else{
					//coder la correction ici 
					//Le dictionnaire a été chargé il faut récupérer la chaine de carcatère du texte et appliquer les éventuelles corrections
				}
			}
			else{//la premiere option n'est pas -d ou il n'y a pas le nom de fichier après
				afficherAide();
			}
		}
	}
	else {//appel sans option
		afficherAide();
	}
}