#pragma once
#include <stdio.h>
#include "auxiliares.h"

#define ARCHIVO_USUARIOS "usuarios.bin"
#define ARCHIVO_PROYECTOS "proyectos.bin"
#define ARCHIVO_EMPLEADOS "empleados.bin"
#define ARCHIVO_NOMINAS "nominas.bin"

#define L_BUFFER_PROYECTOS 10
#define L_BUFFER_EMPLEADOS 10
#define L_BUFFER_NOMINAS 10

#define HORAS_MENSUALES_MINIMAS 180

typedef enum {
    LIDER_PROYECTO=1,
    ADMIN_BD,
    ANALISTA,
    PROGRAMADOR,
    TESTER,
} Perfil;

typedef struct {
    char nombre[L_NOMBRE+1];
    char contrasena[L_CONTRASENA+1];
    unsigned int intentos;
    bool bloqueado;
} Usuario;

typedef struct {
    char clave_proyecto[L_CLAVE+1];
    char nombre[L_NOMBRE+1];
    float monto_inicial;
    float total_nomina;
    Fecha inicio;
    Fecha termino;
    bool estatus;
} Proyecto;

typedef struct {
    char clave_proyecto[L_CLAVE+1];
    char nombre[L_NOMBRE+1];
    char curp[L_CURP+1];
    char correo[L_CORREO+1];
    char telefono[L_TELEFONO+1];
    unsigned int num_empleado;
    float tarifa_mensual;
    Fecha nacimiento;
    Perfil perfil;
    Direccion direccion;
} Empleado;

typedef struct {
    char clave_proyecto[L_CLAVE+1];
    char curp_empleado[L_CURP+1];
    unsigned int mes;
    unsigned int ano;
    unsigned int horas_trabajadas;
    float sueldo_mensual;
} Nomina;

typedef struct {
    FILE *archivo_proyectos;
    FILE *archivo_empleados;
    FILE *archivo_nomina;
    Proyecto* buffer_proyectos;
    Empleado* buffer_empleados;
    Nomina* buffer_nominas;
} AppData;

void login(void);
void cargar_datos(AppData* appdata);
void submenu_proyectos(AppData* appdata);
void submenu_empelados(AppData* appdata);
void submenu_nomina(AppData* appdata);
void submenu_reportes(AppData* appdata);
