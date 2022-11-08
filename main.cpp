#include "Curso.hpp"





int main() 
{
  int opMenu = 0 , contador = 0, contadorAlunos = 0, contadorProfessores = 0, contadorCursos = 0, idade = 0;
  string nome, matricula, cpf, telefone, nomeResponsavel, titulacao, dataMatricula, nomeCurso;
  string diaCurso;  
  string dataInicio; 
  string dataFim;
  string horario;
  int codigoCurso, codigoAluno, codigoProfessor;

  Aluno *vetorAluno[30];
  Professor *vetorProfessor[10];
  Curso *vetorCurso[10];


  do{
    
    cout << "===================================================== \n";
    cout << "\t\t\tMENU\n";
    cout << "===================================================== \n";
    cout << " 1. Cadastrar aluno\n";
    cout << " 2. Cadastrar professor\n";
    cout << " 3. Cadastrar curso \n";
    cout << " 4. Cadastrar aluno em um curso \n";
    cout << " 5. Designar professor a um curso \n";
    cout << " 6. Lista de alunos \n";
    cout << " 7. Lista de cursos \n";
    cout << " 8. Lista de professores \n";
    cout << " 9. Encerrar sistema \n";
    cin >> opMenu;
  
    if(opMenu == 1)
    {
      cout << "Nome do aluno: ";
      cin >> nome;
      cout << "Número da matricula: ";
      cin >> matricula;
      cout << "CPF do aluno: ";
      cin >> cpf;
      cout << "Telefone do aluno: ";
      cin >> telefone;
      cout << "Nome do responsavel do aluno: ";
      cin >> nomeResponsavel;
      cout << "Idade do aluno: ";
      cin >> idade;
      cout << "Digite a data de mátricula (xx/xx/xx): ";
      cin >> dataMatricula;
      vetorAluno[contadorAlunos++] = new Aluno(nome, matricula, cpf, telefone, nomeResponsavel, idade, dataMatricula);
    }else if(opMenu == 2)
    {
      cout << "Nome do professor: ";
      cin >> nome;
      cout << "Número de matricula do professor: ";
      cin >> matricula;
      cout << "CPF do professor: ";
      cin >> cpf;
      cout << "Telefone do professor: ";
      cin >> telefone;
      cout << "Titulação do professor: ";
      cin >> titulacao;
      vetorProfessor[contadorProfessores++] = new Professor(nome,matricula, cpf, telefone, titulacao);
    }
    else if(opMenu == 3)
    {
      cout << "Nome do curso: ";
      cin >> nomeCurso;
      cout << "Dia da semana do curso (Ex: Seg/Ter): ";
      cin >> diaCurso;
      cout << "Turno do curso: ";
      cin >> horario;
      cout << "Escolha a data inicio (mm/aa): ";
      cin >> dataInicio;
      cout << "Escolha a data fim (mm/aa): ";
      cin >> dataFim;
      vetorCurso[contadorCursos++] = new Curso(nomeCurso, diaCurso, horario, dataInicio, dataFim);
    }
    else if(opMenu == 4)
    {
      cout << "Escolha o codigo do curso: ";
      cin >> codigoCurso;
      cout << "Escolha o codigo do aluno: ";
      cin >> codigoAluno;
      vetorCurso[codigoCurso]->adicionarAluno(vetorAluno[codigoAluno]);
    }
    else if(opMenu == 5)
    {
      cout << "Escolha o curso: ";
      cin >> codigoCurso;
      cout << "Escolha o professor: ";
      cin >> codigoProfessor;
      vetorCurso[codigoCurso]->adicionarProfessor(vetorProfessor[codigoProfessor]);
    }
    else if(opMenu == 6)
    {
      for (int i = 0; i < contadorAlunos; i++)
      {
        if(vetorAluno[i] != NULL)
        {
          cout << endl << "Código: " << i << endl ;
          vetorAluno[i]->imprime();
        }
      }
    }
    else if(opMenu == 7)
    {
      for (int i = 0; i < contadorCursos; i++)
      {
        if(vetorCurso[i] != NULL)
        {
          cout << endl << "Código: " << i << endl ;
          vetorCurso[i]->imprime();
        }  
      }
    }
    else if(opMenu == 8)
    {
      for (int i = 0; i < contadorProfessores; i++)
      {
        if(vetorProfessor[i] != NULL)
        {
          cout << endl << "Código: " << i << endl ;
          vetorProfessor[i]->imprime();
        }
      }
    }
    else if(opMenu == 9)
    {
      cout << "Sistema encerrado!" << endl;
    }
    else
    {
      cout << "Opcao invalida!" << endl;
    }
  }while(opMenu != 9);

  return 0;
  
}




































//salve
//bora terminar essa belezura que tu fez
// se quiser call me avisa no discord

/* 
void mostrarMenu() {

  cout << "===================================================== \n";
  cout << "\t\t\tMENU\n";
  cout << "===================================================== \n";
  cout << " 1. Cadastrar aluno\n";
  cout << " 2. Cadastrar professor\n";
  cout << " 3. Cadastrar curso \n";
  cout << " 4. Cadastrar aluno em um curso \n";
  cout << " 5. Designar professor a um curso \n";
  cout << " 6. Lista de alunos \n";
  cout << " 7. Lista de cursos \n";
  cout << " 8. Encerrar sistema \n";
*/