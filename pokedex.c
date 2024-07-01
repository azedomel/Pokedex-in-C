#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 78

struct Pokemons
{
    char nome[50];
    char tipo[50];
    char dex[200];
    int hp;
    int atk;
    int def;
    int special_atk;
    int special_def;
    int speed;
};
struct Usuarios
{
    char login[100];
    char novo_login[100];
    char senha[100];
    char nova_senha[100];
    int option;
};
int i;

struct Pokemons poke[TAM];
struct Usuarios treinador;

void menu()
{
    printf("bem vindo a pokedex, deseja se cadastrar? [1]S [2]N \n");
    scanf("%d", &treinador.option);    
    switch(treinador.option)
    {
        case 1:
            printf("Digite seu login: ");
            scanf("%s", treinador.novo_login);
            printf("Digite sua senha: ");
            scanf("%s", treinador.nova_senha);
            printf("Cadastro feito com sucesso!\n");
            printf("Deseja entrar em sua pokedex? [1]S [2]N ");
            scanf("%d", &treinador.option);
            break;
        default:
            printf("\nInfelizmente nao podemos prosseguir sem seu cadastro, tente novamente <:\n");
    }
    switch(treinador.option)
    {
        case 1:
        printf("\nLogin: ");
        scanf("%s", treinador.login);
        printf("\nSenha: ");
        scanf("%s", treinador.senha);
        if(strcmp(treinador.novo_login, treinador.login)==0 && strcmp(treinador.nova_senha, treinador.senha)==0)
        {
            printf("\nBem vindo(a) tãmça %s",treinador.login);
            break;
        }
        case 2:
            if(treinador.option == 2)
            {
                printf("\nObrigado treinador, volte sempre.");
                break;
            }
    }
}


void atribuirPokemons()
{

    i = 0;
    //inicializando a estrutura com valoress
        //1
        strcpy(poke[i].nome, "Bulbasaur #001");
        strcpy(poke[i].tipo, "Planta/Veneno");
        strcpy(poke[i].dex, "Ele utiliza os nutrientes que são armazenados em sua semente em seu dorso.");
        poke[i].hp = 45;
        poke[i].atk = 49;
        poke[i].def = 49;
        poke[i].special_atk = 65;
        poke[i].special_def = 65;
        poke[i].speed = 45;
        i++;
        //2
        strcpy(poke[i].nome, "Charmander #004");
        strcpy(poke[i].tipo, "Fogo");
        strcpy(poke[i].dex, "A chama de sua calda mostra a sua força vital.");
        poke[i].hp = 39;
        poke[i].atk = 52;
        poke[i].def = 43;
        poke[i].special_atk = 60;
        poke[i].special_def = 50;
        poke[i].speed = 60;
        i++;
        //3
        strcpy(poke[i].nome, "Squirtle #007");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "Após seu nascimento, a  suas costas incham e endurecem forando sua concha, ele pode espalhar uma potente espuma por sua boca.");
        poke[i].hp = 44;
        poke[i].atk = 48;
        poke[i].def = 65;
        poke[i].special_atk = 50;
        poke[i].special_def = 64;
        poke[i].speed = 43;
        i++;
        //4
        strcpy(poke[i].nome, "Caterpie #010");
        strcpy(poke[i].tipo, "Inseto");
        strcpy(poke[i].dex, "Para se proteger de ameaças, ele libera um fedor horrivel da sua antena e afasta seus inimigos");
        poke[i].hp = 45;
        poke[i].atk = 30;
        poke[i].def = 35;
        poke[i].special_atk = 20;
        poke[i].special_def = 20;
        poke[i].speed = 45;
        i++;
        //5
        strcpy(poke[i].nome, "Weedle #013");
        strcpy(poke[i].tipo, "Inseto/Veneno");
        strcpy(poke[i].dex, "Cuido com o ferrão em sua cabeça, este pokemon se esconde em arbustos para comer folhas.");
        poke[i].hp = 40;
        poke[i].atk = 35;
        poke[i].def = 30;
        poke[i].special_atk = 20;
        poke[i].special_def = 20;
        poke[i].speed = 50;
        i++;
        //6
        strcpy(poke[i].nome, "Pedgey #016");
        strcpy(poke[i].tipo, "Voador");
        strcpy(poke[i].dex, "Um pokemon docil mas se ameaçado pode levantar areia para se proteger inves de atacar.");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 40;
        poke[i].special_atk = 35;
        poke[i].special_def = 35;
        poke[i].speed = 56;
        i++;
        //7
        strcpy(poke[i].nome, "Rattata #019");
        strcpy(poke[i].tipo, "Normal");
        strcpy(poke[i].dex, "Pode mastigar qualquer coisa com suas presas, se voce ver um pode ter certeza que existem outros 40 na mesma area.");
        poke[i].hp = 30;
        poke[i].atk = 56;
        poke[i].def = 35;
        poke[i].special_atk = 25;
        poke[i].special_def = 35;
        poke[i].speed = 72;
        i++;
        //8
        strcpy(poke[i].nome, "Spearow #021");
        strcpy(poke[i].tipo, "Normal/Voador");
        strcpy(poke[i].dex, "Não consegue voar muito alto, no entanto pode voar muito rapido para proteger o seu territorio.");
        poke[i].hp = 40;
        poke[i].atk = 60;
        poke[i].def = 30;
        poke[i].special_atk = 31;
        poke[i].special_def = 31;
        poke[i].speed = 70;
        i++;
        //9
        strcpy(poke[i].nome, "Ekans #023");
        strcpy(poke[i].tipo, "Veneno");
        strcpy(poke[i].dex, "Ele pode soltar livremente sua mandibula para engolir presas grandes inteira, porem pode ficar bem pesado para se movido.");
        poke[i].hp = 35;
        poke[i].atk = 60;
        poke[i].def = 44;
        poke[i].special_atk = 40;
        poke[i].special_def = 54;
        poke[i].speed = 55;
        i++;
        //10
        strcpy(poke[i].nome, "Pikachu #025");
        strcpy(poke[i].tipo, "Eletrico");
        strcpy(poke[i].dex, "As machas nas suas bochechas pode armazenar energia, quando fica inrritado pode descarregar imediatamente.");
        poke[i].hp = 35;
        poke[i].atk = 55;
        poke[i].def = 40;
        poke[i].special_atk = 50;
        poke[i].special_def = 50;
        poke[i].speed = 90;
        i++;
        //11
        strcpy(poke[i].nome, "Sandshrew #027");
        strcpy(poke[i].tipo, "Terrestre");
        strcpy(poke[i].dex, "Cria tocas profundas, quando sente perigo se enrrola para se proteger dos ataques.");
        poke[i].hp = 50;
        poke[i].atk = 75;
        poke[i].def = 85;
        poke[i].special_atk = 20;;
        poke[i].special_def = 30;
        poke[i].speed = 40;
        i++;
        //12
        strcpy(poke[i].nome, "Nidoran F #030");
        strcpy(poke[i].tipo, "Veneno");
        strcpy(poke[i].dex, "As femeas da especies consegue sentir melhor o odores do que os machos, usam seus bigodes para se localizar com o vento.");
        poke[i].hp = 55;
        poke[i].atk = 47;
        poke[i].def = 52;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 41;
        i++;
        //13
        strcpy(poke[i].nome, "Nidoran M #031");
        strcpy(poke[i].tipo, "Veneno");
        strcpy(poke[i].dex, "O chifre em sua testa possue um poderoso veneno, este pokemon e sempre muito calteloso.");
        poke[i].hp = 46;
        poke[i].atk = 57;
        poke[i].def = 40;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 50;
        i++;
        //14
        strcpy(poke[i].nome, "Cleafairy #035");
        strcpy(poke[i].tipo, "Fada");
        strcpy(poke[i].dex, "Em noites de lua cheia, clefairy se reúne em bando para dançar e tomar banho ao luar fazendo eles flutuarem.");
        poke[i].hp = 70;
        poke[i].atk = 45;
        poke[i].def = 48;
        poke[i].special_atk = 60;
        poke[i].special_def = 65;
        poke[i].speed = 35;
        i++;
        //15
        strcpy(poke[i].nome, "Vulpix #037");
        strcpy(poke[i].tipo, "Fogo");
        strcpy(poke[i].dex, "Quando um inimigo e muito forte, vulpix fingi estar ferido para enganar o adversario para fugir.");
        poke[i].hp = 38;
        poke[i].atk = 41;
        poke[i].def = 40;
        poke[i].special_atk = 50;
        poke[i].special_def = 65;
        poke[i].speed = 65;
        i++;
        //16
        strcpy(poke[i].nome, "Jigglypuff #039");
        strcpy(poke[i].tipo, "Normal/Fada");
        strcpy(poke[i].dex, "Quando seus enormes olhos tremem, jigglypuff canta sua misteriosa melodia que faz todos q escute dormir.");
        poke[i].hp = 115;
        poke[i].atk = 45;
        poke[i].def = 20;
        poke[i].special_atk = 45;
        poke[i].special_def = 25;
        poke[i].speed = 20;
        i++;
        //17
        strcpy(poke[i].nome, "Zubat #041");
        strcpy(poke[i].tipo, "Voador/Veneno");
        strcpy(poke[i].dex, "Pode emitir ondas ultrassônicas de sua boca para verificar oq há ao seu redor.");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 35;
        poke[i].special_atk = 30;
        poke[i].special_def = 40;
        poke[i].speed = 55;
        i++;
        //18
        strcpy(poke[i].nome, "Oddish #043");
        strcpy(poke[i].tipo, "Planta/Veneno");
        strcpy(poke[i].dex, "Diz que pode caminhar 300 metros a noite.");
        poke[i].hp = 45;
        poke[i].atk = 50;
        poke[i].def = 55;
        poke[i].special_atk = 75;
        poke[i].special_def = 65;
        poke[i].speed = 30;
        i++;
        //19
        strcpy(poke[i].nome, "Paras #046");
        strcpy(poke[i].tipo, "Planta/Inseto");
        strcpy(poke[i].dex, "Roem as raises de arvores porem os cogumelos em suas costas absorvem todos os nutrientes.");
        poke[i].hp = 1;
        poke[i].atk = 12;
        poke[i].def = 13;
        poke[i].special_atk = 10;
        poke[i].special_def = 0;
        poke[i].speed = 0;
        i++;
        //20
        strcpy(poke[i].nome, "Venonat #048");
        strcpy(poke[i].tipo, "Inseto/Veneno");
        strcpy(poke[i].dex, "O veneno escorre por todo seu corpo, preda insetos menores anoite que são atraidos pela luz.");
        poke[i].hp = 60;
        poke[i].atk = 55;
        poke[i].def = 50;
        poke[i].special_atk = 40;
        poke[i].special_def = 55;
        poke[i].speed = 45;
        i++;
        //21
        strcpy(poke[i].nome, "Diglett #050");
        strcpy(poke[i].tipo, "Terrestre");
        strcpy(poke[i].dex, "Se alimenta de raize, vive embaixo da terra e raramente aparece acima do solo.");
        poke[i].hp = 10;
        poke[i].atk = 55;
        poke[i].def = 25;
        poke[i].special_atk = 35;
        poke[i].special_def = 45;
        poke[i].speed = 90;
        i++;
        //22
        strcpy(poke[i].nome, "Meowth #052");
        strcpy(poke[i].tipo, "Normal");
        strcpy(poke[i].dex, "Tudo que faz e dormir o dia inteiro, a noite vigia seu territorio com seus olhos brilhantes.");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 35;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 90;
        i++;
        //23
        strcpy(poke[i].nome, "Psyduck #054");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "Sofre de muito de dor de cabeça,quanto mais intença pode usar poderes misteriosos.");
        poke[i].hp = 50;
        poke[i].atk = 52;
        poke[i].def = 48;
        poke[i].special_atk = 65;
        poke[i].special_def = 50;
        poke[i].speed = 55;
        i++;
        //24
        strcpy(poke[i].nome, "Mankey #056");
        strcpy(poke[i].tipo, "Lutador");
        strcpy(poke[i].dex, "Vive em tribos, quandos se perde fica inrritado com a solidão.");
        poke[i].hp = 40;
        poke[i].atk = 80;
        poke[i].def = 35;
        poke[i].special_atk = 35;
        poke[i].special_def = 45;
        poke[i].speed = 70;
        i++;
        //25
        strcpy(poke[i].nome, "Growlithe #058");
        strcpy(poke[i].tipo, "Fogo");
        strcpy(poke[i].dex, "Corajoso,confiavel e destemido, enfrenta qualquer inimigo.");
        poke[i].hp = 55;
        poke[i].atk = 70;
        poke[i].def = 45;
        poke[i].special_atk = 70;
        poke[i].special_def = 45;
        poke[i].speed = 60;
        i++;
        //26
        strcpy(poke[i].nome, "Poliwag #060");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "O redemoinho em sua barriga mostra tudo q esse pokemon comeu anteriormente.");
        poke[i].hp = 55;
        poke[i].atk = 70;
        poke[i].def = 45;
        poke[i].special_atk = 70;
        poke[i].special_def = 45;
        poke[i].speed = 60;
        i++;
        //27
        strcpy(poke[i].nome, "Abra #063");
        strcpy(poke[i].tipo, "Psiquico");
        strcpy(poke[i].dex, "Utiliza dos seus poderes dormindo, o seus sonhos influencia em seus poderes.");
        poke[i].hp = 25;
        poke[i].atk = 20;
        poke[i].def = 15;
        poke[i].special_atk = 105;
        poke[i].special_def = 55;
        poke[i].speed = 90;
        i++;
        //28
        strcpy(poke[i].nome, "Machop #066");
        strcpy(poke[i].tipo, "Lutador");
        strcpy(poke[i].dex, "esmo do tamanho de uma criança seu corpo músculos e capaz de arremessar 100 adultos.");
        poke[i].hp = 70;
        poke[i].atk = 80;
        poke[i].def = 50;
        poke[i].special_atk = 35;
        poke[i].special_def = 35;
        poke[i].speed = 35;
        i++;
         //29
        strcpy(poke[i].nome, "Bellsprout #069");
        strcpy(poke[i].tipo, "Planta/Veneno");
        strcpy(poke[i].dex, "NULL");
        strcpy(poke[i].tipo, "NULL");
        poke[i].hp = 50;
        poke[i].atk = 75;
        poke[i].def = 35;
        poke[i].special_atk = 70;
        poke[i].special_def = 30;
        poke[i].speed = 40;
        i++;
         //30
        strcpy(poke[i].nome, "Tentacool #072");
        strcpy(poke[i].tipo, "Agua/Veneno");
        strcpy(poke[i].dex, "Pode ser encontrado na praia quando as mares estão baixas.");
        poke[i].hp = 40;
        poke[i].atk = 40;
        poke[i].def = 35;
        poke[i].special_atk = 50;
        poke[i].special_def = 100;
        poke[i].speed = 70;
        i++;
         //31
        strcpy(poke[i].nome, "Geodude #074");
        strcpy(poke[i].tipo, "Terrestre/Pedra");
        strcpy(poke[i].dex, "Quando esta dormindo este pokemon parece uma pedra comum, mas se tropeça nele, ele balançara seus punhos com raiva.");
        poke[i].hp = 40;
        poke[i].atk = 80;
        poke[i].def = 100;
        poke[i].special_atk = 30;
        poke[i].special_def = 30;
        poke[i].speed = 20;
        i++;
         //32
        strcpy(poke[i].nome, "Ponyta #077");
        strcpy(poke[i].tipo, "Fogo");
        strcpy(poke[i].dex, "Uma hora após seu nascimentos sua crina flamenjante cresce, dando-lhe uma imprecionante aparencia.");
        poke[i].hp = 50;
        poke[i].atk = 85;
        poke[i].def = 55;
        poke[i].special_atk = 65;
        poke[i].special_def = 65;
        poke[i].speed = 90;
        i++;
         //33
        strcpy(poke[i].nome, "Slowpoke #079");
        strcpy(poke[i].tipo, "Agua/Psiquico");
        strcpy(poke[i].dex, "Incrivel lerdo e burro, demora um pouco para sentir dor quando e atacado.");
        poke[i].hp = 90;
        poke[i].atk = 65;
        poke[i].def = 65;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 15;
        i++;
         //34
        strcpy(poke[i].nome, "Magnemite #081");
        strcpy(poke[i].tipo, "Eletrico/Metal");
        strcpy(poke[i].dex, "Os imas em sua cabeça emitem ondas eletromagneticas, que repelem a gravidade permitindo ele a voar.");
        poke[i].hp = 25;
        poke[i].atk = 35;
        poke[i].def = 70;
        poke[i].special_atk = 95;
        poke[i].special_def = 55;
        poke[i].speed = 45;
        i++;
         //35
        strcpy(poke[i].nome, "Farfetch'd #083");
        strcpy(poke[i].tipo, "Normal");
        strcpy(poke[i].dex, "Por sua carne saborosa esse pokemon esta em risco de extinção.");
        poke[i].hp = 52;
        poke[i].atk = 90;
        poke[i].def = 55;
        poke[i].special_atk = 58;
        poke[i].special_def = 62;
        poke[i].speed = 60;
        i++;
         //36
        strcpy(poke[i].nome, "Doduo #084");
        strcpy(poke[i].tipo, "Normal");
        strcpy(poke[i].dex, "Sua cabeças gemeas conseguem lutar perfeitamente sincronizados entre si.");
        poke[i].hp = 35;
        poke[i].atk = 85;
        poke[i].def = 45;
        poke[i].special_atk = 35;
        poke[i].special_def = 35;
        poke[i].speed = 75;
        i++;
         //37
        strcpy(poke[i].nome, "Seel #086");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "Seu chifre e muito duro, capaz de quebrar ate gelo.");
        poke[i].hp = 65;
        poke[i].atk = 45;
        poke[i].def = 55;
        poke[i].special_atk = 45;
        poke[i].special_def = 70;
        poke[i].speed = 45;
        i++;
        //38
        strcpy(poke[i].nome, "Grimer #088");
        strcpy(poke[i].tipo, "Veneno");
        strcpy(poke[i].dex, "Nascido do lodo, esse pokemon e encontrado em lugares poluidos onde aumentão o numero de bacterias em seus corpos.");
        poke[i].hp = 80;
        poke[i].atk = 80;
        poke[i].def = 50;
        poke[i].special_atk = 40;
        poke[i].special_def = 50;
        poke[i].speed = 25;
        i++;
        //39
        strcpy(poke[i].nome, "Shellder #090");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "Protegido por uma dura concha por fora, mas muito macil por dentro.");
        poke[i].hp = 30;
        poke[i].atk = 65;
        poke[i].def = 100;
        poke[i].special_atk = 45;
        poke[i].special_def = 25;
        poke[i].speed = 40;
        i++;
        //40
        strcpy(poke[i].nome, "Gastly #092");
        strcpy(poke[i].tipo, "Fantasma/Veneno");
        strcpy(poke[i].dex, "Ele venvolve suas presas com seu corpo gasoso, enfraquecendo-as através de sua pele.");
        poke[i].hp = 30;
        poke[i].atk = 35;
        poke[i].def = 30;
        poke[i].special_atk = 100;
        poke[i].special_def = 35;
        poke[i].speed = 80;
        i++;
        //41
        strcpy(poke[i].nome, "Onix #095");
        strcpy(poke[i].tipo, "Terrestre/Pedra");
        strcpy(poke[i].dex, "Ao ingerir certos minerais pode alterar a estrutura de seu corpo.");
        poke[i].hp = 35;
        poke[i].atk = 45;
        poke[i].def = 160;
        poke[i].special_atk = 30;
        poke[i].special_def = 45;
        poke[i].speed = 75;
        i++;
        //42
        strcpy(poke[i].nome, "Drowzee #096");
        strcpy(poke[i].tipo, "Psiquico");
        strcpy(poke[i].dex, "Lembra de cada sonho que devora, mas seus preferidos são os das crianças são mais saboroso.");
        poke[i].hp = 60;
        poke[i].atk = 48;
        poke[i].def = 45;
        poke[i].special_atk = 43;
        poke[i].special_def = 90;
        poke[i].speed = 42;
        i++;
        //43
        strcpy(poke[i].nome, "Krabby #098");
        strcpy(poke[i].tipo, "Agua");
        strcpy(poke[i].dex, "NULL");
        poke[i].hp = 30;
        poke[i].atk = 105;
        poke[i].def = 90;
        poke[i].special_atk = 25;
        poke[i].special_def = 25;
        poke[i].speed = 50;
        i++;
        //44
        strcpy(poke[i].nome, "Voltorb #100");
        strcpy(poke[i].tipo, "Eletrico");
        strcpy(poke[i].dex, "Geralmente encontrado em usinas de energia. Facilmente confundidos com uma POKé BALL, eles eletrocutaram muitas pessoas.");
        poke[i].hp = 40;
        poke[i].atk = 30;
        poke[i].def = 50;
        poke[i].special_atk = 55;
        poke[i].special_def = 55;
        poke[i].speed = 100;
        i++;
        //45
        strcpy(poke[i].nome, "Exeggcute #102");
        strcpy(poke[i].tipo, "Planta/Psíquico");
        strcpy(poke[i].dex, "Se você mexer em uma das cabeças do pokemon, as outras cabeças irão rapidamente se junta e lhe atacar.");
        poke[i].hp = 60;
        poke[i].atk = 40;
        poke[i].def = 80;
        poke[i].special_atk = 60;
        poke[i].special_def = 45;
        poke[i].speed = 40;
        i++;
        //46
        strcpy(poke[i].nome, "Cubone #104");
        strcpy(poke[i].tipo, "Terrestre");
        strcpy(poke[i].dex, "Quando a lembrança de sua mãe falecida o leva a lagrimas, seus gritos ecoam dentro do crânio que usa em sua cabeça.");
        poke[i].hp = 50;
        poke[i].atk = 50;
        poke[i].def = 95;
        poke[i].special_atk = 40;
        poke[i].special_def = 50;
        poke[i].speed = 35;
        i++;
        //47
        strcpy(poke[i].nome, "Hitmonlee #106");
        strcpy(poke[i].tipo, "Lutador");
        strcpy(poke[i].dex, "No momento em que ele acerta o chute no oponente, Hitmonlee endurece os musculos do pé, maximizando o poder do chute.");
        poke[i].hp = 50;
        poke[i].atk = 120;
        poke[i].def = 53;
        poke[i].special_atk = 35;
        poke[i].special_def = 110;
        poke[i].speed = 87;
        i++;
        //48
        strcpy(poke[i].nome, "Hitmonchan #107");
        strcpy(poke[i].tipo, "Lutador");
        strcpy(poke[i].dex, "Ele cerca seus oponentes com socos em sequencia de ambos os lados e depois finaliza com um soco direto a mais de 480 km/h.");
        poke[i].hp = 50;
        poke[i].atk = 105;
        poke[i].def = 79;
        poke[i].special_atk = 35;
        poke[i].special_def = 110;
        poke[i].speed = 76;
        i++;
        //49
        strcpy(poke[i].nome, "Lickitung #108");
        strcpy(poke[i].tipo, "Normal");
        strcpy(poke[i].dex, "Se a saliva entrar em contato com você e você não limpar, uma coceira intensa se iniciará.");
        poke[i].hp = 90;
        poke[i].atk = 55;
        poke[i].def = 75;
        poke[i].special_atk = 60;
        poke[i].special_def = 75;
        poke[i].speed = 30;
        i++;
        //50
        strcpy(poke[i].nome, "Koffing #109");
        strcpy(poke[i].dex, "o gás tóxico é mantido de seu corpo fino em forma de balão, podendo causar explosões.");
        strcpy(poke[i].tipo, "Venenoso");
        poke[i].hp = 40;
        poke[i].atk = 65;
        poke[i].def = 95;
        poke[i].special_atk = 60;
        poke[i].special_def = 45;
        poke[i].speed = 35;
        i++;
        //51
        strcpy(poke[i].nome, "Rhyhorn #111");
        strcpy(poke[i].dex, "rhyhorn é um peso de couro de cor de carne, que é usado como um meio de");
        strcpy(poke[i].tipo, "Terrestre");
        poke[i].hp = 80;
        poke[i].atk = 85;
        poke[i].def = 95;
        poke[i].special_atk = 30;
        poke[i].special_def = 30;
        poke[i].speed = 25;
        i++;
        //52
        strcpy(poke[i].nome, "Chansey #113");
        strcpy(poke[i].dex, "Este gentil Pokemon põe ovos nutritivos e os compartilha com seres feridas.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 250;
        poke[i].atk = 5;
        poke[i].def = 5;
        poke[i].special_atk = 35;
        poke[i].special_def = 105;
        poke[i].speed = 50;
        i++;
        //53
        strcpy(poke[i].nome, "Tangela #114");
        strcpy(poke[i].dex, "Escondido sobre vinhas que cresce infinitamente mesmo que sejam arrancadas.");
        strcpy(poke[i].tipo, "Planta");
        poke[i].hp = 65;
        poke[i].atk = 55;
        poke[i].def = 115;
        poke[i].special_atk = 100;
        poke[i].special_def = 40;
        poke[i].speed = 60;
        i++;
        //54
        strcpy(poke[i].nome, "Kangaskhan #115");
        strcpy(poke[i].dex, "Mesmo carregando seu bebe em uma bolsa na barriga, o Pokemon é veloz.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 105;
        poke[i].atk = 95;
        poke[i].def = 80;
        poke[i].special_atk = 40;
        poke[i].special_def =80;
        poke[i].speed = 90;
        i++;
        //55
        strcpy(poke[i].nome, "Horsea #116");
        strcpy(poke[i].dex, "Se atacado mesmo por um inimigo enorme, Horsea nada sem esforço rapidamente para um local seguro.");
        strcpy(poke[i].tipo, "Água");
        poke[i].hp = 30;
        poke[i].atk = 40;
        poke[i].def = 70;
        poke[i].special_atk = 70;
        poke[i].special_def = 25;
        poke[i].speed = 60;
        i++;
        //56
        strcpy(poke[i].nome, "Goldeen #118");
        strcpy(poke[i].dex, "Ela é conhecida como Dançarina da Água. Pois suas barbatanas dorsal, peitoral e cauda ondulam elegantemente na Água.");
        strcpy(poke[i].tipo, "Água");
        poke[i].hp = 45;
        poke[i].atk = 67;
        poke[i].def = 60;
        poke[i].special_atk = 35;
        poke[i].special_def = 50;
        poke[i].speed = 63;
        i++;
        //57
        strcpy(poke[i].nome, "Staryu #120");
        strcpy(poke[i].dex, "É encontrado na praia no final do verão em grupos iluminando-se em ritmo constante.");
        strcpy(poke[i].tipo, "Água");
        poke[i].hp = 30;
        poke[i].atk = 45;
        poke[i].def = 55;
        poke[i].special_atk = 70;
        poke[i].special_def = 55;
        poke[i].speed = 85;
        i++;
        //58
        strcpy(poke[i].nome, "Mr.Mime #122");
        strcpy(poke[i].dex, "É um especialista em pantomima que pode criar paredes invisiveis, mas solidas, usando gestos de mimica.");
        strcpy(poke[i].tipo, "Psíquico e Fada");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 65;
        poke[i].special_atk = 100;
        poke[i].special_def = 120;
        poke[i].speed = 90;
        i++;
        //59
        strcpy(poke[i].nome, "Scyther #123");
        strcpy(poke[i].dex, "Ele corta a grama com usas foices afiada, movendo-se veloz demais para ser visto pelo ser humano.");
        strcpy(poke[i].tipo, "Inseto e Voador");
        poke[i].hp = 70;
        poke[i].atk = 110;
        poke[i].def = 80;
        poke[i].special_atk = 55;
        poke[i].special_def = 80;
        poke[i].speed = 105;
        i++;
        //60
        strcpy(poke[i].nome, "Jinx");
        strcpy(poke[i].dex, "A Jinx ja foi temida e adorada como a Rainha do Gelo.");
        strcpy(poke[i].tipo, "Gelo e Psiquico");
        poke[i].hp = 65;
        poke[i].atk = 55;
        poke[i].def = 35;
        poke[i].special_atk = 115;
        poke[i].special_def = 95;
        poke[i].speed = 95;
        i++;
        //61
        strcpy(poke[i].nome, "Electabuzz #125");
        strcpy(poke[i].dex, "Chegar perto dele deixara seus pelos ou cabelos em pé.");
        strcpy(poke[i].tipo, "Elétrico");
        poke[i].hp = 65;
        poke[i].atk = 83;
        poke[i].def = 57;
        poke[i].special_atk = 95;
        poke[i].special_def = 85;
        poke[i].speed = 105;
        i++;
        //62
        strcpy(poke[i].nome, "Magmar #126");
        strcpy(poke[i].dex, "Encontrado em um vulcão. A temperatura deste respirador de fogo é de aproximadamente 2.200 graus Fahrenheit.");
        strcpy(poke[i].tipo, "Fogo");
        poke[i].hp = 65;
        poke[i].atk = 95;
        poke[i].def = 57;
        poke[i].special_atk = 100;
        poke[i].special_def = 85;
        poke[i].speed = 93;
        i++;
        //63
        strcpy(poke[i].nome, "Pinsir #127");
        strcpy(poke[i].dex, "Os pinsir julgam uns aos outros de acordo com as pinças. Pinças mais grossas e fortes aumentam a popularidade entre o sexo oposto.");
        strcpy(poke[i].tipo, "Inseto");
        poke[i].hp = 65;
        poke[i].atk = 125;
        poke[i].def = 100;
        poke[i].special_atk = 55;
        poke[i].special_def = 70;
        poke[i].speed = 85;
        i++;
        //64
        strcpy(poke[i].nome, "Tauros #128");
        strcpy(poke[i].dex, "Ao atingir um inimigo, ele ataca furiosamente enquanto chicoteia seu corpo com suas caudas.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 75;
        poke[i].atk = 125;
        poke[i].def = 95;
        poke[i].special_atk = 40;
        poke[i].special_def = 70;
        poke[i].speed = 110;
        i++;
        //65
        strcpy(poke[i].nome, "Magikarp #129");
        strcpy(poke[i].dex, "Um Pokemon inutil e pouco poderoso. Pode saltar alto em muito poucas ocasiões, mas nunca mais de dois metros.");
        strcpy(poke[i].tipo, "Alegre");
        poke[i].hp = 20;
        poke[i].atk = 10;
        poke[i].def = 55;
        poke[i].special_atk = 15;
        poke[i].special_def = 20;
        poke[i].speed = 80;
        i++;
        //66
        strcpy(poke[i].nome, "Lapras #131");
        strcpy(poke[i].dex, "Um Pokemon transporte. Ele pode cantar um grito encantador caso esteja de bom humor.");
        strcpy(poke[i].tipo, "Água e Gelo");
        poke[i].hp = 130;
        poke[i].atk = 85;
        poke[i].def = 80;
        poke[i].special_atk = 85;
        poke[i].special_def = 95;
        poke[i].speed = 60;
        i++;
        //67
        strcpy(poke[i].nome, "Ditto #132");
        strcpy(poke[i].dex, "Sua transformação é perfeita. Porem, se rir, não conseguira manter seu disfarce.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 48;
        poke[i].atk = 48;
        poke[i].def = 48;
        poke[i].special_atk = 48;
        poke[i].special_def = 48;
        poke[i].speed = 48;
        i++;
        //68
        strcpy(poke[i].nome, "Eevee #133");
        strcpy(poke[i].dex, "A sua capacidade de evoluir em varias formas permite-lhe adaptar-se de forma tranquila e perfeita a qualquer ambiente.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 55;
        poke[i].atk = 55;
        poke[i].def = 50;
        poke[i].special_atk = 45;
        poke[i].special_def = 65;
        poke[i].speed = 55;
        i++;
        //69
        strcpy(poke[i].nome, "Porygon #137");
        strcpy(poke[i].dex, "O Porygon é um Pokemon artificial. As pessoas fica gratas com o seu potencial de ser útil a qualquer ambiente, pois ele não respira.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 65;
        poke[i].atk = 60;
        poke[i].def = 70;
        poke[i].special_atk = 85;
        poke[i].special_def = 75;
        poke[i].speed = 40;
        i++;
        //70
        strcpy(poke[i].nome, "Omanyte #138");
        strcpy(poke[i].dex, "Este Pokemon esta se tornando um problema, pois alguns Omanytes conseguem escapar após serem restaurados ou soltos na natureza pelas pessoas.");
        strcpy(poke[i].tipo, "Pedra e Água");
        poke[i].hp = 35;
        poke[i].atk = 40;
        poke[i].def = 100;
        poke[i].special_atk = 90;
        poke[i].special_def = 55;
        poke[i].speed = 35;
        i++;
        //71
        strcpy(poke[i].nome, "Kabuto #140");
        strcpy(poke[i].dex, "Kabuto muda a cada tres dias, tornando suas conchas cada vez mais duras. A especie esta proxima da extinção.");
        strcpy(poke[i].tipo, "Pedra e Água");
        poke[i].hp = 30;
        poke[i].atk = 80;
        poke[i].def = 90;
        poke[i].special_atk = 55;
        poke[i].special_def = 45;
        poke[i].speed = 55;
        i++;
        //72
        strcpy(poke[i].nome, "Aerodactyl #142");
        strcpy(poke[i].dex, "Um Pokemon feroz pré historico.");
        strcpy(poke[i].tipo, "Pedra e Voador");
        poke[i].hp = 80;
        poke[i].atk = 105;
        poke[i].def = 65;
        poke[i].special_atk = 60;
        poke[i].special_def = 75;
        poke[i].speed = 130;
        i++; 
        //73
        strcpy(poke[i].nome, "Snorlax");
        strcpy(poke[i].dex, "Ele devora aproximadamente 900 quilos de comida por dia. Não come somente quando esta dormindo.");
        strcpy(poke[i].tipo, "Normal");
        poke[i].hp = 160;
        poke[i].atk = 110;
        poke[i].def = 65;
        poke[i].special_atk = 65;
        poke[i].special_def = 110;
        poke[i].speed = 30;
        i++;
        //74
        strcpy(poke[i].nome, "Articuno #144");
        strcpy(poke[i].dex, "Este pássaro lendario pode criar nevascas ao congelar a umidade do ar.");
        strcpy(poke[i].tipo, "Gelo e Voador");
        poke[i].hp = 90;
        poke[i].atk = 85;
        poke[i].def = 100;
        poke[i].special_atk = 95;
        poke[i].special_def = 125;
        poke[i].speed = 85;
        i++;
        //75
        strcpy(poke[i].nome, "Zapdos #145");
        strcpy(poke[i].dex, "Dizem que este pássaro lendario vive em nuvens tempestuosas. Ele controla livremente os trovões.");
        strcpy(poke[i].tipo, "Elétrico e Voador");
        poke[i].hp = 90;
        poke[i].atk = 90;
        poke[i].def = 85;
        poke[i].special_atk = 125;
        poke[i].special_def = 90;
        poke[i].speed = 100;
        i++;
        //76
        strcpy(poke[i].nome, "Moltres");
        strcpy(poke[i].dex, "Dizem que sua presença indica a chegada da primavera.");
        strcpy(poke[i].tipo, "Fogo e Voador");
        poke[i].hp = 90;
        poke[i].atk = 100;
        poke[i].def = 90;
        poke[i].special_atk = 125;
        poke[i].special_def = 85;
        poke[i].speed = 90;
        i++;
        //77
        strcpy(poke[i].nome, "Dratini #147");
        strcpy(poke[i].dex, "O Pokemon perde muitas camadas de pele conforme vai crescendo. Durante o processo, ele é protegido por uma cachoeira.");
        strcpy(poke[i].tipo, "Dragão");
        poke[i].hp = 41;
        poke[i].atk = 64;
        poke[i].def = 45;
        poke[i].special_atk = 50;
        poke[i].special_def = 50;
        poke[i].speed = 50;
        i++;
        //78
        strcpy(poke[i].nome, "Mewtwo #150");
        strcpy(poke[i].dex, "Seu DNA é semelhante ao de Mew. No entanto, seu tamanho e disposição são bem diferentes.");
        strcpy(poke[i].tipo, "Psiquico");
        poke[i].hp = 106;
        poke[i].atk = 110;
        poke[i].def = 90;
        poke[i].special_atk = 154;
        poke[i].special_def = 90;
        poke[i].speed = 130;
        i++;
        //79
        strcpy(poke[i].nome, "Mew #151");
        strcpy(poke[i].dex, "Tão raro que ainda é dito ser uma miragem por muitos especialistas. Apenas poucas pessoas o viram em todo o mundo.");
        strcpy(poke[i].tipo, "Psiquico");
        poke[i].hp = 100;
        poke[i].atk = 100;
        poke[i].def = 100;
        poke[i].special_atk = 100;
        poke[i].special_def = 100;
        poke[i].speed = 100;
        i++;
}

int main()
{
    menu();    
    while(treinador.option != 2)
    {
        if(strcmp(treinador.novo_login, treinador.login)==0 && strcmp(treinador.nova_senha, treinador.senha)==0)
        {
            atribuirPokemons();
             for(i = 0; i <TAM;i++)
             {
                printf("\n[%i] %s\n", i+1, poke[i].nome);
                
             }
        }
    }
    system("cls");
    
    return 0;
};