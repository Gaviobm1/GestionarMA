/**************************************************
 * Módulo: ElegirFuncion.cpp
 *
 *  Este módulo permite el usuario de elegir
 *  una opción del programa
 *
 *  Fecha del último modificación: 22/12/2023
**************************************************/

#include <stdio.h>
#include "ElegirFuncion.h"
#include "EditarMaquina.h"
#include "PresentarOpciones.h"
#include "ListarMaquinas.h"
#include "EditarFinca.h"
#include "ListarFinca.h"
#include "AlquilerMaquina.h"
#include "CalendarioPagina.h"

char ELE_tecla;

/*==========================================
Procedimiento para invocar los subprogramas
según la selección del usuario
============================================*/

 void HacerEleccion() {
    printf("Teclear una opción válida (M|F|L|E|A|P|S)?\n");
    scanf( " %c", &ELE_tecla);
    if (ELE_tecla == 'M') {
      EditarMaquina(nuevoMaq, ListaMaquinas);
      presentarOpciones();
      HacerEleccion();
    } else if (ELE_tecla == 'F') {
      EditarFinca(nuevoFinca, ListaFincas);
      presentarOpciones();
      HacerEleccion();
    } else if (ELE_tecla == 'L') {
      PrintListaMaquinas(nuevoMaq, ListaMaquinas, ELE_tecla);
      presentarOpciones();
      HacerEleccion();
    } else if (ELE_tecla == 'E'){
      PrintListaFincas(nuevoFinca, ListaFincas, ELE_tecla);
      presentarOpciones();
      HacerEleccion();
    } else if (ELE_tecla == 'A') {
      GetNuevoAlquilo(nuevoAlquilo, ListaMaquinas, ListaFincas);
      presentarOpciones();
      HacerEleccion();
    }  else if (ELE_tecla == 'P') {
      GetPagina(MesPagina);
      presentarOpciones();
      HacerEleccion();
  } else if (ELE_tecla == 'S') {
      return;
  } else {
      HacerEleccion();
    }
 }

