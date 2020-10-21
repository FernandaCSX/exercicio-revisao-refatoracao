#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
   
  public:
    Engenheiro(): Empregado(), projetos(0) {}
    
    Engenheiro(std::string novoNome, double salario, int _projetos): Empregado(novoNome, salario), projetos(_projetos) {}
    
    void visualizacaoDados(double horas) {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
        std::cout << "Projetos: " << projetos << std::endl;
        std::cout << std::endl;
    }
    void setProjetos(int _projetos){
        projetos = _projetos;
    }
    int getProjetos(){
        return projetos;
    }
    
  private:
	int projetos;
	
	
};
