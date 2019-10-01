/******************************************************************************

Resalizar un programa c que permite determinar el area del circulo.
Datos Entrada 
real:radio, pi,area=0
procesoEscribir("Ingrese")

*******************************************************************************/
 #include <stdio.h>//Declaracion de librerias
 #define pi 3.1416//Definicion de constantes

void main()
{
    float radio,area=0;//Definicion de la funcion principal
    printf("Ingrese el radio");//Impresion en pantal La
    scanf("%f",&radio);//Lectura de la variable radio
    area=pi*radio*radio;//proceso
    printf("El area es %.2f",area);//Salida del area del circulo
    
}
