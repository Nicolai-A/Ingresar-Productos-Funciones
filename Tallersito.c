#include <string.h>
#include <stdio.h>
#include "funciones.h"

int main()
{
    int opcion;
    do
    {
        printf("\nMenu de Opciones:\n");
        printf("\t1. Ingresar producto\n");
        printf("\t2. Mostrar producto mas caro y mas barato\n");
        printf("\t3. Mostrar datos de los productos\n");
        printf("\t4. Mostrar precio promedio\n");
        printf("\t5. Buscar producto por nombre\n");
        printf("\t6. Salir\n");
        printf("Seleccione una opcion: ");
        opcion = validar(1, 6);
        switch (opcion)
        {
        case 1:
            ingresarProducto();
            break;
        case 2:
            mostrarMaxMin();
            break;
        case 3:
            mostrarProductos();
            break;
        case 4:
            mostrarPromedio();
            break;
        case 5:
            buscarProducto();
            break;
        case 6:
            printf("Saliendo del programa.\n");
            break;
        }
    } while (opcion != 6);

    return 0;
}
