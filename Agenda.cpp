
#include "Agenda.h"

Agenda::Agenda(int n): agenda(n) {

}

Agenda:: Agenda (Agenda &ag) {

        agenda = ag.agenda;

}

std :: istream& operator >> (std :: istream &f, Agenda &ag) {

    int n;
    std::cout<<"n=";
    f>>n;
    for (int i = 0; i < n; ++i) {
        std::string tip;
        f>>tip;

        if(tip=="Abonat_Skype_Extern")
        {
            Abonat_Skype_Extern *aux;
            f>>*aux;
            ag.agenda.push_back(aux);
        }

        else if(tip=="Abonat_Skype_Romania")
        {
            Abonat_Skype_Romania *aux;
            f>>*aux;
            ag.agenda.push_back(aux);

        }

        else if(tip=="Abonat_Skype")
        {
            Abonat_Skype *aux;
            f>>*aux;
            ag.agenda.push_back(aux);

        }

        else if(tip=="Abonat")
        {std::cout<<"Abonat";
            Abonat aux;
            f>>aux;
            ag.agenda.push_back(&aux);
            std::cout<<"Gata";


        }


    }
    return f;
}


std :: ostream& operator << (std :: ostream &g, Agenda &ag) {

    int n = ag.agenda.size();
    for (int i = 0; i < n; ++i) {std::cout<<"Afisare";
        if(typeid(*ag.agenda[i])==typeid(Abonat_Skype_Extern))

            g << dynamic_cast<Abonat_Skype_Extern &>(*ag.agenda[i]);

        else if(typeid(*ag.agenda[i])==typeid(Abonat_Skype_Romania))
            g << dynamic_cast<Abonat_Skype_Romania &>(*ag.agenda[i]);

        else if(typeid(*ag.agenda[i])==typeid(Abonat_Skype))
        g << dynamic_cast<Abonat_Skype &>(*ag.agenda[i]);

        else if(typeid(*ag.agenda[i])==typeid(Abonat))
        g << dynamic_cast<Abonat &>(*ag.agenda[i]);
    }
    return g;
}

Agenda &Agenda::operator=(Agenda const &ag) {

    if (this == &ag) return *this;
    int n = ag.agenda.size();
    for (int i = 0; i < n; ++i) {

        if(typeid(*ag.agenda[i])==typeid(Abonat_Skype_Extern))
        {
            Abonat_Skype_Extern *aux;
            *aux= dynamic_cast<Abonat_Skype_Extern &>(*ag.agenda[i]);
            agenda.push_back(aux);
        }

        else if(typeid(*ag.agenda[i])==typeid(Abonat_Skype_Romania))
        {
            Abonat_Skype_Romania *aux;
            *aux= dynamic_cast<Abonat_Skype_Romania &>(*ag.agenda[i]);
            agenda.push_back(aux);
        }

        else if(typeid(*ag.agenda[i])==typeid(Abonat_Skype))
        {
            Abonat_Skype *aux;
            *aux= dynamic_cast<Abonat_Skype &>(*ag.agenda[i]);
            agenda.push_back(aux);
        }

        else if(typeid(*ag.agenda[i])==typeid(Abonat))
        {
            Abonat *aux=new Abonat();
            *aux= dynamic_cast<Abonat &>(*ag.agenda[i]);
            agenda.push_back(aux);
        }
    }
    return *this;
}

Persoana *Agenda::operator[](const std::string& nume) {

    for ( auto &i: agenda) {
        if (i->getName() == nume) {

            return i;
        }
    }
    return nullptr;
}



Agenda::~Agenda() {
    for (auto &persoana : agenda ) {
        delete persoana;
    }
}


