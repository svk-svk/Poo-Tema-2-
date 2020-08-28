
#include "Abonat.h"


Abonat:: Abonat ():Persoana(){

    nr_telefon="00000000000";
}
Abonat:: Abonat (unsigned int i ,std::string n ,std::string numar ) : Persoana(i, std::move(n)){

    nr_telefon = std::move(numar);
}

Abonat:: Abonat (const Abonat &abonat) : Persoana (abonat){

        nr_telefon = abonat.nr_telefon;

}

Abonat:: ~Abonat ()= default;

std::istream& operator>> (std::istream &f, Abonat &abonat){

    f >> static_cast<Persoana &>(abonat) ;

    f>> abonat.nr_telefon;
    return f;

}

std::ostream& operator<< (std::ostream &g, Abonat &abonat){

    g << static_cast<Persoana &>(abonat) <<", numar de telefon - " << abonat.nr_telefon;
    return g;

}

Abonat& Abonat:: operator= (const Abonat &abonat){

    if (this == &abonat)
        return *this;

    Persoana &p = *this;
    p = abonat;

    this -> nr_telefon = abonat.nr_telefon;

    return *this;
}