#include <stdio.h>
#include "registro_frequencia.h"

void registrar_frequencia(RegistroFrequencia* registro) { 
  printf("Registro de Frequência:\n");
  printf("Data (DD/MM/AAAA): ");
  fgets(registro->data, sizeof(registro->data), stdin); 
  printf("Aluno presente? (1 - Sim, 0 - Não): "); 
  scanf("%d", &registro->presente);
  getchar();
}
