#include <stdio.h>
#include "fonction.h"
#include <time.h>

int main ()
{
    char carte[10][20];
int trestant, tnow, a, tbefore;
trestant =120;
    while(trestant!=0) {
        tnow=tempsnow();
        a=tdif(tbefore,tnow);
        trestant=trestant+a;
        tbefore=tnow;
        map1(carte);
        affichage(carte);
        printf("%d",trestant);
    }
    return 0;
}