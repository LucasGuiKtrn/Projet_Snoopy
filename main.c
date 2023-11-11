#include <stdio.h>
#include "fonction.h"
#include <time.h>

int main ()
{
    char carte[10][20]={0};
    int tbefore=tempsnow(), tnow , trestant=120,a;
    //menuJeu();
    int x = 5, y = 4 ;
    map1 (carte);
    while(trestant!=0) {
        tnow=tempsnow();
        a=tdif(tbefore,tnow);
        trestant=trestant+a;
        tbefore=tnow;
        affichage(&x, &y, carte);
        mouvement (&x, &y);
        printf("%d\n",trestant);
    }


    // Fonction main allant avec la balle (UNDER CONSTRUCTION) (Les // en début de ligne sont à enlever, les autres non):
//    char map[10][20];
    // Position initiale de la balle
//    int balleX = 10 / 2;
//    int balleY = 20 / 2;

    // Boucle de jeu
//    while (1) {

        // Déplacer et afficher la balle
//        deplacerBalle(map, &balleX, &balleY);

        // Enregistrer le temps actuel
//        time_t tempsActuel = time(NULL);

        // Attendre 0.5 seconde avant de continuer
//        while (time(NULL) - tempsActuel < 0.5);

//    }



    return 0;
}