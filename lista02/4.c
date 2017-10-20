/* Uma Calculadora que
 * 1. Soma
 * 2. Subtrai
 * 3. Multiplica
 * 4. Divide
 * 5. Potencia
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */

#include <stdio.h>
#include <math.h>

float soma(float num1, float num2) {
    return num1+num2;
    }

float sub (float num1, float num2) {
    return num1-num2;
    }

float mult(float num1, float num2) {
    return num1*num2;
    }

float div (float num1, float num2) {
    return num1/num2;
    }

float pot (float num1, float num2) {
    return pow(num1,num2);
    }



float operacao(int op, float num1, float num2) {
    switch (op){
        case 1 :
            return soma(num1,num2);
            break;

        case 2 :
            return sub(num1,num2);
            break;

        case 3 :
            return mult(num1,num2);
            break;

        case 4 :
            return div(num1,num2);
            break;

        case 5 :
            return pot(num1,num2);
            break;
    }
}


int main()    {
    float  op, num1, num2;

    printf ("Entrada: ");
    scanf("%f %f %f",&op,&num1,&num2);
    printf ("Saida: %.2f\n", operacao(op,num1,num2));

}
