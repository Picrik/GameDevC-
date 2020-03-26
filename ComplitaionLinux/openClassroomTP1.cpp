#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // création du nombre alétoire
    int nbrAleatoire(0);
    srand(time(0));

    cout << "Bienvenue dans mon jeu" <<endl;
    cout << "Saissiez le mot à faire deviner" <<endl;

    // saisie de 1 mot
    string motMystere;
    cin >> motMystere;
    cout << "Votre mot mystere est " << motMystere << endl;

    // mélange du mot
    int inc(0);
    string motMelange = motMystere;
    while(inc < motMystere.size())
    {
        nbrAleatoire = rand()%motMelange.size();
        char letterHasard = motMelange[nbrAleatoire];
        motMelange.erase(nbrAleatoire, 1);
        motMelange = motMelange + letterHasard;
        // cout << motMelange << endl;
        inc ++;
    }

    // affichage du mot mélangé
    cout << "le mot mystere est " << motMelange << endl;

    // boucle devinnette
    string motUtilisateur;
    while(motUtilisateur != motMystere)
    {
        cout << "Quel est le mot mystere ?" << endl;
        cin >> motUtilisateur;
    }

    cout << "Bravo vous avez trouvé !";

    return 0;
}