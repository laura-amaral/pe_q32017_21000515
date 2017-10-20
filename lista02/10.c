/* calcula a sequencia de fibonacci
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
 #include <stdio.h>
 #include <math.h>


int fibMem[1000];

int fib(int n){

    if (n==0) return 0;
    if (n<=2) return 1;
    if (fibMem[n]==0) fibMem[n]=fib(n-1)+fib(n-2);
    return fibMem[n];

}
 int main() {

    int n;
    fibMem[1]=1;
    fibMem[2]=1;
    scanf("%d",&n);
    printf("%d\n", fib(n));

 }

