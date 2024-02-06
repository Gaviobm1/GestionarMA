/******************************************************************************
 * Interfaz de módulo: AlquilerMaquina.cpp
 *
 *  Este módulo define el tipo abstracto Alquiler capaz
 *  de almanecar los datos de un alquiler y contiene las
 *  funciones y procedimientos para generar y añadir los
 *  datos de un alquiler a una secuncia enlazada
 *
 *  Fecha del último modificación: 22/12/2023
 *
******************************************************************************/

#pragma once
#include "EditarMaquina.h"
#include "EditarFinca.h"
#include "CalendarioMes.h"


typedef struct TipoAlquiler {
    TipoCalendario CAL_Alquiler;
    TipoFinca FincaAlquilada;
    TipoMaquina MaquinaAlquilada;
    TipoFinca FincaActual;
    int n;
    int idAlquilo;
    int idFinal;
    int idCosecha;
    int idTraslado;
    char disponible;

    void GetMaquina();
    void GetFinca();
    void GetFechaFinal();
    int GetDuracionCosecha();
    float GetDistanciaFincas();
    void GetDiaTraslado();
    void BuscarFinca(TipoListaFinca v);
    void ActualizarUbicacion();
};

typedef struct TipoNodo {
    TipoAlquiler detallesAlquiler;
    TipoNodo *siguiente;
};

typedef TipoNodo * TipoSecuencia;
typedef TipoNodo * TipoPuntNodo;
extern TipoCalendario nuevoCalendario;
extern TipoAlquiler nuevoAlquilo;
extern TipoSecuencia secuencia;
extern TipoPuntNodo cursor, anterior, nuevo;


void PonerEnSecuencia(TipoAlquiler a);
void GetNuevoAlquilo(TipoAlquiler a, TipoListaMaquina m, TipoListaFinca f);
