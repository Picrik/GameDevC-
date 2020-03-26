#include "Duree.h"
#include "Duree.cpp"
#include <iostream>
#include <string>

int main()
{
    Duree duree1(0,10,20), duree2(0,15,2);

    if(duree1 == duree2)
    {
        std::cout << "Les deux durées sont égales" << std::endl;
    }
    else
    {
        std::cout << "Les deux durées sont différentes" << std::endl;
    }
    

    return 0;
}