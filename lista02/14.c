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

int main() {

    int num;
    scanf("%d",&num);
    if (espelhar(num)==num){
      printf("sim"); 
    } else {
      printf("nao"); 
    }

}
