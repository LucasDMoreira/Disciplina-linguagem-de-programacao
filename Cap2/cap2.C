#include<stdio.h>
#define ex5
/*Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. 
Utilize o comando if-else.*/
#ifdef ex1
int main()
{
    int min = 1, max = 99, palpite;
    char resposta, finalizador;
    do
    {
    printf("pense em um número de 1 a 99.\n");
    do {
        palpite = (min + max) / 2;
        printf("Seu número é %d? (Digite '<' se for menor, '>' se for maior, '=' se eu acertei): ", palpite);
        scanf(" %c", &resposta);  // espaço antes de %c para ignorar caracteres anteriores (como '\n')
        if (resposta == '>') {
            min = palpite + 1;
        } else if (resposta == '<') {
            max = palpite - 1;
        } else if (resposta != '=') {
            printf("Entrada inválida! Digite apenas '<', '>' ou '='.\n");
        }
    } while (resposta != '=');
    printf("Acertei! O número é %d.\n\n", palpite);
    printf("Deseja jogar de novo? Se sim digite 's', se não digite 'n': ");
    scanf(" %c", & finalizador);
    }while(finalizador == 's');
    return 0;
}
#endif // ex1

//Reescreva o programa do exercicio anterior agora utilizando o comando switch. Conte o n. de tentativas e imprima o resultado no video.
#ifdef ex2
int main()
{
    int min = 1, max = 99, palpite, tentativas = 0;
    char resposta, finalizador;
    do{
    printf("pense em um número de 1 a 99\n");
    do {
        palpite = (min + max) / 2;
        printf("Seu número é %d? (Digite '<' se for menor, '>' se for maior, '=' se eu acertei): ", palpite);
        scanf(" %c", &resposta);  // espaço antes de %c para ignorar caracteres anteriores (como '\n')
        switch(resposta)
        {
            case'<':
            {
                max = palpite -1;
                tentativas++;
                break;
            }
            case'>':
            {
                min = palpite + 1;
                tentativas++;
                break;
            }
            case'=':
            {
                printf("Acertei! O número é %d.\n", palpite);
                tentativas++;
                break;
            }
            default :
            {
                printf("digite um símbolo válido como: '<', '>', '='\n");
            }

        }
    } while (resposta != '=');
    printf("quantidade de tentativas: %d\n\n", tentativas);
    printf("Deseja jogar de novo? Se sim digite 's', se não digite 'n': ");
    scanf(" %c", & finalizador);
    }while(finalizador == 's');
    return 0;
}
#endif // ex2

/*  Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/
#ifdef ex3
int main()
{
    int nums[50],cont = 0,i = 0,soma = 0,qtpositivos = 0;
    float media;
    char finalizador;
    do{
    do
    {
        printf("digite um número inteiro positivo\n");
        scanf("%d", & nums[cont]);
        cont++;

    }while(nums[cont -1] > 0);
    for(i; i < cont;i++)
    {
        if(nums[i] > 0)
        {
            qtpositivos++;
            soma = soma + nums[i];
        }
    }
    media = soma / qtpositivos;
    printf("você digitou um número negativo e fugiu da regra :(, logo a média dos números positivos digitados: %.2f\n\n", media);
    printf("Deseja jogar de novo? Se sim digite 's', se não digite 'n': ");
    scanf(" %c", & finalizador);
    }while(finalizador == 's');
    return 0;
}
#endif // ex3
/*As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
#ifdef ex4
int main()
{
    int h1, m1, s1, h2, m2, s2,total1,total2,intervalo, horas, minutos, segundos;
    char finalizador;
    do{
    do
    {
        printf("por favor digite quando a ligação começou: (hh mm ss)\n ");
        scanf("%d %d %d", &h1, &m1, &s1);
        if(h1 < 0 || m1 < 0 || s1 < 0)
        {
            printf("não digite números negativos!!\n");
        }
    }while(h1 < 0 || m1 < 0 || s1 < 0);
    do
    {
        printf("por favor digite quando a ligação terminou: (hh mm ss)\n ");
        scanf("%d %d %d", &h2, &m2, &s2);
        if(h2 < 0 || m2 < 0 || s2 < 0)
        {
            printf("não digite números negativos!!\n");
        }
    }while(h2 < 0 || m2 < 0 || s2 < 0);
    //coverter tudo para segundos
    total1 = h1 * 3600 + m1 * 60 + s1;
    total2 = h2 * 3600 + m2 * 60 + s2;
    // diferença entre os dois(intervalo de tempo)
    intervalo = total2 - total1;
    horas = intervalo / 3600;
    minutos = (intervalo % 3600) /60;
    segundos = intervalo % 60;
    printf("Duração da ligação: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
    printf("Deseja testar de novo? Se sim digite 's', se não digite 'n': ");
    scanf(" %c", & finalizador);
    }while(finalizador == 's');
    return 0;
}
#endif // ex4
#ifdef ex5
/*Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/
int main()
{
    float distancia, litros, consumo;
    printf("digite por favor a distância que foi percorrida(em km) e quantos litros de gasolina foi consumido\n");
    do
    {
        printf("distancia em km: ");
        scanf("%f", &distancia);
        printf("litros: ");
        scanf("%f", &litros);
        if(distancia <= 0 || litros <= 0)
        {
            printf("digite valores válidos\n");
        }
    }while(distancia <= 0 || litros <= 0);
    consumo = distancia / litros;
    if(consumo < 8)
    {
        printf("o consumo (KM por L) do seu carro é de %.2f. Venda o carro !\n", consumo);
    }else if(consumo >= 8 && consumo <= 14)
    {
        printf("o consumo (KM por L) do seu carro é de %.2f. Econômico!\n", consumo);
    }else
    {
        printf("o consumo (KM por L) do seu carro é de %.2f. Super Econômico!\n", consumo);
    }
    return 0;
}
#endif // ex5