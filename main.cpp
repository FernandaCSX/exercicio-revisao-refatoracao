#include "Engenheiro.cpp"
#include "Vendedor.cpp"
#include <vector>

int main() {

  std::vector<Engenheiro> eng(3); 
  eng[0] = Engenheiro("Joao Snow", 35, 3);
  eng[0].visualizacaoDados(9.5);
  
  eng[1] = Engenheiro("Daniela Targaryen", 30, 1);
  eng[1].visualizacaoDados(8.0);
  
  eng[2] = Engenheiro("Bruno Stark", 30, 2);
  eng[2].visualizacaoDados(8.0);
  
  std::vector<Vendedor> vend(3);
  vend[0] = Vendedor("Tonho Lannister", 20, 5000);
  vend[0].visualizacaoDados(6.0);
  
  vend[1] = Vendedor("Jose Mormont", 25, 3000);
  vend[1].visualizacaoDados(8.0);

  vend[2] = Vendedor("Sonia Stark", 30, 4000);
  vend[2].visualizacaoDados(8.0);
  
  
  return 0;	
}
