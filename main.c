#include <stdio.h> #include <string.h> 
#include "autenticacao.h"
#include "cadastro_aluno.h" #include "cadastro_responsavel.h" 
#include "registro_frequencia.h" 
#include "notificacao.h"
#include "relatorio.h"
#define MAX_REGISTROS 100 
int main() {
  char email[100]; 
  char senha[50];

  printf("Login:\n");
  printf("Email: ");
  fgets(email, sizeof(email), stdin); 
  email[strcspn(email, "\n")] = '\0'; 
  printf("Senha: ");
  fgets(senha, sizeof(senha), stdin); 
  senha[strcspn(senha, "\n")] = '\0';

  if (!autenticar_usuario(email, senha)) { 
    printf("Autenticação falhou.\n"); 
    return 1;
}

  Aluno aluno;
  Responsavel responsavel;
  RegistroFrequencia registros[MAX_REGISTROS];
 
  int total_registros = 0;

  cadastrar_aluno(&aluno); 
  cadastrar_responsavel(&responsavel);

  char continuar = 's';
  while (continuar == 's' || continuar == 'S') { 
    registros[total_registros].aluno = aluno; 
    registrar_frequencia(&registros[total_registros]); 
    enviar_notificacao(&responsavel, &registros[total_registros]); 
    total_registros++;

  printf("Deseja registrar outra frequência? (s/n): "); scanf(" %c", &continuar);
  getchar();
}

  gerar_relatorio(registros, total_registros);

  return 0;
}
