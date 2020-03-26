#include <iostream>
using namespace std;

int ajouteDeux(int nombreRecu)
{
    int valeur(nombreRecu +2);
    return valeur;
}

void direBonjour()
{
    cout << "dire bonjour" << endl;
}

int main()
{
    int a(4), b(5);

    cout << "a vaut : " << a << " et be vaut :" << b << endl;

    cout << "affectaton" << endl;

    a = b;

    cout << "a vaut : " << a << " et be vaut" << b << endl;

    //changement de valeur;

    a = 6;

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    cout << "Quel age avez-vous ?" << endl;
    int ageUtilisateur(0); // préparation de la place mémoire

    cin >> ageUtilisateur; // Reception de la valeur

    cout << "Vous avez " << ageUtilisateur << " ans !" << endl; // Et on affiche la réponse

    int nombreEnfant(0);

    cout << "Combien d'enfants avez vous ?" << endl;

    cin >> nombreEnfant;

    if (nombreEnfant == 1)
    {
        cout << "vous avez " << nombreEnfant << " enfant" << endl;
    }

    else if (nombreEnfant > 1)
    {
        cout << "vous avez " << nombreEnfant << " enfants" << endl;
    }

    else
    {
        cout << "vous n'avez pas d'enfants" <<endl;
    }
    // cout<< "vous avez " << nombreEnfant << " enfant";

    int compteur(0);

    for (compteur = 0; compteur < 10; ++compteur)
    {
        cout << compteur << endl;
    }

    cout << ajouteDeux(3) << endl;

    direBonjour();

    return 0;
}