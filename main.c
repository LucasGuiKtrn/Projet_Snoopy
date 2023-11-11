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



    return 0;
}