/**************************************************
 * Módulo:CalendarioMes.cpp
 *
 *   Este modulo genera los datos de
 *   fecha del alquiler.
 *
 *  Fecha del último modificación: 22/12/2023
**************************************************/

#include <stdio.h>
#include <string.h>
#include "CalendarioMes.h"
#include "AlquilerMaquina.h"

/*==========================================
Función para comprobar si un año es bisiesto
o no.
============================================*/

bool TipoCalendario::GetBisiesto() {
    if (fechaCal.anno % 4 == 0 && (fechaCal.anno % 100 != 0 || fechaCal.anno % 400 == 0)) {
        return true;
    } else  {
        return false;
    }
}

/*==========================================
Procedimiento para buscar los datos del
usuario.
============================================*/

void TipoCalendario::GetFecha() {
    printf( "      Fecha comienzo cosecha: Día? ");
    scanf ( " %d", &fechaCal.dia);
    printf( "      Fecha comienzo cosecha: Mes? ");
    scanf ( " %d", &fechaCal.mes);
    printf( "      Fecha comienzo cosecha: Año? ");
    scanf ( " %d", &fechaCal.anno);

}

/*==========================================
Procedimiento para determinar el numero de días
en el mes seleccionado
============================================*/


int TipoCalendario::GetNumDias() {
    switch (fechaCal.mes) {
        case(4):
        case(6):
        case(9):
        case(11):
            return 30;
        break;
        case(1):
        case(3):
        case(5):
        case(7):
        case(8):
        case(10):
        case(12):
            return 31;
        break;
        case(2):
            if (GetBisiesto()) {
                return 29;
            } else {
                return 28;
            }
        break;
    }
}

/*==========================================
Procedimiento para determinar el numero de
días en el mes anrterior del seleccionado.
============================================*/

int TipoCalendario::GetNumDiasTras() {
    switch (fechaCal.mes - 1) {
        case(4):
        case(6):
        case(9):
        case(11):
            return 30;
            break;
        case(1):
        case(3):
        case(5):
        case(7):
        case(8):
        case(10):
        case(12):
            return 31;
            break;
        case(2):
            if (GetBisiesto()) {
                return 29;
            } else {
                return 28;
            }
        break;
    }
}
