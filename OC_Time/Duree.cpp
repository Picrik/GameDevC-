#include "Duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{

}

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetit(Duree const& b) const
{
    if (m_heures < b.m_heures)
        return true;
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return true;
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
        return true;
    else
        return false;
}

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b)
{
    return !(a==b);
}

bool operator<(Duree const& a, Duree const& b)
{
    return a.estPlusPetit(b);
}

bool operator<=(Duree const& a, Duree const& b)
{
    if(a.estPlusPetit(b))
        return true;
    else if(a==b)
        return true;
    else
        return false;
}

bool operator>(Duree const& a, Duree const& b)
{
    return !(a<b);
}

bool operator>=(Duree const& a, Duree const& b)
{
    if(a>b)
        return true;
    else if(a==b)
        return true;
    else
        return false;
}

Duree& Duree::operator+=(const Duree& a)
{
    m_secondes += a.m_secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    m_minutes += a.m_minutes;
    m_heures += m_heures / 60;
    m_minutes %= 60;

    m_heures += a.m_heures;

    return *this;
}

void Duree::afficher() const
{
    cout << "Secondes : " << m_secondes << endl;
    cout << "Minutes : " << m_minutes << endl;
    cout << "Heures : " << m_heures << endl;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}