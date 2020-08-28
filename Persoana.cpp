
#include "Persoana.h"

Persoana:: Persoana ()
{
    id=0;
    nume="none";
}

Persoana:: Persoana (unsigned int id_persoana , std::string nume_persoana)
{
    id = id_persoana;
    nume = std::move(nume_persoana);
}

Persoana:: Persoana (const Persoana &pers)
{
    id = pers.id;
    nume = pers.nume;

}

Persoana:: ~Persoana ()= default;

std::istream& operator>> (std::istream &f, Persoana &p)
{
    f >>p.id>>p.nume;
    return f;
}

std::ostream& operator<< (std::ostream &g, Persoana &p)
{
    g<<"\nid - "<<p.id<<", name - "<<p.nume;
    return g;
}


Persoana& Persoana:: operator= (const Persoana &pers)
{
    if (this == &pers) return *this;

    this -> id = pers.id;
    this -> nume = pers.nume;

    return *this;
}

std::string Persoana::getName() const {

    return nume;
}

unsigned int Persoana::getId() const {

    return id;
}

