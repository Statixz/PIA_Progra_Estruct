#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "nomina.h"
#include "auxiliares.h"
#include "texto.h"

void login(void)
{
    char buffer_nombre[L_NOMBRE+1];
    char buffer_contrasena[L_CONTRASENA+1];
    Usuario usuario;
    long int pos=0;

    FILE* archivo = fopen(ARCHIVO_USUARIOS, "rb");
    if(archivo==NULL) {
        printf("ERROR: El archivo de usuarios '%s' no ha sido encontrado...\n", ARCHIVO_USUARIOS);
        stopflush();
        clear();
        exit(1);
    }

    while(1) {
        clear();
        puts(titulo_app);
        puts("\n\n");
        puts("Usuario: "); leer_string(buffer_nombre, L_NOMBRE);
        putchar('\n');
        puts("Contrasena: "); leer_string(buffer_contrasena, L_CONTRASENA);
        putchar('\n');
        fseek(archivo, pos, SEEK_SET);
        bool nombre_correcto, contrasena_correcta;
        while(fread(&usuario, sizeof(Usuario), 1, ARCHIVO_USUARIOS)) {
            nombre_correcto = strcmp(usuario.nombre, buffer_nombre);
        }

    }
    close(archivo);
    return;
}

void cargar_datos(AppData* appdata)
{

}

void submenu_proyectos(AppData* appdata)
{

}

void submenu_empelados(AppData* appdata)
{

}

void submenu_nomina(AppData* appdata)
{

}

void submenu_reportes(AppData* appdata)
{

}