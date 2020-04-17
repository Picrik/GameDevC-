#include "Duree.h"
#include "Duree.cpp"
#include <iostream>
#include <string>

int main()
{
    Duree duree1(0,10,20), duree2(0,10,20);

    if(duree1 == duree2)
    {
        std::cout << "Les deux durées sont égales" << std::endl;
    }
    else
    {
        std::cout << "Les deux durées sont différentes" << std::endl;
    }
    
    if(duree1<duree2)
    {
        std::cout << "Elle est plus petite" << std::endl;
    }
    else
    {
        std::cout << "Elle est plus grande" << std::endl;
    }

    if(duree1<=duree2)
    {
        std::cout << "Elle est plus petite ou égale" << std::endl;
    }
    else
    {
        std::cout << "Elle est plus grande" << std::endl;
    }

    if(duree1>duree2)
    {
        std::cout << "Elle est plus grande vraie" << std::endl;
    }
    else
    {
        std::cout << "Elle est plus petite" << std::endl;
    }
    if(duree1>=duree2)
    {
        std::cout << "Elle est plus grande vraie2" << std::endl;
    }
    else
    {
        std::cout << "Elle est plus petite 2" << std::endl;
    }


    duree1+=duree2;
    duree1.afficher();

    Duree duree3 = duree1 + duree2;
    duree3.afficher();

    return 0;
}