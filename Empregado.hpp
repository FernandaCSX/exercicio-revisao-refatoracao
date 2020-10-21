#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  
  public:
    Empregado(): nome(""), salarioHora(0.0) {}
    
    Empregado(std::string novoNome, double salario): nome(novoNome), salarioHora(salario) {}
    
    virtual void visualizacaoDados(double horas) = 0;
    
    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
      const double jornadaDeTrabalho = 8.0;
      double tempoPago = horasTrabalhadas;
      
      if (horasTrabalhadas > jornadaDeTrabalho) {
        double horaExtra = horasTrabalhadas - jornadaDeTrabalho;
        const double taxaHoraExtra = 0.5;
        tempoPago += horaExtra * taxaHoraExtra;
      }
	  return tempoPago * salarioHora;
    }
    void setSalarioHora(double salario){
        salarioHora = salario;
    }
    void setNome(std::string novoNome){
        nome = novoNome;
    }
    double getSalarioHora(){
        return salarioHora;
    }
    std::string getNome(){
        return nome;
    }
    
 protected:
    double salarioHora;
    std::string nome;
	
};

#endif
