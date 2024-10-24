#include "nomina.h"
#include "auxiliares.h"
#include "texto.h"

int main(void)
{
    AppData appdata;
    login();
    cargar_datos(&appdata);
    int opc=menu(texto_menu_principal, 1, 5);
    switch(opc) {
    case 1:
        submenu_proyectos(&appdata);
        break;
    case 2:
        submenu_empleados(&appdata); 
        break;
    case 3:
        submenu_nomina(&appdata);
        break;
    case 4:
        submenu_reportes(&appdata);
        break;
    case 5:
        //liberar_memoria(&appdata);
        exit(0);
    }
}