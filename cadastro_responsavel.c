#include <stdio.h>
#include "cadastro_responsavel.h"

void cadastrar_responsavel(Responsavel* responsavel) { 
  printf("Cadastro de Responsável:\n"); 
  printf("Nome: ");
  fgets(responsavel->nome, sizeof(responsavel->nome), stdin); 
  printf("Telefone: ");
  fgets(responsavel->telefone, sizeof(responsavel->telefone), stdin); 
  printf("CPF: ");
  fgets(responsavel->cpf, sizeof(responsavel->cpf), stdin); 
  printf("Email: ");
  fgets(responsavel->email, sizeof(responsavel->email), stdin);
}
