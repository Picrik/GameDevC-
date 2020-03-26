#include <iostream>
#include <string>
#include "Personnage.h"
#include "Personnage.cpp"
#include "Arme.h"
#include "Arme.cpp"


using namespace std;

int main()
{
    Personnage david, goliath("Epée aiguisée", 20);
    // création des deux objets

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache", 40);
    goliath.attaquer(david);

    //temps mort regardons les stats de chacun
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}