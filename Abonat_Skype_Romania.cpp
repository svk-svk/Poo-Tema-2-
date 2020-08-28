
#include "Abonat_Skype_Romania.h"


Abonat_Skype_Romania:: Abonat_Skype_Romania ():Abonat_Skype(){

    adresa_mail="none";

}

Abonat_Skype_Romania:: Abonat_Skype_Romania (unsigned int id_persoana, std::string nume_persoana , std::string nr_telefon_abonat, unsigned int id_skype_abonat, std::string email_abonat)
: Abonat_Skype (id_persoana, std::move(nume_persoana), std::move(nr_telefon_abonat), id_skype_abonat){

    adresa_mail = std::move(email_abonat);

}

Abonat_Skype_Romania:: Abonat_Skype_Romania (const Abonat_Skype_Romania &Romania) : Abonat_Skype (Romania){

        adresa_mail = Romania.adresa_mail;

}

Abonat_Skype_Romania:: ~Abonat_Skype_Romania ()= default;

std::istream& operator>> (std::istream &f, Abonat_Skype_Romania &a){

    f >> static_cast<Abonat_Skype &>(a) >> a.adresa_mail;
    return f;

}

std::ostream& operator<< (std::ostream &g, Abonat_Skype_Romania &a){

    g<< static_cast<Abonat_Skype &>(a) << ", adresa de mail - " <<  a.adresa_mail;
    return g;

}

Abonat_Skype_Romania& Abonat_Skype_Romania:: operator= (const Abonat_Skype_Romania &Romania){

    if (this == &Romania)
        return *this;

    Abonat_Skype &aux = *this;
    aux = Romania;

    this -> adresa_mail = Romania.adresa_mail;

    return *this;
}

std::string Abonat_Skype_Romania:: getInfo (){

    return adresa_mail;
}