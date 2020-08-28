
#include "Abonat_Skype_Extern.h"


Abonat_Skype_Extern::Abonat_Skype_Extern() :Abonat_Skype(){

    tara="none";
}

Abonat_Skype_Extern:: Abonat_Skype_Extern (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat, std::string tara_abonat)
: Abonat_Skype (id_persoana, std::move(nume_persoana), std::move(nr_telefon_abonat), id_skype_abonat){

    tara = std::move(tara_abonat);
}

Abonat_Skype_Extern:: Abonat_Skype_Extern (const Abonat_Skype_Extern &Extern) : Abonat_Skype (Extern){

        tara = Extern.tara;

}

Abonat_Skype_Extern:: ~Abonat_Skype_Extern ()= default;

std::istream& operator>> (std::istream &f, Abonat_Skype_Extern &a){

    f >> static_cast<Abonat_Skype &>(a) >>a.tara;
    return f;

}

std::ostream& operator<< (std::ostream &g, Abonat_Skype_Extern &a){

    g<< static_cast<Abonat_Skype &>(a) << ", tara - " <<  a.tara;
    return g;

}

Abonat_Skype_Extern& Abonat_Skype_Extern:: operator= (const Abonat_Skype_Extern &Extern){

    if (this == &Extern)
        return *this;

    Abonat_Skype &aux= *this;
    aux = Extern;

    this -> tara = Extern.tara;

    return *this;

}

std::string Abonat_Skype_Extern:: getInfo (){

    return tara;
}