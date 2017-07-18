#include <stdio.h>
void safeFlush()
{
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    int a,b=0,fat=1;
    printf("Digite um numero: ");
    scanf("%i",&a);
    safeFlush();
    while(b!=a)
    {
        fat=b*fat+fat;
        b++;
    }
    printf("O fatorial e': %i\n",fat);
    return 0;
}
