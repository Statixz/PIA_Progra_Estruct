#include <stdio.h>
#include "auxiliares.h"
#include "texto.h"

void stopflush(void) {
    int c;
    while(1) {
        c=getchar();
        if(c=='\n' || c==EOF) break;
    }
    return;
}

void leer_string(char* buffer, size_t longitud)
{
    int c;
    int i;
    for(i=0; i<longitud; i++) {
        c=getchar();
        if(c=='\n' || c==EOF) break;
        buffer[i]=c;
    }
    buffer[i]='\0';
    return;
}

int validar_entero(int min, int max) {
    int valor;
    puts("... "); scanf("%d", &valor);
    while(valor < min || valor > max) {
        puts("... ");scanf("%d", &valor);
    }
    return valor;
}

int menu(char* msg, int min, int max) {
    clear();
    puts(titulo_app);
    puts("\n\n");
    puts(msg);
    int opc=validar_entero(min, max);
    putchar('\n');
    return opc;
}