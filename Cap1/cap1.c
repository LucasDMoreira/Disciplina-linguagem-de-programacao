#include<stdio.h>
#define ex5
/*Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma variável auxiliar.*/
#ifdef ex1
int main(){
    int a,b;
    printf("digite um número para A: ");
    scanf("%d", & a); // supor a = 10
    printf("digite outro número para B: "); // supor b = 5
    scanf("%d", & b);
    a = a + b; // a = 15
    b = a - b; // b = 10
    a = a - b; // a = 5
    printf("o valor de A: ficou %d e o valor de b: %d", a, b);
    return 0;
}
#endif // ex1

/*Escreva um programa que receba dados via teclado para variaveis do tipo short,
     long, int, float, double e um char e imprima-os no video no seguinte
     formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/
#ifdef ex2
int main()
{
    int a;
    short b;
    float c;
    long d;
    double e;
    char f;
    printf("digite um número para a variável int\n");
    scanf("%d", & a);
    printf("digite um número para a variável short\n");
    scanf("%hd", & b);
    printf("digite um número para a variável float\n");
    scanf("%f", & c);
    printf("digite um número para a variável long\n");
    scanf("%ld", & d);
    printf("digite um número para a variável double\n");
    scanf("%lf", & e);
    printf("digite um número para a variável char\n");
    scanf(" %c", & f);
    printf("\n        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("%5hd%20ld%20d\n",b,d,a);
    printf("%18.2f%20.2lf%17c\n",c,e,f);
    return 0;
}
#endif // ex2

/*Escreva um programa que determine o menor multiplo de um numero inteiro. Este
     multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
     teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
#ifdef ex3
int main()
{
    int limite, num, multiplo;
    printf("digite um número para ser o limite\n");
    scanf("%d", & limite);
    printf("agora digite o número\n");
    scanf("%d10", & num);
    multiplo = ((limite / num) + 1) * num;
    printf("o menor multiplo do número inteiro digitado maior que o limite: %d\n", multiplo);
    return 0;
}
#endif // ex3

/*Escreva um programa que receba via teclado um tempo em segundos e converta
     para horas, minutos e segundos.
     Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
#ifdef ex4
int main()
{
    int tempo, horas, minutos, segundos;
    printf("coloque o tempo em segundos:\n");
    scanf("%d", & tempo);
    do
    {
        if(tempo < 0)
        {
            printf("digite um tempo válido\n");
            scanf("%d", & tempo);
        }
    }while(tempo < 0);
    horas = tempo / 3600;
    minutos = (tempo % 3600)/ 60;
    segundos = tempo % 60;
    printf("%d é equivalente a : %dh %dmin %ds\n", tempo, horas, minutos, segundos);
}
#endif // ex4

/*Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
     outro número formado pelos dígitos invertidos do número lido.
     Ex:   NúmeroLido = 123
            NúmeroGerado = 321*/
#ifdef ex5
int main()
{
    char a[4]; //3 digitos + '\0'
    printf("digite um número de 3 digitos:\n");
    scanf("%3s", a); //%s lê uma sequência de caracteres do teclado até encontrar um caractere branco (espaço, tabulação, nova linha).
    printf("%c%c%c\n",a[2],a[1],a[0]);
}
#endif // ex5