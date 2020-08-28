
#ifndef TEMA2_POO_ABONAT_SKYPE_EXTERN_H
#define TEMA2_POO_ABONAT_SKYPE_EXTERN_H

#include "Abonat_Skype.h"
#include<fstream>
#include<string>


class Abonat_Skype_Extern: public Abonat_Skype
{

private:

    std::string tara;

public:

    Abonat_Skype_Extern();
    Abonat_Skype_Extern (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat, std::string tara_abonat);
    Abonat_Skype_Extern (const Abonat_Skype_Extern &Extern);
    ~Abonat_Skype_Extern () override;
    friend std::istream& operator>> (std::istream &f, Abonat_Skype_Extern &a);
    friend std::ostream& operator<< (std::ostream &g, Abonat_Skype_Extern &a);
    Abonat_Skype_Extern& operator= (const Abonat_Skype_Extern &Extern);

    std::string getInfo ();

};

#endif //TEMA2_POO_ABONAT_SKYPE_EXTERN_H
