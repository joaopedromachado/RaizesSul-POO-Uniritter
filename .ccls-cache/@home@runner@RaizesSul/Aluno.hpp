#include "Matricula.hpp"

class Aluno: public Matricula
{

private:
  string nomeResponsavel, dataMatricula;
  int idade;

public:
  Aluno(string n, string ma, string c, string t, string nr, int id, string dm);
     
  void imprime();  

  // string getNomeResponsavel();
  // int getIdade();
  // void setNomeResponsavel(string nr);
  // void setIdade(int id); 
};
