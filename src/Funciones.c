#include <stdio.h>
#include "LibreriaTP.h"
float GetFloat(float* punteroResultado, char mensaje[],char mensajeError [], float minimo,float maximo,int reintentos)
{		float buffer;
		int retorno=1;
		int i;

	if(punteroResultado!=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	{
		for(i=0;i<reintentos;i++)
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf(" %f",&buffer);

			if(buffer>=minimo && buffer<=maximo)
			{
				retorno=0;
				*punteroResultado = buffer;
				break;
			}
			else
			{
				printf("%s",mensajeError);
			}
		}


	}
return retorno;}

float SumaFloat(float num1,float num2){

	float resultado;

		resultado =  num1 + num2;

	return resultado;
}



float RestaFloat(float num1,float num2){

	float resultado;

		resultado =  num1 - num2;

	return resultado;
}

float DivisionFloat(float num1,float num2, float* resultado){

	if (num2==0){
		return 1;
	}
	else {

		*resultado=num1/num2;
	}

return 0;


}


float MultiplicacionFloat(float num1,float num2){

	float resultado;

		resultado =  num1 * num2;

	return resultado;
}

float FactorialFloat(float num1, float *resultado){

	int c;
    float fact;

    fact= num1;

	if( num1<0)
	{
		return 1;
	}
	else
	{
			if(num1==0)
			{
				*resultado=1;
			}
			else
			{
				for (c = 1; c < num1; c++)
				{
		        fact = fact * c;
				}
			*resultado= fact;

			}
	}

return 0;
}
