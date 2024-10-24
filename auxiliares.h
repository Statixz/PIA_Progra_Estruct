#pragma once
#include <stdlib.h>

#define L_NOMBRE 60
#define L_CONTRASENA 20
#define L_CLAVE 20
#define L_CORREO 50
#define L_TELEFONO 10
#define L_CURP 18

#ifdef _WIN32
#define clear() system("cls")
#endif

#ifdef __unix__
#define clear() system("clear")
#endif

typedef enum {
    false,
    true,
} bool;

typedef struct {
    unsigned int dia;
    unsigned int mes;
    unsigned int ano;
} Fecha;

typedef struct {
    char calle[L_NOMBRE+1];
    char colonia[L_NOMBRE+1];
    char municipio[L_NOMBRE+1];
    unsigned int numero;
    unsigned int cp;
} Direccion;

void stopflush(void);