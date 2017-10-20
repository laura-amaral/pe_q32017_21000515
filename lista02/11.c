/* faz conversao
 *1. decimal -> binario
 *2. binario -> decimal
 *
 * Autor: Laura Amaral
 * Data: 20/10/2017
 */

int dec_bin(int num){
    if (!num) return 0;
    return num%2+10*dec_bin(num/2);
}

int bin_dec(int num){
    if (!num) return 0;
    return (num%2)+bin_dec(num/10)*2;
}

int conversao (int num, int conv){
    switch (conv) {

        case 1:
            return dec_bin(num);
        break;

        case 2:
            return bin_dec(num);
        break;

    }
}



 int main()    {
    int conv, num;

    printf ("Entrada: ");
    scanf("%d %d",&num,&conv);
    printf ("Saida: %d\n", conversao(num,conv));


}
