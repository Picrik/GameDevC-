#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// prototype de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes);

// Main
int main()
{
    cout << nombreDeSecondes(1,10,25) << endl;

    int const nombreMeilleurSCores(5);
    int meilleurScores[nombreMeilleurSCores];

    meilleurScores[0] = 1561551;
    meilleurScores[1] = 1511654;
    meilleurScores[2] = 551011;
    meilleurScores[3] = 32313215;
    meilleurScores[4] = 564516;

    for(int i(0);i<nombreMeilleurSCores; i++)
    {
        cout << meilleurScores[i] << endl;
    }

    string const nomFichier("/home/picrik/github/GameDevC-/ComplitaionTestLinux/test.txt");
    ofstream monFlux(nomFichier.c_str(), ios::app);

    if (monFlux)
    {
        monFlux << "Bonjour, je suis une phrase ecrite dans un fichier" << endl;
        monFlux << 42.1133 << endl;
        int age(25);
        monFlux << "J'ai " << age << " ans" << endl;
    }
    else
    {
        cout << "Erreur : impossible d'ouvrir le fichier." << endl;
    }
    
    ifstream fichier(nomFichier);

    if(fichier)
    {
        string ligne;

        while(getline(fichier, ligne))
        {
            cout << ligne << endl;
        }
    }
    else
    {
        cout << "Une erreur est survenue" << endl;
    }
    


    return 0;
}

// Définition de la fonction

int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total =0;

    total = heures * 60 * 60;
    total += minutes *60;
    total += secondes;

    return total;
}