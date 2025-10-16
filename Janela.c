#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

void gotoxy(int x, int y);

void DesenharLinhaHorizontal ();

void DesenharTela();

void LimparTela();

void TelaInicial();

void Sequencial();

void Prestacao();

int main() {
    //Traduz pro portugues
    setlocale(LC_ALL,"portuguese");

    //Limpa a tela
    system("cls");

    //Limpa a sujeira das variaveis
    fflush(stdin); 
   
    //chama a função do menu principal
    TelaInicial();

    gotoxy(1, 25);

    return 0;
}

// função apenas pra usar gotoxy
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//função de desenhar a janela padrão
void DesenharLinhaHorizontal(int x, int y, int largura) {
    
    int i;
    
    gotoxy(x, y);
    for (i = 0; i < largura; i++)
        printf("=");

}

void DesenharTela() {
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int i;

    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    //Desenha as linhas na vertical
    for (i = vertical; i < altura; i++)
        {
            gotoxy(esquerda, i);
            printf("=");
            gotoxy(largura, i); 
            printf("=");
            
        }

    gotoxy(35, 2); printf("Projeto CMP1046");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");
}

void LimparTela () {
    int Lin;

    gotoxy(33, 10);
    printf("                     ");

    for (Lin = 11; Lin <= 14; Lin++)
        {
            gotoxy(32, Lin);
            printf("   ");
        }

    for (Lin = 17; Lin <= 20; Lin++)
        {
            gotoxy(33, Lin);
            printf("    ");
        }

    gotoxy(12,24);
    printf("  ");
}

//função exercicio sequencial
void Prestacao() {
    int DiasAtrasados, Meses;
    float ValorPrestacao, ValorAtualizado, Juros = 0;
    char OpcaoR;

    setlocale(LC_ALL,"portuguese");
    
do {

    gotoxy(47,5);
    printf("          ");

    gotoxy(45,6);
    printf("     ");

    gotoxy(47,8);
    printf("                ");

    gotoxy(12,23);
    printf("  ");
    
    gotoxy(3, 5);
    printf("Digite o valor da prestação.............[R$             ]");
    gotoxy(47, 5);
    scanf("%f", &ValorPrestacao);
    fflush(stdin);
    // ou usar isso: while (getchar() != '\n');
    gotoxy(3, 6);
    printf("Digite a quantidade de dias em atraso...[      ]");
    gotoxy(45, 6);
    scanf("%d", &DiasAtrasados);

    if  (DiasAtrasados != 0)
        {
            ValorAtualizado = (1.05 * ValorPrestacao) + (ValorPrestacao * 0.09 * (DiasAtrasados / 30.0));
            gotoxy(3, 8);
            printf("O valor da prestação atualizado é.......[R$ %.2f             ]", ValorAtualizado);
        }
    else
        {
            gotoxy(3, 8);
            printf("O valor da prestação atualizado é.......[R$ %.2f             ]", ValorPrestacao);
        }
    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);
}

//função da primeira tela quando começa o programa
void TelaInicial() {
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int i, Opcao, X;

    
    DesenharLinhaHorizontal(esquerda, 2, largura);
    DesenharLinhaHorizontal(esquerda, 4, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    //Desenha as linhas na vertical
    for (i = vertical; i < altura; i++)
        {
            gotoxy(esquerda, i);
            printf("=");
            gotoxy(largura, i); 
            printf("=");
            
        }
    
    gotoxy(28, 1); printf("Alunos: Mathew, Olinto, Bruno");

    gotoxy(35, 3); printf("Projeto CMP1046");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(5, 8); printf("1 - Estrutura Sequencial");

    gotoxy(5, 10); printf("2 - Estrutura Condicional");

    gotoxy(5, 12); printf("3 - Estrutura de Repetição");

    gotoxy(5, 14); printf("4 - Variáveis compostas homogêneas");

    gotoxy(5, 16); printf("5 - Encerrar");

Ler:
    gotoxy(12,23);
    printf("  ");
    for (X = 12; X <= 80; X++)
        {
            gotoxy(X, 21);
            printf("   ");
        }
    gotoxy(12, 23);
    scanf("%d", &Opcao);

    switch (Opcao)
    {
    case 1:
        system("cls");
        DesenharTela();
        Sequencial();
        break;
    case 2:
        gotoxy(12, 21); printf("Ainda em desenvolvimento... (Enter para continuar o programa)");
        system("pause > null");
        goto Ler;
    case 3:
        gotoxy(12, 21); printf("Ainda em desenvolvimento... (Enter para continuar o programa)");
        system("pause > null");
        goto Ler;
    case 4:
        gotoxy(12, 21); printf("Ainda em desenvolvimento... (Enter para continuar o programa)");
        system("pause > null");
        goto Ler;
    default:
        break;
    }
}

// função menu sequencial
void Sequencial() {
    gotoxy(7, 8); printf("OI");
}