#include <stdio.h>
#define N 16
int main()
{
    int *p,i;
    char frase[N]={0};
    printf("Digite uma frase: ");
    fgets(frase,N,stdin);
    p=(int*)frase;
    printf("\nDecimal: ");
    for(i=0;i<sizeof(frase)/sizeof(int);i++)
    printf("%u ",p[i]);
    printf("\nHexadecimal: ");
    for(i=0;i<sizeof(frase)/sizeof(int);i++)
    printf(" %X",p[i]);
    return 0;
}
