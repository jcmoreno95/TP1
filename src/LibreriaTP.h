/*
 * LibreriaTP.h
 *
 *  Created on: 20 sep. 2021
 *      Author: juan
 */

#ifndef LIBRERIATP_H_
#define LIBRERIATP_H_
float GetFloat(float* punteroResultado, char mensaje[],char mensajeError [], float minimo,float maximo,int reintentos);
float SumaFloat(float num1,float num2);
float RestaFloat(float num1,float num2);
float DivisionFloat(float num1,float num2, float* resultado);
float MultiplicacionFloat(float num1,float num2);
float FactorialFloat(float num1, float *resultado);

#endif /* LIBRERIATP_H_ */
