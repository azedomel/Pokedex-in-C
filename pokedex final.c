#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 79

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
    int favs[151];
};
int i;

struct Pokemons poke[TAM];
struct Usuarios treinador;

void menu()
{
    printf("*======================*\n");
    printf("|*Bem vindo a Pokedex!*|\n ======================\n\n>> Deseja se cadastrar?\n[1]S [2]N\n");
    scanf("%d", &treinador.option);    
    printf("-------------------------------");
    switch(treinador.option)
    {
        case 1:
            printf("\nDigite seu login: ");
            scanf("%s", treinador.novo_login);
            printf("Digite sua senha: ");
            scanf("%s", treinador.nova_senha);
            printf("\n*=============================*");
            printf("\n|*Cadastro feito com sucesso!*|\n");
            printf(" =============================");
            printf("\n--------------------------------\n");
            printf("--------------------------------\n");
            printf(">> Deseja entrar em sua pokedex?\n[1]S [2]N\n");
            scanf("%d", &treinador.option);
            break;
        default:
            printf("-----------------------------------------");
            printf("\nInfelizmente nao podemos prosseguir sem seu cadastro, tente novamente <:\n");
            printf("---------------------------------------");
    }
    switch(treinador.option)
    {
        case 1:
        printf("-------------------------------");
        printf("\nLogin: ");
        scanf("%s", treinador.login);
        printf("Senha: ");
        scanf("%s", treinador.senha);
        if(strcmp(treinador.novo_login, treinador.login)==0 && strcmp(treinador.nova_senha, treinador.senha)==0)
        {
            printf("_______________________________");
            printf("\n____________________________\n");
            printf("\nBem vindo(a), %s!",treinador.login);
            printf("\n____________________________");
            printf("\n_______________________________\n");
            break;
        }
        case 2:
            if(treinador.option == 2)
            {
                printf("---------------------------------");
                printf("\n---------------------------------");
                printf("\nObrigado treinador, volte sempre.\n");
                printf("---------------------------------");
                break;
            }
    }
}


void atribuirPokemons()
{

    i = 0;
    //inicializando a estrutura com valores
        //1
        strcpy(poke[i].nome, "Bulbasaur #001");
        strcpy(poke[i].tipo, "Planta e Veneno");
        strcpy(poke[i].dex, "Ele utiliza os nutrientes que sao armazenados na sua semente, em seu dorso.");
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
        strcpy(poke[i].dex, "A chama de sua calda mostra a sua forca vital.");
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
        strcpy(poke[i].dex, "Apos seu nascimento, as suas costas incham e endurecem furando sua concha. Ele pode espalhar uma potente espuma por sua boca.");
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
        strcpy(poke[i].dex, "Para se proteger de ameacas, ele libera um fedor horrivel em sua antena e afasta seus inimigos");
        poke[i].hp = 45;
        poke[i].atk = 30;
        poke[i].def = 35;
        poke[i].special_atk = 20;
        poke[i].special_def = 20;
        poke[i].speed = 45;
        i++;
        //5
        strcpy(poke[i].nome, "Weedle #013");
        strcpy(poke[i].tipo, "Inseto e Venenoso");
        strcpy(poke[i].dex, "Cuidado com o ferrao em sua cabeca, este pokemon se esconde em arbustos para comer folhas.");
        poke[i].hp = 40;
        poke[i].atk = 35;
        poke[i].def = 30;
        poke[i].special_atk = 20;
        poke[i].special_def = 20;
        poke[i].speed = 50;
        i++;
        //6
        strcpy(poke[i].nome, "Pidgey #016");
        strcpy(poke[i].tipo, "Voador");
        strcpy(poke[i].dex, "Um pokemon docil mas, se ameacado, pode levantar areia para se proteger inves de atacar.");
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
        strcpy(poke[i].tipo, "Normal e Voador");
        strcpy(poke[i].dex, "Nao consegue voar muito alto, no entanto pode voar muito rapido para proteger o seu territorio.");
        poke[i].hp = 40;
        poke[i].atk = 60;
        poke[i].def = 30;
        poke[i].special_atk = 31;
        poke[i].special_def = 31;
        poke[i].speed = 70;
        i++;
        //9
        strcpy(poke[i].nome, "Ekans #023");
        strcpy(poke[i].tipo, "Venenoso");
        strcpy(poke[i].dex, "Ele pode soltar livremente sua mandibula para engolir presas grandes inteiras porem, pode ficar bem pesado para se mover.");
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
        strcpy(poke[i].dex, "As manchas em suas bochechas podem armazenar energia, quando fica irritado pode descarregar imediatamente.");
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
        strcpy(poke[i].dex, "Cria tocas profundas, quando sente perigo se enrola para se proteger dos ataques.");
        poke[i].hp = 50;
        poke[i].atk = 75;
        poke[i].def = 85;
        poke[i].special_atk = 20;;
        poke[i].special_def = 30;
        poke[i].speed = 40;
        i++;
        //12
        strcpy(poke[i].nome, "Nidoran F #030");
        strcpy(poke[i].tipo, "Venenoso");
        strcpy(poke[i].dex, "As femeas da especie conseguem sentir melhor os odores do que os machos. Usam seus bigodes para se localizar com o vento.");
        poke[i].hp = 55;
        poke[i].atk = 47;
        poke[i].def = 52;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 41;
        i++;
        //13
        strcpy(poke[i].nome, "Nidoran M #031");
        strcpy(poke[i].tipo, "Venenoso");
        strcpy(poke[i].dex, "O chifre em sua testa possue um poderoso veneno, este pokemon e sempre muito cauteloso.");
        poke[i].hp = 46;
        poke[i].atk = 57;
        poke[i].def = 40;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 50;
        i++;
        //14
        strcpy(poke[i].nome, "Clefairy #035");
        strcpy(poke[i].tipo, "Fada");
        strcpy(poke[i].dex, "Em noites de lua cheia, clefairy se reune em bando para dancar e tomar banho ao luar fazendo eles flutuarem.");
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
        strcpy(poke[i].dex, "Quando um inimigo e muito forte, vulpix fingi estar ferido para enganar o adversario e fugir.");
        poke[i].hp = 38;
        poke[i].atk = 41;
        poke[i].def = 40;
        poke[i].special_atk = 50;
        poke[i].special_def = 65;
        poke[i].speed = 65;
        i++;
        //16
        strcpy(poke[i].nome, "Jigglypuff #039");
        strcpy(poke[i].tipo, "Normal e Fada");
        strcpy(poke[i].dex, "Quando seus enormes olhos tremem, jigglypuff canta sua misteriosa melodia que faz todos que a escutem, dormir.");
        poke[i].hp = 115;
        poke[i].atk = 45;
        poke[i].def = 20;
        poke[i].special_atk = 45;
        poke[i].special_def = 25;
        poke[i].speed = 20;
        i++;
        //17
        strcpy(poke[i].nome, "Zubat #041");
        strcpy(poke[i].tipo, "Voador e Venenoso");
        strcpy(poke[i].dex, "Pode emitir ondas ultrassonicas de sua boca para verificar oq ha ao seu redor.");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 35;
        poke[i].special_atk = 30;
        poke[i].special_def = 40;
        poke[i].speed = 55;
        i++;
        //18
        strcpy(poke[i].nome, "Oddish #043");
        strcpy(poke[i].tipo, "Planta e Venenoso");
        strcpy(poke[i].dex, "Relatos dizem que podem caminhar 300 metros a noite.");
        poke[i].hp = 45;
        poke[i].atk = 50;
        poke[i].def = 55;
        poke[i].special_atk = 75;
        poke[i].special_def = 65;
        poke[i].speed = 30;
        i++;
        //19
        strcpy(poke[i].nome, "Paras #046");
        strcpy(poke[i].tipo, "Planta e Inseto");
        strcpy(poke[i].dex, "Roem as raises de arvores, porem os cogumelos em suas costas absorvem todos os nutrientes.");
        poke[i].hp = 1;
        poke[i].atk = 12;
        poke[i].def = 13;
        poke[i].special_atk = 10;
        poke[i].special_def = 0;
        poke[i].speed = 0;
        i++;
        //20
        strcpy(poke[i].nome, "Venonat #048");
        strcpy(poke[i].tipo, "Inseto e Venenoso");
        strcpy(poke[i].dex, "O veneno escorre por todo seu corpo, preda insetos menores a noite que sao atraidos pela luz.");
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
        strcpy(poke[i].dex, "Se alimenta de raizes, vive embaixo da terra e raramente aparece acima do solo.");
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
        strcpy(poke[i].dex, "Sofre de muita dor de cabeca, quanto mais intenca for a dor, mais forte sera seus poderes misteriosos.");
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
        strcpy(poke[i].dex, "Vive em tribos, quando se perde fica irritado com a solidao.");
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
        strcpy(poke[i].dex, "Corajoso, confiavel e destemido, enfrenta qualquer inimigo.");
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
        strcpy(poke[i].dex, "O redemoinho em sua barriga mostra tudo que esse pokemon comeu anteriormente.");
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
        strcpy(poke[i].dex, "Utiliza dos seus poderes dormindo, os seus sonhos influenciam seus poderes.");
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
        strcpy(poke[i].dex, "mesmo tendo tamanho de uma criança, seu corpo possue musculos, sendo capaz de arremessar 100 adultos.");
        poke[i].hp = 70;
        poke[i].atk = 80;
        poke[i].def = 50;
        poke[i].special_atk = 35;
        poke[i].special_def = 35;
        poke[i].speed = 35;
        i++;
         //29
        strcpy(poke[i].nome, "Bellsprout #069");
        strcpy(poke[i].tipo, "Planta e Venenoso");
        strcpy(poke[i].dex, "Um Pokemon carnivoro que aprisiona e come insetos. Ele usa seus pes de raiz para absorver a umidade necessaria.");
        poke[i].hp = 50;
        poke[i].atk = 75;
        poke[i].def = 35;
        poke[i].special_atk = 70;
        poke[i].special_def = 30;
        poke[i].speed = 40;
        i++;
         //30
        strcpy(poke[i].nome, "Tentacool #072");
        strcpy(poke[i].tipo, "Agua e Venenoso");
        strcpy(poke[i].dex, "Pode ser encontrado na praia quando as mares estao baixas.");
        poke[i].hp = 40;
        poke[i].atk = 40;
        poke[i].def = 35;
        poke[i].special_atk = 50;
        poke[i].special_def = 100;
        poke[i].speed = 70;
        i++;
         //31
        strcpy(poke[i].nome, "Geodude #074");
        strcpy(poke[i].tipo, "Terrestre e Pedra");
        strcpy(poke[i].dex, "Quando esta dormindo, parece uma pedra comum, mas se tropecar nele, fara ele balançar seus punhos com raiva.");
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
        strcpy(poke[i].dex, "Uma hora apos seu nascimento, sua crina flamenjante cresce, dando-lhe uma imprecionante aparencia.");
        poke[i].hp = 50;
        poke[i].atk = 85;
        poke[i].def = 55;
        poke[i].special_atk = 65;
        poke[i].special_def = 65;
        poke[i].speed = 90;
        i++;
         //33
        strcpy(poke[i].nome, "Slowpoke #079");
        strcpy(poke[i].tipo, "Agua e Psiquico");
        strcpy(poke[i].dex, "Incrivel e lerdo, as vezes burro. Demora um pouco para sentir dor quando e atacado.");
        poke[i].hp = 90;
        poke[i].atk = 65;
        poke[i].def = 65;
        poke[i].special_atk = 40;
        poke[i].special_def = 40;
        poke[i].speed = 15;
        i++;
         //34
        strcpy(poke[i].nome, "Magnemite #081");
        strcpy(poke[i].tipo, "Eletrico e Metal");
        strcpy(poke[i].dex, "Os imas em sua cabeça emitem ondas eletromagneticas, que repelem a gravidade permitindo-lhe voar.");
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
        strcpy(poke[i].tipo, "Venenoso");
        strcpy(poke[i].dex, "Nascido do lodo, esse pokemon e encontrado em lugares poluidos onde aumentam o numero de bacterias em seus corpos.");
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
        strcpy(poke[i].dex, "Protegido por uma dura concha por fora, mas muito macio por dentro.");
        poke[i].hp = 30;
        poke[i].atk = 65;
        poke[i].def = 100;
        poke[i].special_atk = 45;
        poke[i].special_def = 25;
        poke[i].speed = 40;
        i++;
        //40
        strcpy(poke[i].nome, "Gastly #092");
        strcpy(poke[i].tipo, "Fantasma e Venenoso");
        strcpy(poke[i].dex, "Ele envolve suas presas com seu corpo gasoso, enfraquecendo-as atraves de sua pele.");
        poke[i].hp = 30;
        poke[i].atk = 35;
        poke[i].def = 30;
        poke[i].special_atk = 100;
        poke[i].special_def = 35;
        poke[i].speed = 80;
        i++;
        //41
        strcpy(poke[i].nome, "Onix #095");
        strcpy(poke[i].tipo, "Terrestre e Pedra");
        strcpy(poke[i].dex, "Ao ingerir certos minerais, pode alterar a estrutura de seu corpo.");
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
        strcpy(poke[i].dex, "Lembra de cada sonho que devora, mas seus preferidos sao os de criancas, por serem mais saborosos.");
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
        strcpy(poke[i].dex, "Suas pincas nao sao apenas armas poderosas, elas sao usadas para o equilibrio ao andar de lado.");
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
        strcpy(poke[i].dex, "Geralmente encontrado em usinas de energia. Facilmente confundidos com uma Pokeball, eles eletrocutam muitas pessoas.");
        poke[i].hp = 40;
        poke[i].atk = 30;
        poke[i].def = 50;
        poke[i].special_atk = 55;
        poke[i].special_def = 55;
        poke[i].speed = 100;
        i++;
        //45
        strcpy(poke[i].nome, "Exeggcute #102");
        strcpy(poke[i].tipo, "Planta e Psiquico");
        strcpy(poke[i].dex, "Se voce mexer em uma das cabecas do pokemon, as outras cabecas irao rapidamente se juntar e lhe atacar.");
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
        strcpy(poke[i].dex, "Quando a lembranca de sua falecida mae o leva a lagrimas, seus gritos ecoam dentro do crânio que usa em sua cabeça.");
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
        strcpy(poke[i].dex, "No momento em que ele acerta o chute no oponente, Hitmonlee endurece os musculos do pe, maximizando o poder do chute.");
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
        strcpy(poke[i].dex, "Se a saliva entrar em contato com voce e voce não se limpar, uma coceira intensa se iniciara.");
        poke[i].hp = 90;
        poke[i].atk = 55;
        poke[i].def = 75;
        poke[i].special_atk = 60;
        poke[i].special_def = 75;
        poke[i].speed = 30;
        i++;
        //50
        strcpy(poke[i].nome, "Koffing #109");
        strcpy(poke[i].dex, "o gas toxico e mantido de seu corpo fino em forma de balao, podendo causar explosoes.");
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
        strcpy(poke[i].dex, "Rhyhorn reivindica uma area com mais de 9 Km de raio como seu territorio.");
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
        strcpy(poke[i].dex, "Este gentil Pokemon poe ovos nutritivos e os compartilha com outros seres feridos.");
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
        strcpy(poke[i].dex, "Mesmo carregando seu bebe em uma bolsa na barriga, o Pokemon e veloz.");
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
        strcpy(poke[i].dex, "Se atacado por um inimigo enorme, Horsea nada sem esforço rapidamente para um local seguro.");
        strcpy(poke[i].tipo, "Agua");
        poke[i].hp = 30;
        poke[i].atk = 40;
        poke[i].def = 70;
        poke[i].special_atk = 70;
        poke[i].special_def = 25;
        poke[i].speed = 60;
        i++;
        //56
        strcpy(poke[i].nome, "Goldeen #118");
        strcpy(poke[i].dex, "Conhecida como dancarina da agua. Pois suas barbatanas na dorsal, peitoral e cauda ondulam elegantemente na agua.");
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
        strcpy(poke[i].dex, "e encontrado na praia no final do verao em grupos iluminando-se em ritmo constante.");
        strcpy(poke[i].tipo, "Agua");
        poke[i].hp = 30;
        poke[i].atk = 45;
        poke[i].def = 55;
        poke[i].special_atk = 70;
        poke[i].special_def = 55;
        poke[i].speed = 85;
        i++;
        //58
        strcpy(poke[i].nome, "Mr.Mime #122");
        strcpy(poke[i].dex, "E um especialista em pantomima que pode criar paredes invisiveis, mas solidas, usando gestos de mimica.");
        strcpy(poke[i].tipo, "Psiquico e Fada");
        poke[i].hp = 40;
        poke[i].atk = 45;
        poke[i].def = 65;
        poke[i].special_atk = 100;
        poke[i].special_def = 120;
        poke[i].speed = 90;
        i++;
        //59
        strcpy(poke[i].nome, "Scyther #123");
        strcpy(poke[i].dex, "Ele corta a grama com usas foices afiadas, movendo-se veloz demais para ser visto pelo ser humano.");
        strcpy(poke[i].tipo, "Inseto e Voador");
        poke[i].hp = 70;
        poke[i].atk = 110;
        poke[i].def = 80;
        poke[i].special_atk = 55;
        poke[i].special_def = 80;
        poke[i].speed = 105;
        i++;
        //60
        strcpy(poke[i].nome, "Jinx #124");
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
        strcpy(poke[i].dex, "Chegar perto dele deixara seus pelos e cabelo em pe.");
        strcpy(poke[i].tipo, "Eletrico");
        poke[i].hp = 65;
        poke[i].atk = 83;
        poke[i].def = 57;
        poke[i].special_atk = 95;
        poke[i].special_def = 85;
        poke[i].speed = 105;
        i++;
        //62
        strcpy(poke[i].nome, "Magmar #126");
        strcpy(poke[i].dex, "Encontrado em um vulcao. A temperatura deste respirador de fogo e de aproximadamente 2.200 graus Fahrenheit.");
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
        strcpy(poke[i].dex, "Os pinsir julgam uns aos outros de acordo com as pincas. Pincas mais grossas e fortes aumentam a popularidade entre o sexo oposto.");
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
        strcpy(poke[i].dex, "Um Pokemon inutil e pouco poderoso. Pode saltar alto em muito poucas ocasioes, mas nunca mais de dois metros.");
        strcpy(poke[i].tipo, "Agua");
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
        strcpy(poke[i].tipo, "Agua e Gelo");
        poke[i].hp = 130;
        poke[i].atk = 85;
        poke[i].def = 80;
        poke[i].special_atk = 85;
        poke[i].special_def = 95;
        poke[i].speed = 60;
        i++;
        //67
        strcpy(poke[i].nome, "Ditto #132");
        strcpy(poke[i].dex, "Sua transformacao e perfeita. Porem, se rir, não conseguira manter seu disfarce.");
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
        strcpy(poke[i].dex, "O Porygon e um Pokemon artificial. As pessoas fica gratas com o seu potencial de ser util a qualquer ambiente, pois ele não respira.");
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
        strcpy(poke[i].dex, "Este Pokemon esta se tornando um problema, pois alguns Omanytes conseguem escapar apos serem restaurados ou soltos na natureza pelas pessoas.");
        strcpy(poke[i].tipo, "Pedra e Agua");
        poke[i].hp = 35;
        poke[i].atk = 40;
        poke[i].def = 100;
        poke[i].special_atk = 90;
        poke[i].special_def = 55;
        poke[i].speed = 35;
        i++;
        //71
        strcpy(poke[i].nome, "Kabuto #140");
        strcpy(poke[i].dex, "Kabuto muda a cada tres dias, tornando suas conchas cada vez mais duras. A especie esta proxima da extincao.");
        strcpy(poke[i].tipo, "Pedra e Agua");
        poke[i].hp = 30;
        poke[i].atk = 80;
        poke[i].def = 90;
        poke[i].special_atk = 55;
        poke[i].special_def = 45;
        poke[i].speed = 55;
        i++;
        //72
        strcpy(poke[i].nome, "Aerodactyl #142");
        strcpy(poke[i].dex, "Um Pokemon feroz, pre historico.");
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
        strcpy(poke[i].dex, "Ele devora aproximadamente 900 quilos de comida por dia. Nao come somente quando esta dormindo.");
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
        strcpy(poke[i].dex, "Este passaro lendario pode criar nevascas ao congelar a umidade do ar.");
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
        strcpy(poke[i].dex, "Dizem que este passaro lendario vive em nuvens tempestuosas. Ele controla livremente os trovoes.");
        strcpy(poke[i].tipo, "Eletrico e Voador");
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
        strcpy(poke[i].dex, "O Pokemon perde muitas camadas de pele conforme vai crescendo. Durante o processo, ele e protegido por uma cachoeira.");
        strcpy(poke[i].tipo, "Dragao");
        poke[i].hp = 41;
        poke[i].atk = 64;
        poke[i].def = 45;
        poke[i].special_atk = 50;
        poke[i].special_def = 50;
        poke[i].speed = 50;
        i++;
        //78
        strcpy(poke[i].nome, "Mewtwo #150");
        strcpy(poke[i].dex, "Seu DNA e semelhante ao de Mew. No entanto, seu tamanho e disposicao sao bem diferentes.");
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
        strcpy(poke[i].dex, "Tao raro que ainda e dito ser uma miragem por muitos especialistas. Apenas poucas pessoas o viram em todo o mundo.");
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
    int contFavs = 0;
    int option = 1;
    menu();    
    while(treinador.option != 2)
    {
        if(strcmp(treinador.novo_login, treinador.login)==0 && strcmp(treinador.nova_senha, treinador.senha)==0)
        {
            printf("\n_________________________________");
            printf("\n\n>> Lista de Pokemons: ");
            printf("\n_________________________________");
            printf("\n_________________________________");
            atribuirPokemons();
        }
        for(i = 0; i <TAM;i++)
        {
            printf("\n[%i] %s", i+1, poke[i].nome);
        }
        break;
    }
        do
        {
            if(treinador.option != 2)
            {
                printf("\n_________________________________");
                printf("\n________________________________________________");
                printf("\nDigite o numero do Pokemon que deseja pesquisar:\n[indique 0 para sair]\n");
                scanf("%d", &option);
            }
            if(option !=0)
            {
                treinador.favs[contFavs] = option;
                contFavs++;
            }
            
        }while(option != 0);
        printf("\n**************************************");
        printf("\nBoa escolha, Treinador(a) %s!\n", treinador.login);
        printf("**************************************\n");
    
        
    for(i=0; i < contFavs; i++)
    {
        printf("=================================================\n");
        printf("_________________________________");
        printf("\nNome: %s ||\nTipo: %s ||", poke[treinador.favs[i]-1].nome, poke[treinador.favs[i]-1].tipo);
        printf("\nDex: %s ||",poke[treinador.favs[i]-1].dex);
        printf("\n_________________________________________________\n");
        printf(">> HP: %d", poke[treinador.favs[i]-1].hp);
        printf("\n");
        printf(">> ATK: %d", poke[treinador.favs[i]-1].atk);
        printf("\n");
        printf(">> DEF: %d", poke[treinador.favs[i]-1].def);
        printf("\n");
        printf(">> SPEED: %d", poke[treinador.favs[i]-1].speed);
        printf("\n");
        printf(">> S.ATK: %d", poke[treinador.favs[i]-1].special_atk);
        printf("\n");
        printf(">> S.DEF: %d", poke[treinador.favs[i]-1].special_def);
        printf("\n");
        printf("-------------------------------------------------\n");
        
        
    }
   printf(".......................................................................");
   printf("\nObrigado por usar nossa Pokedex, volte sempre Treinador(a) %s!\n", treinador.login);
    return 0;
};