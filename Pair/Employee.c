#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int idEmpleadoA, idEmpleadoB;
    int retorno;

    if(pEmployeeA!=NULL && pEmployeeB !=NULL)
    {
          employee_getId(pEmployeeA, &idEmpleadoA);
          employee_getId(pEmployeeB, &idEmpleadoB);

          if(idEmpleadoA >idEmpleadoB)
          {
              retorno =-1;
          }
          else if(idEmpleadoA<idEmpleadoB)
          {
              retorno=1;
          }
    }
    return retorno;
}


void employee_print(Employee* this)
{
    int id;
    char name[50];
    char lastName[50];
    int isEmpty;
    if(this!=NULL)
    {
     employee_getId(this,&id);
     employee_getNombre(this, name);
     employee_getApellido(this, lastName);
     employee_getIsEmpty(this, isEmpty);
    }
 }


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    static int ultimoid = -1;
    int retorno=-1;

    if(this !=NULL && id==-1)
    {
    ultimoid++;
    this->id = ultimoid;
    retorno=0;
    }
    else if(this !=NULL && id > ultimoid)
    {
        ultimoid = id;
        this-> id = ultimoid;
        retorno=0;
    }


    return retorno;

}

int employee_getId(Employee* this, int *id)
{
   int retorno =-1;
   if(this !=NULL && id !=NULL)
    {
        retorno = 0;
        *id=this->id;

    }

    return retorno;
}

int employee_setNombre(Employee *this, char *name)
{

    int retorno =-1;
   if(this !=NULL && name !=NULL /*&&isValidname(name)*/)
    {
        retorno = 0;
        strcpy(this->name, name);

    }

    return retorno;
}

int employee_getNombre(Employee *this, char *name)
{

    int retorno =-1;
   if(this !=NULL && name !=NULL)
    {
        retorno = 0;
        strcpy(name,this->name);

    }

    return retorno;
}

int employee_setApellido(Employee *this, char *lastName)
{

    int retorno =-1;
   if(this !=NULL && lastName !=NULL /*&&isValidname(lastName)*/)
    {
        retorno = 0;
        strcpy(this->lastName, lastName);

    }

    return retorno;
}

int employee_getApellido(Employee *this, char *lastName)
{

    int retorno =-1;
   if(this !=NULL && lastName !=NULL)
    {
        retorno = 0;
        strcpy(lastName,this->lastName);

    }

    return retorno;
}

int employee_setisEmpty(Employee *this, char *isEmpty)
{

    int retorno =-1;
   if(this !=NULL && isEmpty !=NULL &&isValidname(isEmpty))
    {
        retorno = 0;
        strcpy(this->isEmpty, isEmpty);

    }

    return retorno;
}

int employee_getIsEmpty(Employee *this, char *isEmpty)
{

    int retorno =-1;
   if(this !=NULL && isEmpty !=NULL)
    {
        retorno = 0;
        strcpy(isEmpty,this->isEmpty);

    }

    return retorno;
}
