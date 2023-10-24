#include <stdio.h>

void menuJeu() {
    puts("---LA REVANCHE DE SNOOPY---\n");

    puts("---Menu du Jeu---");
    puts("1) Regle du jeu");
    puts("2) Lancer un nouveau jeu à partir du niveau 1");
    puts("3) Charger une partie");
    puts("4) Mot de passe");
    puts("5) Scores");
    puts("6) Quitter");

}


void regle_du_jeu()
{
    puts ("le joueur possède 3 vies. Chaque niveau devra être résolu en moins de 120 secondes. Si le temps est écoulé, le joueur perd une\n"
          "vie et recommence le niveau. Le but est de récupérer les 4 oiseaux du niveau sans se faire toucher par\n"
          "la balle et/ou les ennemis (si présents).");
}

void choix ()
{
    int n;
    puts ("Veuillez choisir l'un des menus du menu du Jeu ");
    scanf("%d", &n);

    while (n < 1 || n > 7)
    {
        puts ("Votre entier n'est pas compris entre 1 et 6. Veuillez choisir l'un des menus du menu du Jeu ");
        scanf("%d", &n);
    }

}

void map1 (int map [10][20])
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            map[i][j] = 0;
        }
    }
    map [4][9] = 8;
}

void afficheMap (int map[10][20])
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf ("%d", map[i][j]);
        }
        printf ("\n");
    }
}