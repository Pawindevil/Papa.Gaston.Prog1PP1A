#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*typedef struct{

int id;
char procesador[20]={"Intel"};
char marca[20]={"Asus"};
float precio=

}Notebook
void ordenMarca(Notebook unaNote[], tam)*/

float aplicarDescuento(float precio);

int contarCaracteres (char cadena[], char caracter);
int main()
{
   float precio=100;

   char nombre[10]="andrea";
   char caracter='a';



   aplicarDescuento(precio);

   contarCaracteres(nombre,caracter);


   return 0;
}

float aplicarDescuento(float precio){

 float descuento=0.05;
 float total;
total=precio-precio*descuento;
printf ("El precio total es: %.2f\n\n", total);
return total;
}

int contarCaracteres (char cadena[], char caracter){

int contadorCaracter=0;
for(int i=0;i<strlen(cadena);i++){

    if(cadena[i]==caracter){
        contadorCaracter++;
    }
}
printf("La cantidad de veces que aparece %c es %d\n\n", caracter, contadorCaracter);
return contadorCaracter;


}
