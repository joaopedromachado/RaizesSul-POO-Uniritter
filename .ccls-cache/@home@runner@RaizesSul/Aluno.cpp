
#include "Aluno.hpp"



Aluno::Aluno(string n, string ma, string c, string t, string nr, int id, string dm): Matricula(n, ma, c, t)
{
  nomeResponsavel = nr;
  idade = id;
  dataMatricula = dm;
}
void Aluno::imprime()
{
  Matricula::imprime();
  cout << "Nome do responsável: " << nomeResponsavel << endl;
  cout << "Idade: " << idade << endl;
  cout << "Data de matricula: " << dataMatricula << endl << endl << endl;




  //getters e setters não utilizados


  // string Aluno::getNomeResponsavel()
  // {
  //   return nomeResponsavel;
  // }
  // int Aluno::getIdade()
  // {
  //   return idade;
  // }

  // void Aluno::setNomeResponsavel(string nr)
  // {
  //   nomeResponsavel = nr;
  // }

  // void Aluno::setIdade(int id)
  // {
  //   idade = id;
  // }
}
