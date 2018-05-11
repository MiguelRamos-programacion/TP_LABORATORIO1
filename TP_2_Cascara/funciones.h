#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

 typedef struct{

    char nombre[50];
    int edad;
    int estado;//0 libre 1 ocupado
    long int dni;

}EPersona;

int obtenerEspacioLibre(EPersona listaPersonas[],int tamanioLista);
int buscarPorDni(EPersona lista[],int leng, long int dni);
void inicializarPersona(EPersona lista[],int leng);

void mostrarPersona(EPersona per);

void altaPersona(EPersona pers[],int tamanio);

void bajaPersona(EPersona vec[], int tam);

void imprimirListaOrdenada(EPersona lista[],int tamanio);

void cargaPersona(EPersona lista[],int posicion,char nombre[],int edad,long int dni,int estado);

void impriBarras(EPersona lista[],int tamanio);


#endif // FUNCIONES_H_INCLUDED
