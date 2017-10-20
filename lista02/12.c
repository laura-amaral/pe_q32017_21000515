/* calcula a combinacao de dois numeros atraves do triangulo de pascal
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
 #include <stdio.h>
 #include <math.h>


int triang_Pascal[50][50];

int combinacao(int n, int k){

    if (n==k) return 1;
    if (k==0) return 1;
    if (triang_Pascal[n][k]==0) triang_Pascal[n][k]=combinacao(n-1,k)+combinacao(n-1,k-1);
    return triang_Pascal[n][k];

}
 int main() {

    int n,k;
    scanf("%d %d",&n, &k);
    printf("%d\n", combinacao(n,k));

 }
