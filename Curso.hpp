#ifndef Curso_HPP
#define Curso_HPP

#include "Aluno.hpp"
#include "Professor.hpp"


class Curso
{

public:
 Curso(string nc, string dc, string h, string di, string df);

   void adicionarAluno(Aluno* aluno);
   void adicionarProfessor(Professor* professor);
   void imprime();
   // string getDiaCurso();
   // string getNomeCurso();
   // string getHorario();
   // string getDataInicio();
   // string getDataFim();
   // void setDiaCurso(string dc);
   // void setNomeCurso(string n);
   // void setHorario(string h);
   // void setDataInicio(string di);
   // void setDataFim(string df);
private:
   string nomeCurso, diaCurso, horario, dataInicio, dataFim;
   Aluno **vetorAluno;
   Professor **vetorProfessor;
   Curso **vetorCurso;
 


};

#endif