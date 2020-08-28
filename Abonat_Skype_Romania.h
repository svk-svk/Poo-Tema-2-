
#ifndef TEMA2_POO_ABONAT_SKYPE_ROMANIA_H
#define TEMA2_POO_ABONAT_SKYPE_ROMANIA_H

#include "Abonat.h"
#include "Abonat_Skype.h"
#include<fstream>
#include<string>

class Abonat_Skype_Romania: public Abonat_Skype
{
private:

    std::string adresa_mail;

public:
    Abonat_Skype_Romania ();
    Abonat_Skype_Romania (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat, std::string email_abonat);
    Abonat_Skype_Romania (const Abonat_Skype_Romania &Romania);
    ~Abonat_Skype_Romania () override;
    friend std::istream& operator>> (std::istream &f, Abonat_Skype_Romania &a);
    friend std::ostream& operator<< (std::ostream &g, Abonat_Skype_Romania &a);
    Abonat_Skype_Romania& operator= (const Abonat_Skype_Romania &Romania);
    std::string getInfo ();
};

#endif //TEMA2_POO_ABONAT_SKYPE_ROMANIA_H
