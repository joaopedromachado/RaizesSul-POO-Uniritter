#ifndef Matricula_HPP
#define Matricula_HPP

#include <iostream>
using namespace std;

class Matricula
{
  public:
    Matricula(string nome, string matricula, string cpf, string telefone);
    void imprime();
    // string getNome();
    // string getMatricula();
    // string getCpf();
    // string getTelefone();
    // void setNome(string n);  
    // void setMatricula(string ma);
    // void setCpf(string c);
    // void setTelefone(string t);
  private: 
    string matricula, nome, cpf, telefone;
    int dia, mes, ano;    
         
    

};

#endif