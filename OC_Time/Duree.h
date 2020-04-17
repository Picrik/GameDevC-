#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>
#include <string>

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes =0);
    bool estEgal(Duree const& b) const;
    bool estPlusPetit(Duree const& b) const;
    Duree& operator+=(Duree const& a);
    void afficher() const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;

};

Duree operator+(Duree const& a, Duree const& b);

#endif