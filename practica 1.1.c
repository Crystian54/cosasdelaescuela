/*Practica 1.1 suma y resta*/
#include <math.h>
#include <stdio.h>

int main()
{
    int op, op2;
    float a,b,c;
    b:
printf( "\n menu de la calculadora \n" );
        printf( "\n   1. suma." );
        printf( "\n   2. Resta.");
        printf( "\n  Introduzca opci%cn (1-2): ",162);
        scanf( "%d", &op);
        printf( "Dame el primer operando \n" ); scanf( "%f", &a);
        printf( "Dame el primer operando \n" ); scanf( "%f", &b);
        if(op==1){
            c=a+b;
        }
        else{
            c=a-b;
        }
        printf("el resultado de la operaci%cn es %f \n",162,c);
}
