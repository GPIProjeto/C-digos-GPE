#ifndef CADASTRO_RESPONSAVEL_H #define CADASTRO_RESPONSAVEL_H

typedef struct { 
char nome[100];
char telefone[15]; char cpf[15];
char email[100];
} Responsavel;
void cadastrar_responsavel(Responsavel* responsavel); 
#endif
