
#ifndef TEMA2_POO_ABONAT_SKYPE_H
#define TEMA2_POO_ABONAT_SKYPE_H

#include "Abonat.h"
#include<fstream>
#include<string>

class Abonat_Skype: public Abonat{

private:

    unsigned int id_skype;

public:

    Abonat_Skype ();
    Abonat_Skype (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat);
    Abonat_Skype (const Abonat_Skype &Skype);
    ~Abonat_Skype () override;
    friend std::istream& operator>> (std::istream &f, Abonat_Skype &a);
    friend std::ostream& operator<< (std::ostream &g, Abonat_Skype &a);
    Abonat_Skype& operator= (const Abonat_Skype &Skype);

};

#endif //TEMA2_POO_ABONAT_SKYPE_H