#include <stdio.h> #include "notificacao.h"

void enviar_notificacao(const Responsavel* responsavel, const RegistroFrequencia* registro) { 
  if (!registro->presente) {
    printf("Enviando notificação para %s sobre a ausência de %s na data %s.\n", 
      responsavel->nome, registro->aluno.nome, registro->data);
    }
}
