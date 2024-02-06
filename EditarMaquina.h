/**************************************************
 * Interfaz de Módulo: EditarFinca.cpp
 *
 *   Este modulo permite la introducción de los
 *   datos de una máquina
 *
 *  Fecha del último modificación: 22/12/2023
**************************************************/

#pragma once
const int MAQ_lista = 10;

typedef char MAQ_TipoNombre[21];

typedef struct TipoMaquina {
    int id, hecdia;
    float ubilat, ubilong;
    MAQ_TipoNombre nombre;
    char tipo;
    void GetType();
    void GetId();
    void GetNombre();
    void GetCapacity();
    void GetUbilat();
    void GetUbilong();
};


typedef TipoMaquina TipoListaMaquina[MAQ_lista];

extern TipoListaMaquina ListaMaquinas;
extern TipoMaquina nuevoMaq;

void EditarMaquina(TipoMaquina a, TipoListaMaquina v);



