#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

void menuJeu()
{
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

int choix ()
{
    int n;
    puts ("Veuillez choisir l'un des menus du menu du Jeu ");
    scanf("%d", &n);

    while (n < 1 || n >= 7)
    {
        puts ("Votre entier n'est pas compris entre 1 et 6. Veuillez choisir l'un des menus du menu du Jeu ");
        scanf("%d", &n);
    }
    return n;
}


//Sous - Programme qui permet de récuperer le fichier texte où il y a la première carte du jeu
// Le fichier texte renvoie la carte en chaine de caractère, j'ai donc converti cette chaine de caractère en entier que j'ai mis dans un tableau une dimension pour ensuite transformer ce tableau
//en un tableau 10 par 20 comme demandé

void map1 (char map [10][20])
{
    int i = 0, j = 0, k = 0;  //Initialisation entier i=0 ; entier j=0 ; entier k=0 ; chaine de 209 caractères
    char chaine[209]; // j'ai mis 209 car vu que le fichier renvoie une chaine de caractère, les retour à la ligne comptent comme 1 caractère, j'ai donc converti en entier pour enlever les retours à la ligne
                      // De plus, c'est plus simple pour faire la suite
    FILE* fichier;  //Déclaration de "fichier" de type FILE*

    fichier = fopen("C:\\Lucas\\ECE\\Informatique\\Projet_Snoopy\\carte1.txt", "r"); // Lire le fichier "carte1.txt"

    if (fichier != NULL) //Si l'ouverture du fichier texte n'indique pas d'état d'erreur
    {
        char c;
        while ((c = (char) fgetc(fichier)) != EOF)  //Tant que c (qui est égal au caractère lu dans le fichier et convertit en caractère) est différent du dernier caractère du fichier
        {
            if (c != '\n') //Si c est différent d'un retour à la ligne
            {
                chaine[i] = atoi(&c);  //Conversion du caractère c en entier et le stocke dans un tableau chaine à la position i
                i++;
            }
        }
        fclose(fichier); //Fermeture du fichier texte
    }
    else
    {
        printf ("Il y a un probleme avec le fichier de la carte du jeu");
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            map[i][j] = chaine [k]; //On met la valeur de k de la chaine dans la case [i][j] du tableau
            k++;
        }
    }
}

int tempsnow(){
    int secnow;
    time_t now;
    time(&now);
    // Renvoie l'heure et la date actuelle
    struct tm *local = localtime(&now);
    secnow = local->tm_sec;
    //prend seulement les sec
    //printf("sec: %d\n", secnow);
    return secnow;
}

//permet de renvoyer -1 toutes les sec
int tdif(int secbefore,int secnow){
    if (secbefore != secnow){
        return -1;
    }
    else {
        return 0;
    }
}


void gotoligcol(int x , int y) {
    COORD mycoord;
    mycoord.X = (short) x;
    mycoord.Y = (short) y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mycoord);
}


void affichage (const int *x, const int *y, char map [10][20])
{
    int i, j;
    gotoligcol(0,0);

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (i==*y && j==*x)
            {
                printf ("%c", 0xB);
            }
            else
            {
                switch (map[i][j])
                {
                    case 0:
                        printf ("%c", 0x00);
                        break;
                    case (1):
                        printf ("%c", 0x6);
                        break;
                    case (2):
                        printf ("%c", 0x1A);
                        break;
                    case (3):
                        printf ("%c", 0x5);
                        break;
                    case (4):
                        printf ("%c", 0xF);
                        break;
                    case (5):
                        printf ("%c", 0xA);
                    case (6):
                        printf ("%c", 0x16);
                        break;
                    case (7):
                        printf ("%c", 0x01);
                        break;
                    case (8):
                        break;
                    case (9):
                        printf ("%c", 0xE);
                    default:
                        break;
                }
            }

        }
        printf ("\n");
    }
}


char direction ()                //fonction permettant de savoir sur quelles touches le joueur appuie
{
    char n;                     //déclare n

    n = (char) getch ();        // stocke la valeur de l'input du joueur dans la variable n

    while (strrchr("zqsd", n) == 0)      //empêche le joueur d'utiliser une touche qui ne correspond pas à une des touches prévues pour les mouvements de Snoopy
    {
        printf ("Veuillez utiliser les touche zqsd\n");
        n = (char) getch ();                      //redemande une nouvelle entrée de touche si la dernière n'était pas prise en charge par le programme
    }
    return n;                                     //renvoie n qui contient l'input du joueur
}

void tryMove (int *x, int *y, int vx, int vy)      //fonction qui modifie les coordonnées de Snoopy et prend en
{                                                  //paramètre les valeurs des coordonnées actuelles de Snoopy
    (*x)+=vx;                                      //et les valeurs du changement qu'on veut apporter aux coordonnées
    (*y)+=vy;                                      //-1 fait reculer d'une case, 1 avancer (soit d'une colonne
}                                                  // soit d'une ligne) et 0 conserve les mêmes coordonnées

void mouvement (int *x, int *y)  //Fonction qui permet de faire bouger Snoopy et qui prend en paramètre les valeurs
{                                //des coordonnées de Snoopy
    char touche;
    touche = direction ();       //Récupère l'input du joueur en avec la fonction direction et la stocke dans touche
    switch (touche)              //switch qui teste la valeur de l'input
    {
        case 'z':
            printf ("Vous avez tape 'z'");
            tryMove (x, y,0,-1);        //si le joueur appuie sur z, il monte d'une ligne
            break;
        case 'q':
            printf ("Vous avez tape 'q'");
            tryMove (x, y,-1,0);        //si le joueur appuie sur q, il va dans la colonne à sa gauche
            break;
        case 's':
            printf ("Vous avez tape 's'");
            tryMove (x, y,0,1);         //si le joueur appuie sur s, il descend d'une ligne
            break;
        case 'd':
            printf ("Vous avez tape 'd'");
            tryMove (x, y,1,0);         //si le joueur appuie sur d, il va dans la colonne à sa gauche
            break;
        default :
            break;
    }
}

struct oiseau
{
    int x,y;
    int vivant;
};

struct balle
{
    int x, y;
    char v; //trace de la balle

};

// Ok bon j'ai commencé à voir pour la balle. Pour l'instant normalament son déplacement aléatoire et
// le fait qu'elle rebondie sur les bords de la carte ça fonctionne à peu près. J'ai aussi trouvé un
// moyen pour qu'elle apparaisse bien en temps qu'emoji comme demandé.
// Il me restera à faire tout ce qui est collision avec Snoopy, l'affichage du GAME OVER en cas de collision
// et le non-effaçage des obstacles sur lesquels elle pase.
// Pour l'instant je l'ai mise en commentaire pour être sûr que ça n'affecte pas négativement le reste
// du programme (les // avancés en début de ligne sont à enlever, pas les autres).

// Fonction pour déplacer la balle
//void deplacerBalle(char map[10][20], int *balleX, int *balleY) {
    // Déplacement aléatoire en diagonale (avec position de la balle sur (x,y) )
//    int directionX = rand() % 2 ? 1 : -1;   // assigne aléatoirement une postion sur l'axe x
//    int directionY = rand() % 2 ? 1 : -1;   // asigne aléatoirement une postion sur l'axe y

    // Pour que la balle s'affiche sous forme d'emoji comme demandé, pour l'instant j'ai fait ça car ça
    // fonctionne pas avec la table ANSI fournie (ça me met tjs une erreur) donc pour l'instant j'ai
    // fait avec char mais si quelqu'un a la solution je suis preneur.
//    char balle[] = "☺";

    // Supprime l'ancienne position de la balle
//    map[*balleX][*balleY] = ' ';

    // Déplace la balle
//    *balleX += directionX;   // déplace la balle à la position assignée en x
//    *balleY += directionY;   // déplace la balle à la position assignée en y

    // Gestion des rebonds sur les bords

    // En gros si la balle arrive aux limites de la carte sur x, elle va rebondir.
//    if (*balleX < 0 || *balleX >= 10) {
//        *balleX = (*balleX < 0) ? 0 : 10 - 1;
//    }

    // Là si la balle arrive aux limites de la carte sur y, elle va rebondir.
//    if (*balleY < 0 || *balleY >= 20) {
//        *balleY = (*balleY < 0) ? 0 : 20 - 1;
//    }

    // Affiche la balle à sa nouvelle position.
//    map[*balleX][*balleY] = balle[0];
//}
