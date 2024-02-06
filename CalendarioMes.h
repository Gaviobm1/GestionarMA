/**************************************************
 * Interfaz de Módulo: CalendarioMes.cpp
 *
 *   Este modulo genera los datos de
 *   fecha del alquiler.
 *
 *  Fecha del último modificación: 22/12/2023
**************************************************/

#pragma once

typedef struct TipoCalFecha {
    int dia;
    int mes;
    int anno;
};

typedef struct TipoCalendario {
    TipoCalFecha fechaCal;
    TipoCalFecha fechaFinCal;
    TipoCalFecha fechaTrasCal;

    bool GetBisiesto();
    void GetFecha();
    int GetNumDias();
    int GetNumDiasTras();

};
