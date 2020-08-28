
#ifndef TEMA2_POO_AGENDA_H
#define TEMA2_POO_AGENDA_H


#include "Persoana.h"
#include "Abonat.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Extern.h"
#include "Abonat_Skype_Romania.h"
#include<fstream>
#include<string>
#include <vector>

class Agenda {

private:

    std::vector<Persoana*> agenda;

public:

    explicit Agenda(int n=0);
    Agenda( Agenda &ag);
    friend std :: istream& operator >>(std::istream &f,Agenda &ag);
    friend std :: ostream& operator << (std :: ostream &g, Agenda &ag);
    Agenda& operator=(Agenda const &ag);
    Persoana* operator[](const std::string& nume_de_cautat);

    ~Agenda();



};

#endif //TEMA2_POO_AGENDA_H
