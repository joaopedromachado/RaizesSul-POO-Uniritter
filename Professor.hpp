#ifndef Professor_HPP
#define Professor_HPP
#include "Matricula.hpp"

class Professor: public Matricula
{
public:
   Professor(string n, string ma, string c, string t, string ti);
   void imprime();
   // string getTitulacao();
   // void setTitulacao(string t);
private:
   string matriculaProfessor, titulacao; 
};

#endif