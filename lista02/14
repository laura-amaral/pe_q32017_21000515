/* verifica se o numero é palindromo
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
 
#include <stdio.h>
#include <math.h>

int espelhar(int m) {
  int espelho=0;
  
  while (m) {
    espelho*=10;
    espelho+=m%10;
    m/=10;
  }
  
  return espelho;
}


char palindromo(int m) {
  if (espelhar(m)==m) return 's';
  return 'n';
}


int main() {

    int num;
    scanf("%d",&num);
    printf("%c\n", palindromo(num));

}
