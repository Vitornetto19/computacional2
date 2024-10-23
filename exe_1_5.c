/* 
Calcule o salario de um professor horista...
perguntar o numero de horas trabalhadas,
colocar na tela o salario bruto, liquido e o total
de descontos, sabendo que o imposto de renda e de
30%, e hora-aula: R$ 40.
*/

#include <stdio.h>

int main(){

  float horas_trab = 0;
  
  printf("\nQuantas horas voce trabalhou ?");
  scanf("%f", &horas_trab);
  
  float salario_brut = (horas_trab * 40);
  float salario_liq = (salario_brut * 7/10);
  float desconto = (salario_brut * 3/10);
  
  printf("\nSalario bruto: R$ %.2f\n", salario_brut);
  printf("\nSalario liquido: R$ %.2f\n", salario_liq);
  printf("\nDesconto do imposto de renda R$ %.2f\n", desconto);
  
  return 0;


}


