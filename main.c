#include <stdio.h>
#include "fonction.h"

int main ()
{
    char carte[10][20]={0};
    int tbefore, tnow , trestant=120,a;

    tbefore=tempsnow();
    while(trestant!=0) {
        tnow=tempsnow();
        a=tdif(tbefore,tnow);
        trestant=trestant+a;
        tbefore=tnow;
        if (a==-1) {
            map1(carte);
            affichage(carte);
            printf("%d",trestant);
        }
    }
    return 0;
}