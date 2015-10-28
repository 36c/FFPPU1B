#include <stdio.h>//libreria e/s

int main ()
{//inicio

float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,menor,mayor;

printf ("Ingrese los valores");
scanf ("%f %f %f %f %f %f %f %f %f %f",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);

mayor = x10;

menor = x1;


if ( x1 < menor )
menor = x1;
if ( x3 > mayor )
mayor = x3;

if ( x2 < menor )
menor = x2;
if ( x4 > mayor )
mayor = x4;

if (x4<menor)
menor=x4;
if (x6>mayor)
mayor=x6;

if(x5<menor)
menor=x5;
if(x7>mayor)
mayor=x7;

if(x6<menor)
menor=x6;
if(x8>mayor)
mayor=x8;

if(x7<menor)
menor=x7;
if(x9>mayor)
mayor=x9;

if(x8<menor)
menor=x8;
if(x10>mayor)
mayor=x10;

if(x9<menor)
menor=x9;
if(x10>mayor)
mayor=x10;


printf ("El orden de menor a mayor : %f %f\n",menor,mayor);

return (0);

}//fin

