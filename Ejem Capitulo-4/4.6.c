#include <stdio.h>

/*Prueba de parámetros por referencia.  */

int f1(int *);
/*Prototipo de función. El parámetro es de tipo entero y por referencia
-Observa el uso del operador de indirección. */

int main(void)
{
int I, K = 4;
for (I = 1; I <= K; I++)
{
    printf("\n\nValor de K antes de llamar a la función: %d", ++K);
    printf("\nValor de K después de llamar a la función: %d", f1(&K));
    /*Llamada a la función f1. Se pasa la dirección de la variable K, 
    por medio del operador de dirección: .  */
}
}

int f1(int *R)
/*La función f1 recibe un parámetro por referencia. Cada vez que el
 parámetro se utiliza en al función debe ir precedido por el operador de
 indirección.*/
 {
    *R += *R;
}