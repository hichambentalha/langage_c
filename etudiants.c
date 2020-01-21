#include <stdio.h>
#include <string.h>
#define L 50
#define C 50

void saisir(char T[L][C], int taille){
	int i;
	for (i = 0; i < taille; ++i)
	{
		printf("Saisir l'étudiant numéro %d \n", i);
		scanf("%s", T[i]);
	} 
}
void afficher(char T[L][C], int taille){
	int i;
	for (i = 0; i < taille; ++i)
		printf("L'étudiant numéro %d : %s \n", i, T[i]);
}
void supprimer(char T[L][C], int taille, int indice){
int i;
for (i = indice; i < taille; ++i)
{
	strcpy(T[i] , T[i+1]);
}
}
int main()
{
	char tableau[L][C];
	int N = 0, indice,choix;
	char reponse;
    printf("------------- Gestion des étudiants ---------------\n");
    printf("1- Saisir les étudiants. \n");
    printf("2- Afficher les étudiants. \n");
    printf("3- Supprimer un étudiant. \n");
    printf("4- Quitter. \n");
  do{
    printf("Tapez votre choix : ");
    scanf("%d", &choix);

     switch(choix){
     	case 1 : printf("Donner le nombre des étudiants : \n");
				scanf("%d", &N);
				saisir(tableau, N);
				break;
	    case 2 : if (N == 0){
			     printf("Le tableau est vide ! Merci de saisir les données.\n");
				 break;
				    }
				else {
				  afficher(tableau, N);
	              break;	
				    }            
	    case 3 : printf("donner l'indice de l'élément à supprimer : \n");
	             scanf("%d", &indice);
				 supprimer(tableau, N, indice);
			     N--;
			     break;
	    case 4 : break;
     }
     printf("Autre opération ? O/N \n");
     scanf(" %c", &reponse);
}while(reponse == 'o' || reponse == 'O');
	return 0;
}