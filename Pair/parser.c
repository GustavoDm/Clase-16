#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    int retorno =-1;
    char bId[5000];
    char bName[5000];
    char bLastName[5000];
    char bIsEmpty[5000];


    pFile= fopen("data.csv", "r");
    if(pFile!=NULL)
    {
        while(!feof(pFile))
        {
            fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]",bId, bName, bLastName, bIsEmpty);
            al_add(pArrayListEmployee, employee_newParametros(bId, bName, bLastName, bIsEmpty));

        }
    retorno=0;
    }
    return retorno;
}
