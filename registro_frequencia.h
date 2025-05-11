#ifndef REGISTRO_FREQUENCIA_H #define REGISTRO_FREQUENCIA_H

#include "cadastro_aluno.h"

typedef struct { 
  Aluno aluno; 
  char data[11]; 
  int presente;
} RegistroFrequencia;

void registrar_frequencia(RegistroFrequencia* registro);
#endif
