#include <string.h> #include "autenticacao.h"

int autenticar_usuario(const char* email, const char* senha) {
if (strcmp(email, "professor@example.com") == 0 && strcmp(senha, "senha123") == 0) { return 1;
}
return 0;
}
