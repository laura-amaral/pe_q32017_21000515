/* calcula o mdc
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
 
#include <stdio.h>
#include <math.h>


int mdc( int m, int n) {
  if (!n) return m;
  return mdc (n,m%n);
}


int main() {

    int m,n;
    scanf("%d %d",&m, &n);
    printf("%d\n", mdc(m,n));

}
