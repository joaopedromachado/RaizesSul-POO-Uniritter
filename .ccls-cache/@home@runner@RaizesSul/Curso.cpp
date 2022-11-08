#include "Curso.hpp"


int contadorAlunos = 0;
int contadorProfessores = 0;
int contadorCursos = 0;

Curso::Curso(string nc, string dc, string h, string di, string df)
{
  nomeCurso = nc;
  diaCurso = dc;
  horario = h;
  dataInicio = di;
  dataFim = df;
  vetorAluno = new Aluno*[30];
  vetorProfessor = new Professor*[1];
  vetorCurso = new Curso*[1];
}

void Curso::adicionarAluno(Aluno *aluno)
{
  vetorAluno[contadorAlunos++] = aluno;
}
void Curso::adicionarProfessor(Professor *professor)
{
  vetorProfessor[contadorProfessores++] = professor;
}
void Curso::imprime()
{
  cout << endl << "Curso: " << nomeCurso << endl;
  cout << "Dia da semana: "<< diaCurso << endl;
  cout << "Horario:" << horario << endl;
  cout << "Data de inicio: " << dataInicio << endl;
  cout << "Data do fim: " << dataFim << endl;
  for (int i = 0; i < contadorCursos; i++) 
  {
    if(vetorCurso[i] != NULL) 
    {
      cout << endl << "Curso " << i << ": " << endl;
      vetorCurso[i]->imprime();
    }
  }
  cout << endl;
  cout << "Alunos: " << endl << endl;
  for (int i = 0; i < contadorAlunos; i++)
  {
    if(vetorAluno[i] != NULL)
    {
      vetorAluno[i]->imprime();
    }
  }
  cout << "Professor: " << endl;

  for (int i = 0; i < contadorProfessores; i++) 
  {
    if(vetorProfessor[i] != NULL) 
    {
      vetorProfessor[i]->imprime();
    }
    
  }
} 
// getters e setters não utilizados
  
// string Curso::getDiaCurso()
// {
//   return diaCurso;
// }
// string Curso::getNomeCurso()
// {
//   return nomeCurso;
// }
// string Curso::getHorario()
// {
//   return horario;
// }
// string Curso::getDataInicio()
// {
//   return dataInicio;
// }
// string Curso::getDataFim()
// {
//   return dataFim;
// }
// void Curso::setDiaCurso(string dc)
// {
//   diaCurso = dc;
// }
// void Curso::setNomeCurso(string n)
// {
//   nomeCurso = n;
// }
// void Curso::setHorario(string h)
// {
//   horario = h;
// }
// void Curso::setDataInicio(string di)
// {
//   dataInicio = di;
// }
// void Curso::setDataFim(string df)
// {
//   dataFim = df;
// }



