#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Fonction de conversion en minuscules
void minuscule(char *str) 
{
    int i = 0;
    
    while (str[i] != '\0') 
    {
        str[i] = tolower(str[i]);
        i++;
    }
}

//Définition de la fonction estdupremiergroupe
int estdupremiergroupe(char verbe[])
{
    int longueur = strlen(verbe), i = 0;
    int j = 0;
    
    while (verbe[j] != '\0') 
    {
        verbe[j] = tolower(verbe[j]);
        j++;
    }
    
    //Retour
    if (verbe[longueur - 1] == 'r' && verbe[longueur - 2] == 'e' && verbe[longueur] == '\0')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

//définition de la fonction qui conjugue le verbe au présent
void present(char verbe[])
{
    printf ("Conjuguaison au présent de l'indicatif\n");
    char radical[100];
    int longueur = strlen(verbe);
    int j = 0;
    
    while (verbe[j] != '\0') 
    {
        verbe[j] = tolower(verbe[j]);
        j++;
    }
    
    //Définition du radical
    for (int i = 0; i < longueur; i++)
    {
        if (verbe[i] == 'e' && verbe[i + 1] == 'r' && verbe[i + 2] == '\0' && i < longueur)
        {
            break;
        }
        else
        {
            radical[i] = verbe[i];
        }
    }

    printf ("Je    %10se\n", radical);
    printf ("Tu    %10ses\n", radical);
    printf ("Il    %10se\n", radical);
    printf ("Elle  %10se\n", radical);
    printf ("On    %10se\n", radical);
    printf ("Nous  %10sons\n", radical);
    printf ("Vous  %10sez\n", radical);
    printf ("Ils   %10sent\n", radical);
    printf ("Elles %10sent\n", radical);
}

//Définition de la fonction qui conjugue le verbe à l'imparfait
void Imparfait(char verbe[])
{
    printf ("Conjuguaison a l'imparfait de l'indicatif\n");
    char radical[100];
    int longueur = strlen(verbe);
    int j = 0;

    while (verbe[j] != '\0') 
    {
        verbe[j] = tolower(verbe[j]);
        j++;
    }

    //Définition du radical
    for (int i = 0; i < longueur; i++)
    {
        if (verbe[i] == 'e' && verbe[i + 1] == 'r' && verbe[i + 2] == '\0')
        {
            break;
        }
        else
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage de la conjugaison
    printf ("Je    %10sais\n", radical);
    printf ("Tu    %10sais\n", radical);
    printf ("Il    %10sait\n", radical);
    printf ("Elle  %10sait\n", radical);
    printf ("On    %10sait\n", radical);
    printf ("Nous  %10sions\n", radical);
    printf ("Vous  %10siez\n", radical);
    printf ("Ils   %10saient\n", radical);
    printf ("Elles %10saient\n", radical);
}

//Définition de la fonction qui conjugue le verbe au futur simple
void FuturSimple(char verbe[])
{
    printf ("Conjuguaison au futur simple de l'indicatif\n");
    int i = 0;
    
    while (verbe[i] != '\0') 
    {
        verbe[i] = tolower(verbe[i]);
        i++;
    }

    //Affichage de la conjugaison
    printf ("Je    %10sai\n", verbe);
    printf ("Tu    %10sas\n", verbe);
    printf ("Il    %10sa\n", verbe);
    printf ("Elle  %10sa\n", verbe);
    printf ("On    %10sa\n", verbe);
    printf ("Nous  %10sons\n", verbe);
    printf ("Vous  %10sez\n", verbe);
    printf ("Ils   %10sont\n", verbe);
    printf ("Elles %10sont\n", verbe);
}

//Définition de la fonction qui conjugue au passé simple
void Passe(char verbe[])
{
    printf ("Conjuguaison au passe simple de l'indicatif\n");
    char radical[100];
    int longueur = strlen(verbe);
    int j = 0;

    while (verbe[j] != '\0') 
    {
        verbe[j] = tolower(verbe[j]);
        j++;
    }
    
    for (int i = 0; i < longueur; i++)
    {
        if (verbe[i] == 'e' && verbe[i + 1] == 'r' && verbe[i + 2] == '\0')
        {
            break;
        }
        else
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage de la conjugaison
    printf ("Je    %10sai\n", radical);
    printf ("Tu    %10sas\n", radical);
    printf ("Il    %10sa\n", radical);
    printf ("Elle  %10sa\n", radical);
    printf ("On    %10sa\n", radical);
    printf ("Nous  %10sames (chapeau sur le a)\n", radical);
    printf ("Vous  %10sates (chapeau sur le a)\n", radical);
    printf ("Ils   %10serent (accent grave sur le e)\n", radical);
    printf ("Elles %10serent (accent grave ur le e)\n", radical);
}

//Prise en charge du verbe aller
void Aller()
{
    //Présent de l'indicatif
    printf ("Conjuguaison au présent de l'indicatif\n");
    printf ("Je vais\n");
    printf ("Tu vas\n");
    printf ("Il va\n");
    printf ("Elle va\n");
    printf ("On va\n");
    printf ("Nous allons\n");
    printf ("Vous allez\n");
    printf ("Ils vont\n");
    printf ("Elles vont\n");

    //Conjuguaison à l'imparfait
    printf ("Conjuguaison a l'imparfait de l'indicatif\n");
    printf ("J'allais\n");
    printf ("Tu allais\n");
    printf ("Il allait\n");
    printf ("Elle allait\n");
    printf ("On allait\n");
    printf ("Nous allions\n");
    printf ("Vous alliez\n");
    printf ("Ils allaient\n");

    //Conjuguaison au futur simple de l'indicatif
    printf ("Conjuguaison au futur simple de l'indicatif\n");
    printf ("J'irai\n");
    printf ("Tu iras\n");
    printf ("Il ira\n");
    printf ("Elle ira\n");
    printf ("On ira\n");
    printf ("Nous irons\n");
    printf ("Vous irez\n");
    printf ("Ils iront\n");
    printf ("Elles iront\n");

    //Conjuguaison au passé simple de l'indicatif
    printf ("Conjuguaison au passé simple de l'indicatif\n");
    printf ("J'allai\n");
    printf ("Tu allas\n");
    printf ("Il alla\n");
    printf ("Elle alla\n");
    printf ("On alla\n");
    printf ("Nous allames (chapeau sur le a)\n");
    printf ("Vous allates (chapeau sur le a)\n");
    printf ("Ils allerent (accent grave sur le e)\n");
}

//Présent du verbe en ger
void PresentGer(char verbe[])
{
    int i = 0;
    
    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'g' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    printf ("\nConjugaison au présent de l'indicatif\n");
    printf ("Je    %5se\n", radical);
    printf ("Tu    %5ses\n", radical);
    printf ("Il    %5se\n", radical);
    printf ("Elle  %5se\n", radical);
    printf ("On    %5se\n", radical);
    printf ("Nous  %5seons\n", radical);
    printf ("Vous  %5sez\n", radical);
    printf ("Ils   %5sent\n", radical);
    printf ("Elles %5sent\n", radical);
}

//imparfait du verbe en ger
void ImparfaitGer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'g' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    printf("\nConjugaison a l'imparfait de l'indicatif\n");
    printf ("Je    %5seais\n", radical);
    printf ("Tu    %5seais\n", radical);
    printf ("Il    %5seait\n", radical);
    printf ("Elle  %5seait\n", radical);
    printf ("On    %5seait\n", radical);
    printf ("Nous  %5sions\n", radical);
    printf ("Vous  %5siez\n", radical);
    printf ("Ils   %5seaient\n", radical);
    printf ("Elles %5seaient\n", radical);
}

//Passé simple du verbe en ger
void PasseGer(char verbe[])
{
    int i = 0;
    
    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'g' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    printf ("\nConjugaison au passe simple de l'indicatif\n");
    printf ("Je    %5seai\n", radical);
    printf ("Tu    %5seas\n", radical);
    printf ("Il    %5sea\n", radical);
    printf ("Elle  %5sea\n", radical);
    printf ("On    %5sea\n", radical);
    printf ("Nous  %5seames (accent circonflexe sur le a)\n", radical);
    printf ("Vous  %5seates (accent circonflexe sur le a)\n", radical);
    printf ("Ils   %5serent (accent grave sur le 1er e)\n", radical);
    printf ("Elles %5serent (accent grave sur le 1er e)\n", radical);
}

//Futur simple du verbe en ger
void FuturGer(char verbe[])
{
    printf ("\nConjugaison au futur simple de l'indicatif\n");
    printf ("Je    %5sai\n", verbe);
    printf ("Tu    %5sas\n", verbe);
    printf ("Il    %5sa\n", verbe);
    printf ("Elle  %5sa\n", verbe);
    printf ("On    %5sa\n", verbe);
    printf ("Nous  %5sons\n", verbe);
    printf ("Vous  %5sez\n", verbe);
    printf ("Ils   %5sont\n", verbe);
    printf ("Elles %5sont\n", verbe);
}

//Présent du verbe en cer
void PresentCer(char verbe[])
{
    int i = 0;
    
    //Définition du radical
    int longueur_cer = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_cer; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'c' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_cer)
        {
            break;
        }
    }

    printf ("\nConjugaison au présent de l'indicatif\n");
    printf ("Je    %5se\n", radical);
    printf ("Tu    %5ses\n", radical);
    printf ("Il    %5se\n", radical);
    printf ("Elle  %5se\n", radical);
    printf ("On    %5se\n", radical);
    printf ("Nous  %5sons (cédille)\n", radical);
    printf ("Vous  %5sez\n", radical);
    printf ("Ils   %5sent\n", radical);
    printf ("Elles %5sent\n", radical);
}

//imparfait du verbe en cer
void ImparfaitCer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'g' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    printf("\nConjugaison a l'imparfait de l'indicatif\n");
    printf ("Je    %5sais (cédille)\n", radical);
    printf ("Tu    %5sais (cédille)\n", radical);
    printf ("Il    %5sait (cédille)\n", radical);
    printf ("Elle  %5sait (cédille)\n", radical);
    printf ("On    %5sait (cédille)\n", radical);
    printf ("Nous  %5sions\n", radical);
    printf ("Vous  %5siez\n", radical);
    printf ("Ils   %5saient (cédille)\n", radical);
    printf ("Elles %5saient (cédille)\n", radical);
}

//Passé simple du verbe en cer
void PasseCer(char verbe[])
{
    int i = 0;
    
    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'g' && verbe[i + 1] == 'e' && verbe[i + 2] == 'r' && verbe[i + 3] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    printf ("\nConjugaison au passe simple de l'indicatif\n");
    printf ("Je    %5sai (cédille)\n", radical);
    printf ("Tu    %5sas (cédille)\n", radical);
    printf ("Il    %5sa (cédille)\n", radical);
    printf ("Elle  %5sa (cédille)\n", radical);
    printf ("On    %5sa (cédille)\n", radical);
    printf ("Nous  %5sames (cédille)(accent circonflexe sur le a)\n", radical);
    printf ("Vous  %5sates (cédille)(accent circonflexe sur le a)\n", radical);
    printf ("Ils   %5serent (accent grave sur le 1er e)\n", radical);
    printf ("Elles %5serent (accent grave sur le 1er e)\n", radical);
}

//Futur simple du verbe en cer
void FuturCer(char verbe[])
{
    printf ("\nConjugaison au futur simple de l'indicatif\n");
    printf ("Je    %5sai\n", verbe);
    printf ("Tu    %5sas\n", verbe);
    printf ("Il    %5sa\n", verbe);
    printf ("Elle  %5sa\n", verbe);
    printf ("On    %5sa\n", verbe);
    printf ("Nous  %5sons\n", verbe);
    printf ("Vous  %5sez\n", verbe);
    printf ("Ils   %5sont\n", verbe);
    printf ("Elles %5sont\n", verbe);
}

//Présent du verbe en eler
void PresentEler(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 'l' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au présent simple de l'indicatif\n");
    printf ("Je    %5slle\n", radical);
    printf ("Tu    %5slles\n", radical);
    printf ("Il    %5slle\n", radical);
    printf ("Elle  %5slle\n", radical);
    printf ("On    %5slle\n", radical);
    printf ("Nous  %5slons\n", radical);
    printf ("Vous  %5slez\n", radical);
    printf ("Ils   %5sllent\n", radical);
    printf ("Elles %5sllent\n", radical);
}

//Imparfait du verbe en eler
void ImparfaitEler(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 'l' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison a l'imparfait simple de l'indicatif\n");
    printf ("Je    %5slais\n", radical);
    printf ("Tu    %5slais\n", radical);
    printf ("Il    %5slait\n", radical);
    printf ("Elle  %5slait\n", radical);
    printf ("On    %5slait\n", radical);
    printf ("Nous  %5slions\n", radical);
    printf ("Vous  %5sliez\n", radical);
    printf ("Ils   %5slaient\n", radical);
    printf ("Elles %5slaient\n", radical);
}

//Passé simple du verbe en eler
void PasseEler(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 'l' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au passe simple de l'indicatif\n");
    printf ("Je    %5slai\n", radical);
    printf ("Tu    %5slas\n", radical);
    printf ("Il    %5sla\n", radical);
    printf ("Elle  %5sla\n", radical);
    printf ("On    %5sla\n", radical);
    printf ("Nous  %5slames (accent circonflexe sur le a)\n", radical);
    printf ("Vous  %5slates (accent circonflexe sur le a)\n", radical);
    printf ("Ils   %5slerent (accent grave sur le e)\n", radical);
    printf ("Elles %5slerent (accent grave sur le e)\n", radical);
}

//Futur simple du verbe en eler
void FuturEler(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 'l' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au futur simple de l'indicatif\n");
    printf ("Je    %5sllerai\n", radical);
    printf ("Tu    %5slleras\n", radical);
    printf ("Il    %5sllera\n", radical);
    printf ("Elle  %5sllera\n", radical);
    printf ("On    %5sllera\n", radical);
    printf ("Nous  %5sllerons\n", radical);
    printf ("Vous  %5sllerez\n", radical);
    printf ("Ils   %5slleront\n", radical);
    printf ("Elles %5slleront\n", radical);
}

//Présent du verbe en eter
void PresentEter(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 't' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au present simple de l'indicatif\n");
    printf ("Je    %5stte\n", radical);
    printf ("Tu    %5sttes\n", radical);
    printf ("Il    %5stte\n", radical);
    printf ("Elle  %5stte\n", radical);
    printf ("On    %5stte\n", radical);
    printf ("Nous  %5stons\n", radical);
    printf ("Vous  %5stez\n", radical);
    printf ("Ils   %5sttent\n", radical);
    printf ("Elles %5sttent\n", radical);
}

//Imparfait du verbe en eter
void ImparfaitEter(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 't' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison a l'imparfait de l'indicatif\n");
    printf ("Je    %5stais\n", radical);
    printf ("Tu    %5stais\n", radical);
    printf ("Il    %5stait\n", radical);
    printf ("Elle  %5stait\n", radical);
    printf ("On    %5stait\n", radical);
    printf ("Nous  %5stions\n", radical);
    printf ("Vous  %5stiez\n", radical);
    printf ("Ils   %5staient\n", radical);
    printf ("Elles %5staient\n", radical);
}

//Passé simple du verbe en eter
void PasseEter(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 't' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au passe simple de l'indicatif\n");
    printf ("Je    %5stai\n", radical);
    printf ("Tu    %5stas\n", radical);
    printf ("Il    %5sta\n", radical);
    printf ("Elle  %5sta\n", radical);
    printf ("On    %5sta\n", radical);
    printf ("Nous  %5stames (accent circonflexe sur le a)\n", radical);
    printf ("Vous  %5states (accent circonflexe sur le a)\n", radical);
    printf ("Ils   %5sterent (accent grave sur le 1er e)\n", radical);
    printf ("Elles %5sterent (accent grave sur le 1er e)\n", radical);
}

//Futur simple du verbe en eter
void FuturEter(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i] == 'e' && verbe[i + 1] == 't' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger)
        {
            break;
        }
    }

    //Affichage
    printf ("\nConjugaison au futur simple de l'indicatif\n");
    printf ("Je    %5stterai\n", radical);
    printf ("Tu    %5stteras\n", radical);
    printf ("Il    %5sttera\n", radical);
    printf ("Elle  %5sttera\n", radical);
    printf ("On    %5sttera\n", radical);
    printf ("Nous  %5stterons\n", radical);
    printf ("Vous  %5stterez\n", radical);
    printf ("Ils   %5stteront\n", radical);
    printf ("Elles %5stteront\n", radical);
}

//Présent du verbe en yer
void PresentYer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        radical[i] = verbe[i];
        if (verbe[i + 1] == 'y' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger && i < 100)
        {
            break;
        }
        else if (i < 100)
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage
    printf ("\nConjugaison au present de l'indicatif\n");
    printf ("Je    %5sie ou %5sye\n", radical, radical);
    printf ("Tu    %5sies ou %5syes\n", radical, radical);
    printf ("Il    %5sie ou %5sye\n", radical, radical);
    printf ("Elle  %5sie ou %5sye\n", radical, radical);
    printf ("On    %5sie ou %5sye\n", radical, radical);
    printf ("Nous  %5syons\n", radical);
    printf ("Vous  %5syez\n", radical);
    printf ("Ils   %5sient ou %5syent\n", radical, radical);
    printf ("Elles %5sient ou %5syent\n", radical, radical);
}

//Imparfait du verbe en yer
void ImparfaitYer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        if (verbe[i + 1] == 'y' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger && i < 100)
        {
            radical[i] = verbe[i];
            break;
        }
        else if (i < 100)
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage
    printf ("\nConjugaison a l'imparfait de l'indicatif\n");
    printf ("Je    %5syais\n", radical);
    printf ("Tu    %5syais\n", radical);
    printf ("Il    %5syait\n", radical);
    printf ("Elle  %5syait\n", radical);
    printf ("On    %5syait\n", radical);
    printf ("Nous  %5syions\n", radical);
    printf ("Vous  %5syiez\n", radical);
    printf ("Ils   %5syaient\n", radical);
    printf ("Elles %5syaient\n", radical);
}

//Passé simple du verbe en yer
void PasseYer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        if (verbe[i + 1] == 'y' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger && i < 100)
        {
            radical[i] = verbe[i];
            break;
        }
        else if (i < 100)
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage
    printf ("\nConjugaison au passe simple de l'indicatif\n");
    printf ("Je    %5syai\n", radical, radical);
    printf ("Tu    %5syas\n", radical, radical);
    printf ("Il    %5sya\n", radical, radical);
    printf ("Elle  %5sya\n", radical, radical);
    printf ("On    %5sya\n", radical, radical);
    printf ("Nous  %5syames (accent circonflexe sur le a)\n", radical);
    printf ("Vous  %5syates (accent circonflexe sur le a)\n", radical);
    printf ("Ils   %5syerent (accent grave sur le 1er e)\n", radical, radical);
    printf ("Elles %5syerent (accent grve sur le 1er e)\n", radical, radical);
}

//Futur simple du verbe en yer
void FuturYer(char verbe[])
{
    int i = 0;

    //Définition du radical
    int longueur_ger = strlen(verbe);
    char radical[100];
    for (i = 0; i < longueur_ger; i++)
    {
        if (verbe[i + 1] == 'y' && verbe[i + 2] == 'e' && verbe[i + 3] == 'r' && verbe[i + 4] == '\0' && i < longueur_ger && i < 100)
        {
            radical[i] = verbe[i];
            break;
        }
        else if (i < 100)
        {
            radical[i] = verbe[i];
        }
    }

    //Affichage
    printf ("\nConjugaison au futur simple de l'indicatif\n");
    printf ("Je    %5sierai ou %5syerai\n", radical, radical);
    printf ("Tu    %5sieras ou %5syeras\n", radical, radical);
    printf ("Il    %5siera ou %5syera\n", radical, radical);
    printf ("Elle  %5siera ou %5syera\n", radical, radical);
    printf ("On    %5siera ou %5syera\n", radical, radical);
    printf ("Nous  %5sierons ou %5syerons\n", radical, radical);
    printf ("Vous  %5sierez ou %syerez\n", radical, radical);
    printf ("Ils   %5sieront ou %5syeront\n", radical, radical);
    printf ("Elles %5sieront ou %5syeront\n", radical, radical);
}

//Définition d'une fonction de verbe de cas particulier
int estunverbeparticulier(char verbe[])
{
    int i = 0;
    int longueur_verbe = strlen(verbe);

    //Vérification
    if (verbe[longueur_verbe] == '\0' && verbe[longueur_verbe - 1] == 'r' && verbe[longueur_verbe - 2] == 'e' && verbe[longueur_verbe - 3] == 'g')
    {
        return 0;
    }
    else if (verbe[longueur_verbe] == '\0' && verbe[longueur_verbe - 1] == 'r' && verbe[longueur_verbe - 2] == 'e' && verbe[longueur_verbe - 3] == 'l' && verbe[longueur_verbe - 4] == 'e')
    {
        return 1;
    }
    else if (verbe[longueur_verbe] == '\0' && verbe[longueur_verbe - 1] == 'r' && verbe[longueur_verbe - 2] == 'e' && verbe[longueur_verbe - 3] == 't' && verbe[longueur_verbe - 4] == 'e')
    {
        return 2;
    }
    else if (verbe[longueur_verbe] == '\0' && verbe[longueur_verbe - 1] == 'r' && verbe[longueur_verbe - 2] == 'e' && verbe[longueur_verbe - 3] == 'y')
    {
        return 4;
    }
    else if (verbe[longueur_verbe] == '\0' && verbe[longueur_verbe - 1] == 'r' && verbe[longueur_verbe - 2] == 'e' && verbe[longueur_verbe - 3] == 'c')
    {
        return 5;
    }
    else 
    {
        return 3;
    }
}

//Définition du manuel du programme
void manuel()
{
    //Affichage du manuel
    printf ("Ce programme effectue la conjuguaison d'un verbe du 1er groupe de votre choix\n\n");
    printf ("Vous pouvez appeler le programme seul ou bien avec des arguments\n\n");
    printf ("Syntaxe : programme\t<Option1>\t<Argument1>\t<Option2>\t<Argument2>\n\n");
    printf ("A l'appel du programme vous pouvez aussi passer des arguments\nLaissez moivous montrer\n\n");
    printf ("-h\t==>\tPour afficher le manuel d'utilisation du programme (qui est celui que vous lisez actuellement)\n\n");
    printf ("-v\t==>\tPour spécifier le verbe que vous voulez conjuguer (-v suivi du verbe)\n\n");
    printf ("-t\t==>\tPour spécifier le temps de conjuguaison (-t suivi du temps de conjugaison)\n\n");
    printf ("NB: Les seuls temps de conjuguaison disponibles sont : Present - Imparfait - Passe simple - Futur simple\n\n");
    printf ("Lorsque vous passez l'argument pour la conjuguaison du verbe au futur, ecrivez juste futur, sinon la conjuguaison ne se fera pas\n\n");
    printf ("Lorsque vous passez l'argument pour la conjuguaison du verbe au passé simple, ecrivez juste passe, sinon la conjuguaison ne se fera pas\n\n");
    printf ("Veuillez donc selectionner le bon temps\n\n");
    printf ("Si vous donnez juste le programme avec l'option -v, nous allons conjuguer le verbe à tous les temps\n\n");
    printf ("De ce fait vous devez spécifier le temps et le verbe (-v et -t) si vous ne voulez voir qu'un seul temps\n\n");
    printf ("NB : Evitez les accents comme lorsque vous ecrivez Passé au lieu de Passe ou Présent au lieu de Present\n\n");
    printf ("Les arguments doivent etre passes dans cet ordre : -v verbe -t temps\n\n");
    printf ("De plus -h ne doit pas etre combine avec les autres options\n\n");
    printf ("Bonne utilisation...\n");
}

//Fonction principale
int main (int argc, char *argv[])
{

    //Les variables
    char verbe[100], temps[100];
    
    //Affichage de la phrase
    printf ("Effectuons la conjuguaison du verbe\n");
    if (argc == 1)
    {
        deuxieme:
        printf ("Donner le verbe a conjuguer : ");
        scanf ("%s", verbe);
        printf ("Donner le temps de conjuguaison : ");
        scanf ("%s", temps);

        minuscule(verbe);
        minuscule(temps);
        int longueur1 = strlen(temps);
        int vrai = estdupremiergroupe(verbe);
        int vrai2 = estunverbeparticulier(verbe);
        //Affichage de tous les temps simples
        if (longueur1 == 0 && vrai == 1 && vrai2 == 3)
        {
            present(verbe);
            Passe(verbe);
            Imparfait(verbe);
            FuturSimple(verbe);
        }
        else if (longueur1 == 0 && vrai == 1 && vrai2 == 0)
        {
            PresentGer(verbe);
            PasseGer(verbe);
            ImparfaitGer(verbe);
            FuturGer(verbe);
        }
        else if (longueur1 == 0 && vrai == 1 && vrai2 == 1)
        {
            PresentEler(verbe);
            PasseEler(verbe);
            ImparfaitEler(verbe);
            FuturEler(verbe);
        }
        else if (longueur1 == 0 && vrai == 1 && vrai2 == 2)
        {
            PresentEter(verbe);
            ImparfaitEter(verbe);
            FuturEter(verbe);
            PasseEter(verbe);
        } 
        else if (longueur1 == 0 && vrai == 1 && vrai2 == 4)
        {
            PresentYer(verbe);
            ImparfaitYer(verbe);
            PasseYer(verbe);
            FuturYer(verbe);
        }
        else if (longueur1 == 0 && vrai == 1 && vrai2 == 5)
        {
            PresentCer(verbe);
            ImparfaitCer(verbe);
            PasseCer(verbe);
            FuturCer(verbe);
        }
        else if (longueur1 != 0 && vrai == 1 && strcmp (verbe, "aller") != 0)
        {
            goto conjugaison;
        }
        else if (vrai != 1)
        {
            printf ("%s n'est pas un verbe du 1er groupe\n", verbe);
        }

        //Cas du verbe aller  
        int comp = strcmp (verbe, "aller");
        if (comp == 0)
        {
            printf ("Conjuguaison du verbe aller\n");
            Aller();
            printf ("\nIl est important de preciser que leverbe aller n'est pas un verbe du 1er groupe\n");
        }
        else if (strcmp (verbe, "aller") != 0)
        {
            int valeurderetour = estdupremiergroupe(verbe);
            if (valeurderetour == 1)
            {
                conjugaison:
                //Conjuguaison des verbes grâce aux fonctions définies précédemment
                printf ("Conjuguaison du verbe %s\n", verbe);
                if (strcmp(temps, "present") == 0)
                {
                    if (vrai2 == 3)
                    {
                        present(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        PresentGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        PresentEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        PresentEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        PresentYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        PresentCer(verbe);
                    }
                }
                else if (strcmp(temps, "imparfait") == 0)
                {
                    if (vrai2 == 3)
                    {
                        Imparfait(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        ImparfaitGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        ImparfaitEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        ImparfaitEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        ImparfaitYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        ImparfaitCer(verbe);
                    }
                }
                else if (strcmp(temps, "passe") == 0)
                {
                    if (vrai2 == 3)
                    {
                        Passe(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        PasseGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        PasseEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        PasseEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        PasseYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        PasseCer(verbe);
                    }
                }
                else if (strcmp(temps, "futur") == 0)
                {
                    if (vrai2 == 3)
                    {
                        FuturSimple(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        FuturGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        FuturEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        FuturEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        FuturYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        FuturCer(verbe);
                    }
                }
            }
        }
    }
    else if (argc != 0)
    {
        //Cas d'un nombre d'arguments

        //Définition de l'option -v
        if (argc < 4 && strcmp(argv[1], "-v") == 0)
        {
            int valeurderetour = estdupremiergroupe(argv[2]);
            int particulier = estunverbeparticulier(argv[2]);
            if (valeurderetour == 1 && strcmp(argv[2], "aller") != 0)
            {
                if (particulier == 3)
                {
                    present(argv[2]);
                    Passe(argv[2]);
                    FuturSimple(argv[2]);
                    Imparfait(argv[2]);
                }
                else if (particulier == 0)
                {
                    PresentGer(argv[2]);
                    ImparfaitGer(argv[2]);
                    PasseGer(argv[2]);
                    FuturGer(argv[2]);
                }
                else if (particulier == 1)
                {
                    PresentEler(argv[2]);
                    ImparfaitEler(argv[2]);
                    PasseEler(argv[2]);
                    FuturEler(argv[2]);
                }
                else if (particulier == 2)
                {
                    PresentEter(argv[2]);
                    ImparfaitEter(argv[2]);
                    PasseEter(argv[2]);
                    FuturEter(argv[2]);
                }
                else if (particulier == 4)
                {
                    PresentYer(verbe);
                    ImparfaitYer(verbe);
                    PasseYer(verbe);
                    FuturYer(verbe);
                }
                else if (particulier == 5)
                {
                    PresentCer(verbe);
                    ImparfaitCer(verbe);
                    PasseCer(verbe);
                    FuturCer(verbe);
                }
            }
            else if (valeurderetour == 1 && strcmp(argv[2], "aller") == 0)
            {
                Aller();
                printf("\nIl convient de noter que aller n'est pas du 1er groupe\n");
            }
            else 
            {
                printf ("Ce verbe n'est pas du 1er groupe\n");
                manuel();
            }
        }

        //Définition de l'option -v et -t combinés
        else if (argc < 6 && strcmp(argv[1], "-v") == 0 && strcmp (argv[3], "-t") == 0)
        {
            minuscule(argv[2]);
            minuscule(argv[4]);
            int valeurderetour = estdupremiergroupe(argv[2]);
            int particulier = estunverbeparticulier(argv[2]);
            if (valeurderetour == 1 && strcmp(argv[2], "aller") != 0)
            {
                minuscule(argv[4]);
                minuscule(argv[2]);
                if (strcmp(argv[4], "present") == 0)
                {
                    if (particulier == 3)
                    {
                        present(argv[2]);
                    }
                    else if (particulier == 0)
                    {
                        PresentGer(argv[2]);
                    }
                    else if (particulier == 1)
                    {
                        PresentEler(argv[2]);
                    }
                    else if (particulier == 2)
                    {
                        PresentEter(argv[2]);
                    }
                    else if (particulier == 4)
                    {
                        PresentYer(argv[2]);
                    }
                    else if (particulier == 5)
                    {
                        PresentCer(argv[2]);
                    }
                }
                else if (strcmp(argv[4], "imparfait") == 0)
                {
                    if (particulier == 3)
                    {
                        Imparfait(argv[2]);
                    }
                    else if (particulier == 0)
                    {
                        ImparfaitGer(argv[2]);
                    }
                    else if (particulier == 1)
                    {
                        ImparfaitEler(argv[2]);
                    }
                    else if (particulier == 2)
                    {
                        ImparfaitEter(argv[2]);
                    }
                    else if (particulier == 4)
                    {
                        ImparfaitYer(argv[2]);
                    }
                    else if (particulier == 5)
                    {
                        ImparfaitCer(argv[2]);
                    }
                }
                else if (strcmp (argv[4], "passe") == 0)
                {
                    if (particulier == 3)
                    {
                        Passe(argv[2]);
                    }
                    else if (particulier == 0)
                    {
                        PasseGer(argv[2]);
                    }
                    else if (particulier == 1)
                    {
                        PasseEler(argv[2]);
                    }
                    else if (particulier == 2)
                    {
                        PasseEter(argv[2]);
                    }
                    else if (particulier == 4)
                    {
                        PasseYer(argv[2]);
                    }
                    else if (particulier == 5)
                    {
                        PasseCer(argv[2]);
                    }
                }
                else if (strcmp(argv[4], "futur") == 0)
                {
                    if (particulier == 3)
                    {
                        FuturSimple(argv[2]);
                    }
                    else if (particulier == 0)
                    {
                        FuturGer(argv[2]);
                    }
                    else if (particulier == 1)
                    {
                        FuturEler(argv[2]);
                    }
                    else if (particulier == 2)
                    {
                        FuturEter(argv[2]);
                    }
                    else if (particulier == 4)
                    {
                        FuturYer(argv[2]);
                    }
                    else if (particulier == 5)
                    {
                        FuturCer(argv[2]);
                    }
                }
                else if (valeurderetour == 1 && strcmp(argv[2], "aller") == 0)
                {
                    Aller();
                    printf("\nIl convient de noter que aller n'est pas du 1er groupe\n");
                }
                else
                {
                    manuel();
                }
            }
            //Définition de l'option -t et de -v combinés, comme la précédente mais dans l'autre sens
            else if (argc < 6 && strcmp(argv[1], "-t") == 0 && strcmp (argv[3], "-v") == 0)
            { 
                inverse:
                minuscule(argv[2]);
                minuscule(argv[4]);
                int valeurderetour = estdupremiergroupe(argv[4]);
                int particulier = estunverbeparticulier(argv[4]);
                if (valeurderetour == 1 && strcmp(argv[4], "aller") != 0)
                {
                    if (strcmp (argv[2], "present") == 0)
                    {
                        if (particulier == 3)
                        {
                            present(argv[4]);
                        }
                        else if (particulier == 0)
                        {
                            PresentGer(argv[4]);
                        }
                        else if (particulier == 1)
                        {
                            PresentEler(argv[4]);
                        }
                        else if (particulier == 2)
                        {
                            PresentEter(argv[4]);
                        }
                        else if (particulier == 4)
                        {
                            PresentYer(argv[4]);
                        }
                        else if (particulier == 5)
                        {
                            PresentCer(argv[4]);
                        }
                    }
                    else if (strcmp (argv[2], "imparfait") == 0)
                    {
                        if (particulier == 3)
                        {
                            Imparfait(argv[4]);
                        }
                        else if (particulier == 0)
                        {
                            ImparfaitGer(argv[4]);
                        }
                        else if (particulier == 1)
                        {
                            ImparfaitEler(argv[4]);
                        }
                        else if (particulier == 2)
                        {
                            ImparfaitEter(argv[4]);
                        }
                        else if (particulier == 4)
                        {
                            ImparfaitYer(argv[4]);
                        }
                        else if (particulier == 5)
                        {
                            ImparfaitCer(argv[4]);
                        }
                    }
                    else if (strcmp (argv[2], "passe") == 0)
                    {
                        if (particulier == 3)
                        {
                            Passe(argv[4]);
                        }
                        else if (particulier == 0)
                        {
                            PasseGer(argv[4]);
                        }
                        else if (particulier == 1)
                        {
                            PasseEler(argv[4]);
                        }
                        else if (particulier == 2)
                        {
                            PasseEter(argv[4]);
                        }
                        else if (particulier == 4)
                        {
                            PasseYer(argv[4]);
                        }
                        else if (particulier == 5)
                        {
                            PasseCer(argv[4]);
                        }
                    }
                    else if (strcmp (argv[2], "futur") == 0)
                    {
                        if (particulier == 3)
                        {
                            FuturSimple(argv[4]);
                        }
                        else if (particulier == 0)
                        {
                            FuturGer(argv[4]);
                        }
                        else if (particulier == 1)
                        {
                            FuturEler(argv[4]);
                        }
                        else if (particulier == 2)
                        {
                            FuturEter(argv[4]);
                        }
                        else if (particulier == 4)
                        {
                            FuturYer(argv[4]);
                        }
                        else if (particulier == 5)
                        {
                            FuturCer(argv[4]);
                        }
                    }
                    else if (valeurderetour == 1 && strcmp(argv[4], "aller") == 0)
                    {
                        Aller();
                        printf("\nIl convient de noter que aller n'est pas du 1er groupe\n");
                    }
                    else
                    {
                        manuel();
                    }
                }
            }
        }
        //Définition de l'option -h
        else if (argc < 2 && strcmp(argv[1], "-h") == 0)
        {
            manuel();
        }
        else if (argc < 6 && strcmp(argv[1], "-t") == 0 && strcmp(argv[3], "-v") == 0)
        {
            goto inverse;
        }
        else if (argc < 3 && strcmp(argv[1], "-t") == 0)
        {
            printf ("Renseigner le verbe svp : ");
            scanf ("%s", verbe);

            //Vérification du verbe et conversion en minuscule
            minuscule(verbe);
            minuscule(argv[2]);
            int vrai2 = estunverbeparticulier(verbe);
            int vrai1 = estdupremiergroupe(verbe);
 
            if (vrai1 == 1 && strcmp(verbe, "aller") != 0)
            {
                if (strcmp(argv[2], "present") == 0)
                {
                    if (vrai2 == 3)
                    {
                        present(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        PresentGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        PresentEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        PresentEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        PresentYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        PresentCer(verbe);
                    }
                }
                else if (strcmp(argv[2], "imparfait") == 0)
                {
                    if (vrai2 == 3)
                    {
                        Imparfait(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        ImparfaitGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        ImparfaitEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        ImparfaitEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        ImparfaitYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        ImparfaitCer(verbe);
                    }
                }
                else if (strcmp(argv[2], "passe") == 0)
                {
                    if (vrai2 == 3)
                    {
                        Passe(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        PasseGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        PasseEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        PasseEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        PasseYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        PasseCer(verbe);
                    }
                }
                else if (strcmp(argv[2], "futur") == 0)
                {
                    if (vrai2 == 3)
                    {
                        FuturSimple(verbe);
                    }
                    else if (vrai2 == 0)
                    {
                        FuturGer(verbe);
                    }
                    else if (vrai2 == 1)
                    {
                        FuturEler(verbe);
                    }
                    else if (vrai2 == 2)
                    {
                        FuturEter(verbe);
                    }
                    else if (vrai2 == 4)
                    {
                        FuturYer(verbe);
                    }
                    else if (vrai2 == 5)
                    {
                        FuturCer(verbe);
                    }
                }           
            }
            else if (vrai1 == 1 && strcmp(verbe, "aller") == 0)
            {
                Aller();
                printf ("Il est important de noter que Aller n'est pas du 1er groupe\n");
            }
            else if (vrai1 != 1)
            {
                printf ("\nCe verbe n'est pas du 1er groupe\n");
            }
        }
        else
        {
            manuel();
        }
    }
    return 0; 
}