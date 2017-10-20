/* calcula as raizes de uma equacao de 2 grau
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */
 #include <stdio.h>
 #include <math.h>


 double delta (double a,double b,double c) {
    return pow(b,2)-4*a*c;
 }

 double part1(double a,double b){
    return -b/(2*a);
 }

 double part2(double a, double delt) {
    return sqrt(delt)/(2*a);
 }

double raiz(double a,double b,double c) {
    double x1,x2,x_real,x_imag;

    if (delta(a,b,c)>=0) {

        x1=part1(a,b)+part2(a,delta(a,b,c));
        x2=part1(a,b)-part2(a,delta(a,b,c));
        printf("Saida: %.2f %.2f\n", x1, x2);

    } else {

        x_real=part1(a,b);
        x_imag=part2(a,-delta(a,b,c));
        printf("Saida: %.2f + %.2f i; %.2f - %.2f i\n", x_real, x_imag,x_real,x_imag);

    }
}




int main()    {
    double a,b,c;

    printf ("Entrada: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    raiz(a,b,c);

}
