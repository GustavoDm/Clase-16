#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{

ArrayList* listaEmpleados =al_newArrayList();
Employee* auxEmpleado;
FILE *pFile;

int i;
auxEmpleado=employee_newParametros("14", "Juan", "Perez", "true");
al_add(listaEmpleados, auxEmpleado);


for(i=0;i<al_len(listaEmpleados);i++)
{
    employee_print(al_get(listaEmpleados,i));
}

    return 0;
}
