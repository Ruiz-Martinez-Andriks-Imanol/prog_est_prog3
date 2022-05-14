/* Autor: Andriks Imanol Ruiz Mart�nez, Realizado: 03/02/2022 
	Escuela: Universidad del Valle de Mexico Campus Villahermosa <br>
	Materia: Programaci�n Estructrada
	Ciclo: 01/2022</p>
	
Este es un programa de la estructura b�sica de Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
    -Variables flotantes
    -printf para mostrar varias variables
    -scanf
	-Comentarios para la doumentaci�n interna del programa.

objetivo: Resolver una operaci�n de la temperatura en lenguaje C.

Breve descripcion:
Este programa busca el resultado de convertir de grados Cent�grados a Fahrenheit, 
usando la formula establecida para la conversi�n. 
Este programa usa variables flotantes, es decir, decimales 
	*/
#include<stdio.h>
int main(){
	//Declaraci�n
	float F, C;
	//Entrada de datos
	printf("Introduce la temperatura en Centigrados: ");
	scanf("%f",&C);
	//Proceso
	F=(9/5.0*C)+32;
	//Salida
	printf("La temperatura en Fahrenheit es %f", F);	
	return 0;
}
