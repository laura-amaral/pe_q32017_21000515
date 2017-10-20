/* faz conversoes:
 * 1. temperatura
 *      1. Celsius
 *      2. Fahrenheit
 *      3. Kelvin
 * 2. binario
 *      1. decimal
 *      2. binario
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
#include <stdio.h>
#include <math.h>


 int conv_temp (int un2, float valor) {
    char unidade;

    switch (un2) {

        case 1 :
            valor*=5;
            unidade='C';
        break;

        case 2 :
            valor*=9;
            valor+=32;
            unidade='F';
        break;

        case 3 :
            valor*=5;
            valor+=273;
            unidade='K';
        break;

    }

    printf ("Saida: %.2f %c\n", valor, unidade);
 }

int temperatura (int un1,int un2, float valor){

    switch (un1){

        case 1 :
            valor/=5;
        break;

        case 2 :
            valor-=32;
            valor/=9;
        break;

        case 3 :
            valor-=273;
            valor/=5;
        break;

    }
    conv_temp(un2,valor);
}



int dec_bin (int valor) {
    int n=valor, n_bin=0, i=0;
    while (n) {
        n_bin+=(n%2*pow(10,i));
        n/=2;
        i++;
    }
    printf ("Saida: %d \n", n_bin);

}

int bin_dec (int valor) {
    int n=valor,n_dec=0,i=0;
    while (n) {
        n_dec+=(n%2*pow(2,i));
        n/=10;
        i++;
    }
    printf ("Saida: %d \n", n_dec);
}

int binario(int un1, int un2, float valor){
    if (un1==un2) {

        printf ("Saida: %f\n", valor);
        return 0;
    }

    int valor_int;
    valor_int = (int) valor;

    switch (un1) {

        case 1:
            dec_bin(valor);
        break;
        case 2:
            bin_dec(valor);
        break;

    }

}



int conversao(int conv, int un1, int un2, float valor){
    switch (conv) {

        case 1:
            temperatura(un1,un2,valor);
        break;

        case 2:
            binario(un1,un2,valor);
        break;

    }
}


 int main()    {
    int conv, un1, un2;
    float  valor;

    printf ("Entrada: ");
    scanf("%d %d %d %f",&conv,&un1,&un2,&valor);
    conversao(conv,un1,un2,valor);

}
