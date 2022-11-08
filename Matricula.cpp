#include "Matricula.hpp"




Matricula::Matricula(string n, string ma, string c, string t)
{
  nome = n;
  matricula = ma;
  cpf = c;
  telefone = t;
}
void Matricula::imprime()
{
  cout << "Nome: " << nome << endl;
  cout << "Matricula: " << matricula << endl;
  cout << "CPF: " << cpf << endl;
  cout << "Telefone de contato: " << telefone << endl;
}


//getters e setters não utilizados

// string Matricula::getNome()
// {
//   return nome;
// }
// string Matricula::getMatricula()
// {
//   return matricula;
// }
// string Matricula::getCpf()
// {
//   return cpf;
// }
// string Matricula::getTelefone()
// {
//   return telefone;
// }
// void Matricula::setNome(string n)
// {
//   nome = n; 
// }
// void Matricula::setMatricula(string ma)
// {
//   matricula = ma;
// }
// void Matricula::setCpf(string c)
// {
//   cpf = c;
// }
// void Matricula::setTelefone(string t)
// {
//   telefone = t;
// }