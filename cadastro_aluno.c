#include <stdio.h>
#include "cadastro_aluno.h"

void cadastrar_aluno(Aluno* aluno) { 
printf("Cadastro de Aluno:\n"); 
printf("Nome: ");
fgets(aluno->nome, sizeof(aluno->nome), stdin); 
printf("Matrícula: ");
fgets(aluno->matricula, sizeof(aluno->matricula), stdin); 
printf("Data de Nascimento (DD/MM/AAAA): ");
fgets(aluno->data_nascimento, sizeof(aluno->data_nascimento), stdin);
