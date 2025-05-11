#ifndef CADASTRO_ALUNO_H #define CADASTRO_ALUNO_H

typedef struct { char nome[100];
char matricula[20];
char data_nascimento[11];
} Aluno;
void cadastrar_aluno(Aluno* aluno); #endif
