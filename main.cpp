#include<fstream>
#include "Agenda.h"

int main() {
    std::ifstream f("date.in");
    std::ofstream g("date.out");

    Agenda agenda;


    std::cin>>agenda;
    std::cout<<"citire "<<"\n";
    std::cout<<agenda;
    std::cout<<"Afisare"<<"\n";
}