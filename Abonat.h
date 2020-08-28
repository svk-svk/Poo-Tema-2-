
#ifndef TEMA2_POO_ABONAT_H
#define TEMA2_POO_ABONAT_H

#include "Persoana.h"
#include<fstream>
#include<string>

class Abonat: public Persoana  {

private:

    std::string nr_telefon;

public:

    Abonat ();
    Abonat (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat);
    Abonat (const Abonat &abonat);
    ~Abonat () override;
    friend std::istream& operator>> (std::istream &f, Abonat &a);
    friend std::ostream& operator<< (std::ostream &g, Abonat &a);
    Abonat& operator= (const Abonat &abonat);


};

#endif //TEMA2_POO_ABONAT_H
