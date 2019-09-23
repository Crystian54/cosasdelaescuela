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
        printf( "\n   3. Multiplicacion." );
        printf( "\n   4. division." );
        printf( "\n   5. salir." );
        printf( "\n  Introduzca opci%cn (1-5): ",162);
        scanf( "%d", &op);
        printf( "Dame el primer operando \n" ); scanf( "%f", &a);
        printf( "Dame el primer operando \n" ); scanf( "%f", &b);


        switch ( op)
        {
            case 1:
            c=a+b;
                    break;
            case 2:
            c=a-b;
                    break;
            case 3:
            c=a*b;
                    break;
           case 4:
               if(b==0){
                printf("no se puede hijo, b debe se diferente de 0\n");
                goto c;
               }
               else{
           c=a/b;
               }
                    break;
           default:
           goto aa;
        }

printf("el resultado de la operaci%cn es %f \n",162,c);
c:
printf("quieres hacer otra operaci%cn? \n",162);
printf("1- Si\n");
printf("2- No \n");
scanf("%d",&op2);
if (op2==1)
{
goto b;
}
else{
goto aa;
}
aa:
    return 0;
}
