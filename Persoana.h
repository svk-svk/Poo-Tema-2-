
#ifndef TEMA2_POO_PERSOANA_H
#define TEMA2_POO_PERSOANA_H
#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include "Persoana.h"

class Persoana{

private:

    unsigned int id;
    std::string nume;

public:

    Persoana ();
    Persoana (unsigned int id_persoana, std::string nume_persoana );
    Persoana (const Persoana &pers);
    virtual ~Persoana ();
    friend std::istream& operator>> (std::istream &f, Persoana &p);
    friend std::ostream& operator<< (std::ostream &g, Persoana &p);
    Persoana& operator= (const Persoana &pers);
    std::string getName() const;
    unsigned int getId() const;


};

#endif //TEMA2_POO_PERSOANA_H