#include <stdio.h>
#include <stdlib.h>

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

void affichage (char map [10][20])
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


//Sous - Programme qui permet de récuperer le fichier texte où il y a la première carte du jeu
// Le fichier texte renvoie la carte en chaine de caractère, j'ai donc converti cette chaine de caractère en entier que j'ai mis dans un tableau une dimension pour ensuite transformer ce tableau
//en un tableau 10 par 20 comme demandé

void map1 (char map [10][20])
{
    int i = 0, j = 0, k = 0;
    char chaine[209]; // j'ai mis 209 car vu que le fichier renvoie une chaine de caractère, les retour à la ligne compte comme un caractère, j'ai donc converti en entier pour enlever les retour à la ligne
                      // De plus, c'est plus simple pour faire la suite
    FILE* fichier;

    fichier = fopen("carte1.txt", "r");

    if (fichier != NULL)
    {
        char c;
        while ((c = (char) fgetc(fichier)) != EOF)
        {
            if (c != '\n')
            {
                chaine[i] = atoi(&c);
                i++;
            }
        }
        fclose(fichier);
    }
    else
    {
        printf ("Il y a un probleme avec le fichier de la carte du jeu");
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            map[i][j] = chaine [k];
            k++;
        }
    }

}


