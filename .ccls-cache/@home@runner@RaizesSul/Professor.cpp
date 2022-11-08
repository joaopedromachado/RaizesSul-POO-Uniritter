#include "Professor.hpp"


Professor::Professor(string n, string ma, string c, string t, string ti): Matricula(n, ma, c, t)
{
  titulacao = ti;
}
void Professor::imprime()
{
  Matricula::imprime();
  cout << "Titulação: " << titulacao << endl << endl << endl;
}
// getters e setters não utilizados
// string Professor::getTitulacao()
// {
//   return titulacao;
// }
// void Professor::setTitulacao(string t)
// {
//   titulacao = t;
// }