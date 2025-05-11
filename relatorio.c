#include <stdio.h> 
#include "relatorio.h"

void gerar_relatorio(const RegistroFrequencia* registros, int tamanho) { 
  printf("Relatório de Frequência:\n");
  for (int i = 0; i < tamanho; i++) { 
    printf("Aluno: %sData: %sStatus: %s\n",
        registros[i].aluno.nome, registros[i].data,
        registros[i].presente ? "Presente" : "Ausente");
    }
}
