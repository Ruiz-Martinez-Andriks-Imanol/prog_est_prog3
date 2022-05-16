/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022 
	Escuela: Universidad del Valle de Mexico Campus Villahermosa 
	Materia: Programación Estructurada
	Ciclo: 01/2022
	
Este es un programa de la estructura básica de Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
    -Variables flotantes
    -printf para mostrar varias variables
    -scanf
    -Comentarios para la documentación interna del programa.
	*/
#include<stdio.h>
int main(){
	//Declaración
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
