#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  public:
  
    Vendedor(): Empregado(), quotaMensalVendas(0.0) {}
    
    Vendedor(std::string novoNome, double salario, double _quota): Empregado(novoNome, salario), quotaMensalVendas(_quota) {}
    
    double quotaTotalAnual() {
        const int meses = 12;
	    return quotaMensalVendas * meses;
	}
    
    void visualizacaoDados(double horas){
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;  
        std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
        std::cout << std::endl;
    }
    
    void setQuotaMensalVendas(double _quota){
        quotaMensalVendas = _quota;
    }
    
    double getQuotaMensalVendas(){
        return quotaMensalVendas;
    }
    
  private:
	double quotaMensalVendas;
	
	
};
