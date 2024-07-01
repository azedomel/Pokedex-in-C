    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>


    int main() {
        printf("---------------------------------\n");
        printf("Bem vindo ao Jogo de Adivinhação!\n");
        printf("---------------------------------\n");


      srand(time(0));
        int numerosecreto = rand() % 100;

        int chute;
        int tentativas = 1;
        double pontos = 1000;

        int acertou = 0;

        int numerodetentativas;

        for(int i = 1; i <= numerodetentativas; i++) {

            printf("Tentativa %d\n", tentativas);
            printf("qual é o seu chute?\n");
            scanf("%d", &chute);
            printf("seu chute foi %d\n", chute);

            if(chute < 0) {
                printf("Você nao pode chutar numeros negativos\n");
                continue;
            }

            acertou = (chute == numerosecreto);
            int maior = chute > numerosecreto;

            if(acertou) {
                break;

            } else if(maior) {
                printf("Seu chute foi maior do que o numero secreto!\n");
            } else {
                printf("Seu chute foi menor do que o numero secreto!\n");
            }

            tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / 2.0;
            pontos = pontos - pontosperdidos;
        }

        printf("fim de jogo!\n");

        if (acertou) {
        printf("voce ganhou!\n");
        printf("total de pontos: %.0f\n", pontos);
        printf("voce acertou em %d tentativas!\n", tentativas);

        } 
        else {
        printf("voce perdeu! mais sorte na proxima!\n");
        }

    }