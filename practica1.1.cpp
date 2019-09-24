//Camacho Hernández Juan Carlos Practica 1.1 1AV6//
#include <stdio.h>
#include <conio.h>
int main (void){
printf("1.-Suma\n");
printf("2.-Resta\n");
printf("Introduce 1 para sumar\n");
printf("Introduce 2 para restar");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("Introduce la primera cantidad");
scanf("%d",&a);
printf("Introduce la segunda cantidad");
scanf("%d",&b);
int c;
if(opt==1){
    c=a+b;
}
else(opt==2);{
    c=a-b;
}
printf("El resultado es %d",c);
}

