
	//objetivo: calcular a area do c�rculo
	//formula: area = pi * raio ao quadrado
	//entrada: raio: 3.0
	//saida: area: 28.3
	#include <math.h>
	#include <iostream>
main(){

 // declara��o de vari�veis
 float raio, area;
 //entradas
 printf ("raio: ");
 scanf ("%f",&raio);
 //processamento
 area = M_PI * pow(raio,2) ; //M_PI = 3.1415
 //sa�da	
 printf ("area vale : %.1f", area);
 
 }
 
