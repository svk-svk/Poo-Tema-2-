
#include "Abonat_Skype.h"
#include<fstream>
#include<string>


Abonat_Skype::Abonat_Skype():Abonat (){

    id_skype=0;
}

Abonat_Skype::Abonat_Skype(unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat)
:Abonat (id_persoana, std::move(nume_persoana), std::move(nr_telefon_abonat)) {

    id_skype = id_skype_abonat;
}

Abonat_Skype:: Abonat_Skype (const Abonat_Skype &Skype) : Abonat (Skype){

        id_skype = Skype.id_skype;

}

Abonat_Skype:: ~Abonat_Skype ()= default;

std::istream& operator>> (std::istream &f, Abonat_Skype &a){

    f >> static_cast<Abonat &>(a) >> a.id_skype;
    return f;

}

std::ostream& operator<< (std::ostream &g, Abonat_Skype &a){

    g << static_cast<Abonat &>(a) << ", id skype - " <<a.id_skype;
    return g;

}

Abonat_Skype& Abonat_Skype:: operator= (const Abonat_Skype &Skype){

    if (this == &Skype)
        return *this;
    
    Abonat &aux = *this;
    aux = Skype;

    this -> id_skype = Skype.id_skype;

    return *this;

}