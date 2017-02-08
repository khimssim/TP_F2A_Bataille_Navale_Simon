#include <stdio.h>
#include <stdlib.h>

#define TailleBateau 3
#define Map 10
#define NbBateau 4

typedef struct Case{
    int ligne;
    int colonne;



}Case;

typedef struct Navire{

    Case partie_Navire[TailleBateau];
}Navire;

typedef struct flotte{
    Navire num_Navire[TailleBateau];

}flotte;


enum BOOL{
    False,True,
};

enum Position{
    horizontal,vertical,
};


void Affiche_Navire (Navire *N);





int main()
{
    int J1, J2,Jdebut, ligne, colonne;
    printf("Bienvenue dans la bataille Navale\n");

    Affiche_Navire; // initialisation des navires
    Jdebut != 0;

    do {

    if (Jdebut != 0){

        printf("Au tour de J1\n");
    } else{
        printf("Au tour de J2\n");
    }


            printf("Choisissez un numero de ligne\n");
            scanf ("%i",&ligne);
                getchar();

            printf ("Choisissez un numero de colonne\n");
            scanf("%i",&colonne);
                getchar();


            if (ligne || colonne == Affiche_Navire){

                printf("Touche !\n");
            } else
            {
                printf("Rate\n");
            }


    } while

        (Jdebut = 0 );


        printf("Au tour de J2\n");

         printf("Choisissez un numero de ligne\n");
            scanf ("%i",&ligne);
                getchar();

            printf ("Choisissez un numero de colonne\n");
            scanf("%i",&colonne);
                getchar();


            if (ligne || colonne == Affiche_Navire){

                printf("Touche !\n");
                Jdebut !=0;
            } else
            {
                printf("Rate !\n");
                Jdebut !=0;
            }


    return 0;
    }



  // fonction qui affiche les navires aléatoirement sur la map
  void Affiche_Navire(Navire *N)
  {
      int Position;

      Position = rand()%2;
      Position ==TailleBateau;


  }



