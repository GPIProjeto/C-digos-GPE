#ifndef NOTIFICACAO_H #define NOTIFICACAO_H

#include "cadastro_responsavel.h" 
#include "registro_frequencia.h"

void enviar_notificacao(const Responsavel* responsavel, const RegistroFrequencia* registro);

#endif
