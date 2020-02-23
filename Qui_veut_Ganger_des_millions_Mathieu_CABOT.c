#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//_______________________________________________________________________________________________________
//structure des niveau

    struct Objet{
       char pour[300];
	   int pallier;
	   char euro[300];
       char enigme[300];
       char reponse1[300];
       char reponse2[300];
       char reponse3[300];
       char reponse4[300];  
    };

//_______________________________________________________________________________________________________
//atribution des valeurs a la structure
    typedef struct Objet objet;

    	objet p1 = {"POUR",800,"€","''Fais tes devoirs'' est une phrase ...","[1]Impérative","[2]Exclamative","[3]Interrogative","[4]Déclarative"};
  		objet p2 = {"POUR",1500,"€","Quelle équipe a remportée l'Euro 2012 ?","[1]Italie","[2]Allemagne","[3]Angleterre","[4]Espagne"};
  		objet p3 = {"POUR",3000,"€","Quel est le prénom du chanteur Macias ?","[1]Enrique","[2]Enrico","[3]Julio","[4]Juan"};
  		objet p4 = {"POUR",6000,"€","Le mot anglais ''bird'' veut dire ...","[1]Ours","[2]Pie","[3]Oiseau","[4]Mouche"};
  		objet p5 = {"POUR",12000,"€","Sur quel fleuve se trouve le barrage d'Itaipu ?","[1]Rio Paraná","[2]Rio Grande","[3]Rio Bravo","[4]Rio Azul"};
  		objet p6 = {"POUR",24000,"€","Comment s'appelle l'industrie cinématographique indienne basée à Bombay ?","[1]Hollywood","[2]Pollywood","[3]Tollywood","[4]Bollywood"};
  		objet p7 = {"POUR",48000,"€","Combien d'épreuves se compose un décathlon ?","[1]Neuf","[2]Dix","[3]Onze","[4]Douze"};
  		objet p8 = {"POUR",72000,"€","Quelle est la capitale de la Corée du Nord ?","[1]Séoul","[2]Hanoï","[3]Pyongyang","[4]Rangoon"};



int main(){

		int choixD;
		int choix;
		int argentJoueur;


//_______________________________________________________________________________________________________
//intro
    	printf("Bienvenue dans le jeu\n");
    	printf("QUI VEUT GAGNER DES MILLIONS!\n");
    	printf("\n");
    	printf("Tapez [0] pour commencer\n");
    	scanf("%d", &choixD);

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p1.pour, p1.pallier, p1.euro);
            printf("%s \n", p1.enigme);
			printf("   %s     %s\n",p1.reponse1, p1.reponse2);
			printf("   %s     %s\n",p1.reponse3, p1.reponse4);
			printf("\n");


		scanf("%d", &choix);

		if (choix == 1){

			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		if (choix == 2){

			
			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 3){

			
			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			
			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


	    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p2.pour, p2.pallier, p2.euro);
            printf("%s \n", p2.enigme);
			printf("   %s     %s\n",p2.reponse1, p2.reponse2);
			printf("   %s     %s\n",p2.reponse3, p2.reponse4);
			printf("\n");


		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p2.pallier, p2.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 2){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p2.pallier, p2.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p2.pallier, p2.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


		    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p3.pour, p3.pallier, p3.euro);
            printf("%s \n", p3.enigme);
			printf("   %s     %s\n",p3.reponse1, p3.reponse2);
			printf("   %s     %s\n",p3.reponse3, p3.reponse4);
			printf("\n");


		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p3.pallier, p3.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 2){


			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p3.pallier, p3.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );
		}

		if (choix == 4){

			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p3.pallier, p3.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


			    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p4.pour, p4.pallier, p4.euro);
            printf("%s \n", p4.enigme);
			printf("   %s     %s\n",p4.reponse1, p4.reponse2);
			printf("   %s     %s\n",p4.reponse3, p4.reponse4);
			printf("\n");
			printf("\n");


		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p4.pallier, p4.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 2){


			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p4.pallier, p4.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p4.pallier, p4.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


				    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p5.pour, p5.pallier, p5.euro);
            printf("%s \n", p5.enigme);
			printf("   %s     %s\n",p5.reponse1, p5.reponse2);
			printf("   %s     %s\n",p5.reponse3, p5.reponse4);
			printf("\n");


		scanf("%d", &choix);

		if (choix == 1){


			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");
		}

		if (choix == 2){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
			printf("Tu récupère donc %d %s \n", p5.pallier, p5.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );


		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
			printf("Tu récupère donc %d %s \n", p5.pallier, p5.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [1]\n");
			printf("Tu récupère donc %d %s \n", p5.pallier, p5.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


				    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p6.pour, p6.pallier, p6.euro);
            printf("%s \n", p6.enigme);
			printf("   %s     %s\n",p6.reponse1, p6.reponse2);
			printf("   %s     %s\n",p6.reponse3, p6.reponse4);
			printf("\n");

		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p6.pallier, p6.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );


		}

		if (choix == 2){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p6.pallier, p6.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );


		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [4]\n");
			printf("Tu récupère donc %d %s \n", p6.pallier, p6.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


				    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p7.pour, p7.pallier, p7.euro);
            printf("%s \n", p7.enigme);
			printf("   %s     %s\n",p7.reponse1, p7.reponse2);
			printf("   %s     %s\n",p7.reponse3, p7.reponse4);
			printf("\n");

		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p7.pallier, p7.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );


		}

		if (choix == 2){


			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");


		}

		if (choix == 3){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p7.pallier, p7.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 4){

			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [2]\n");
			printf("Tu récupère donc %d %s \n", p7.pallier, p7.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}


					    printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

//------------------------------------------------------------------------------------------------------------------------------------

	if (choixD == 0){

		printf("_____________________________________________________________");
		printf("\n");
		printf("\n");

        
            printf("%s %d %s \n", p8.pour, p8.pallier, p8.euro);
            printf("%s \n", p8.enigme);
			printf("   %s     %s\n",p8.reponse1, p8.reponse2);
			printf("   %s     %s\n",p8.reponse3, p8.reponse4);
			printf("\n");

		scanf("%d", &choix);

		if (choix == 1){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p8.pallier, p8.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );


		}

		if (choix == 2){


			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p8.pallier, p8.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		if (choix == 3){


			argentJoueur = p1.pallier;
			printf("Bravo !\n");
			printf("c'était la bonne réponse\n");
    		printf("\n");

		}

		if (choix == 4){

			printf("Je suis désoler, ce n'était pas la bonne réponse, la bonne réponse était la [3]\n");
			printf("Tu récupère donc %d %s \n", p8.pallier, p8.euro);
    		printf("\n");
    		exit( EXIT_SUCCESS );

		}

		printf("_____________________________________________________________");
		printf("\n");
	}

		printf("Tapez [0] pour continuer\n");
    	scanf("%d", &choixD);

    	printf("Bravo ! Tu as terminé cette version démonstration\n");
    	printf("Tu récupère du coup %d €", argentJoueur );
    	printf("\n");

return 0;
}