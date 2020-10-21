/*
 * fecha.h
 *
 *  Created on: Oct 15, 2020
 *      Author: david
 */

#ifndef FECHA_H_
#define FECHA_H_


typedef struct
{
 int dia;
 int mes;
 int anio;
 int isEmpty;
}eFecha;

int getFecha(eFecha *pArray, int limite, char* mensajeError, int reintentos, int *contFecha);

int addFecha(eFecha *pArray, int limite, int dia, int mes, int anio, int *contFecha);

int initFecha(eFecha *pArray, int limite);

int checkAnioBisiesto(int anio);


#endif /* FECHA_H_ */