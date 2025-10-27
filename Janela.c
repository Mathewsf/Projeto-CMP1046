#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

void Circulo();

void CnsVeiculo(); 

void DesenharLinhaHorizontal();

void DesenharTela(); 

void FigurasGeometricas();

void gotoxy(int x, int y);

void Hipotenusa();

void LimparTela();

void Losango();

void Prestacao();

void Quadrado();

void Sequencial();

void TelaInicial();


int main() {
    //Traduz pro portugues
    setlocale(LC_ALL,"portuguese");

    //Limpa a tela
    system("cls");

    //Limpa a sujeira das variaveis
    fflush(stdin); 
   
    //chama a fun??o do menu principal
    TelaInicial();

    gotoxy(1, 25);

    return 0;
}

void Hipotenusa()
{	
	double ctt1, ctt2, hipotenusa;
	int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    setlocale(LC_ALL, "Portuguese");
    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(esquerda, 11, largura);
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

    gotoxy(5, 23); printf("Op��o [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 5);
	printf("Digite o valor do primeiro cateto:...[     ]");

    gotoxy(3, 8);
	printf("Digite o valor do segundo cateto:...[     ]");

    gotoxy(3, 16);
	printf("Valor da hipotenusa: [         ]");

    do {
        // limpar apenas o conteudo numerico dentro dos colchetes
	    gotoxy(41, 5); printf("     ");
	    gotoxy(40, 8); printf("     ");
	    gotoxy(25, 16); printf("         "); // limpa so dentro dos colchetes do resultado
	    gotoxy(12, 23); printf("  ");

        gotoxy(41, 5);
	    scanf("%lf", &ctt1);

        gotoxy(40, 8);
	    scanf("%lf", &ctt2);

        hipotenusa = sqrt((ctt1 * ctt1) + (ctt2 * ctt2));

        gotoxy(25, 16);
	    printf("%.2lf", hipotenusa);

        gotoxy(12, 23);
	    scanf("%d", &OpcaoR);
    } while (OpcaoR == 1);
	
	system("cls");
    DesenharTela();
	FigurasGeometricas();
}

void Circulo()
{
    setlocale(LC_ALL, "Portuguese");

    double raio, area, perimetro;
    int OpcaoR, i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    // Desenhar linhas horizontais
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 11, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    // Desenhar linhas verticais
    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    // título
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Círculo");

    // instruções no rodapé
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saída
    gotoxy(3, 7);
    printf("Digite o valor do raio do círculo:...[     ]");

    gotoxy(3, 14);
    printf("Área do círculo:       [         ]");

    gotoxy(3, 16);
    printf("Perímetro do círculo:  [         ]");

    do {
        // limpar apenas os campos numéricos dentro dos colchetes
        gotoxy(42, 7);  printf("     ");       // campo do raio
        gotoxy(28, 14); printf("         ");   // campo da área
        gotoxy(28, 16); printf("         ");   // campo do perímetro
        gotoxy(12, 23); printf("  ");          // campo da opção

        // entrada do raio
        gotoxy(42, 7);
        scanf("%lf", &raio);

        // cálculos
        area = 3.1416 * (raio * raio);
        perimetro = 2 * 3.1416 * raio;

        // resultados
        gotoxy(28, 14);
        printf("%.2lf", area);

        gotoxy(28, 16);
        printf("%.2lf", perimetro);

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    FigurasGeometricas();
}

void Quadrado()
{
    setlocale(LC_ALL, "Portuguese");

    double ld, a, p, d;
    int OpcaoR, i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    // Desenhar linhas horizontais
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 11, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    // Desenhar linhas verticais
    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    // título
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Quadrado");

    // instruções no rodapé
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saída
    gotoxy(3, 7);
    printf("Digite o valor do lado do quadrado:...[     ]");

    gotoxy(3, 13);
    printf("Área do quadrado:......[         ]");

    gotoxy(3, 15);
    printf("Perímetro do quadrado:.[         ]");

    gotoxy(3, 17);
    printf("Diagonal do quadrado:..[         ]");

    do {
        // limpar apenas campos
        gotoxy(42, 7);  printf("     ");       // campo do lado
        gotoxy(28, 13); printf("         ");   // campo da área
        gotoxy(28, 15); printf("         ");   // campo do perímetro
        gotoxy(28, 17); printf("         ");   // campo da diagonal
        gotoxy(12, 23); printf("  ");          // campo da opção

        // entrada do lado
        gotoxy(42, 7);
        scanf("%lf", &ld);

        // cálculos
        a = ld * ld;
        p = ld * 4;
        d = ld * sqrt(2);

        // resultados
        gotoxy(28, 13);
        printf("%.2lf", a);

        gotoxy(28, 15);
        printf("%.2lf", p);

        gotoxy(28, 17);
        printf("%.2lf", d);

        // leitura da opção (1 para repetir, sem mensagem adicional)
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    FigurasGeometricas();
}

void Losango()
{
    setlocale(LC_ALL, "Portuguese");

    double dmaior, dmenor, a;
    int OpcaoR, i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    // Desenhar linhas horizontais
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 11, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    // Desenhar linhas verticais
    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    // título
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Losango");

    // instruções no rodapé
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saída
    gotoxy(3, 5);
    printf("Digite o valor da diagonal maior:...[     ]");

    gotoxy(3, 8);
    printf("Digite o valor da diagonal menor:...[     ]");

    gotoxy(3, 15);
    printf("Área do losango: [         ]");

    do {
        // limpar apenas os 
        gotoxy(40, 5);  printf("     ");   // campo da diagonal maior
        gotoxy(40, 8);  printf("     ");   // campo da diagonal menor
        gotoxy(25, 15); printf("         "); // campo da área
        gotoxy(12, 23); printf("  ");      // campo da opção

        // entrada das diagonais
        gotoxy(40, 5);
        scanf("%lf", &dmaior);

        gotoxy(40, 8);
        scanf("%lf", &dmenor);

        // cálculo da área
        a = (dmaior * dmenor) / 2;

        // resultado
        gotoxy(25, 15);
        printf("%.2lf", a);

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    FigurasGeometricas();
}

void CnsVeiculo()
{
    int DH, VelM, a , b , c, opcao, i;

    gotoxy(2,9);
    for (i = 0; i < 88; i++)
        printf("=");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    do
    {
    gotoxy(38, 5);
    printf("   ");
    
    gotoxy(41, 7);
    printf("   ");
    
    gotoxy(40,11);
    printf("    ");

    gotoxy(40,12);
    printf("    ");

    gotoxy(40,13);
    printf("    ");

    gotoxy(40,14);
    printf("    ");

    gotoxy(40,15);
    printf("    ");

    gotoxy(40,16);
    printf("    ");

    gotoxy(12,23);
    printf("  ");
    
    gotoxy(3,5);
    printf("Digite a dura��o da viagem...........[   ]");
    gotoxy(41,5);
    scanf("%d", &DH);
    
    gotoxy(3,7);
    printf("Digite a velocidade m�dia............[   ]");
    gotoxy(41,7);
    scanf("%d", &VelM);

    a = (DH*VelM)/8;
    gotoxy(3,11);
    printf("Pre�o gasolina carro A..: 	     [R$ %d  ]\n", a);
    a = a*1.04;
    gotoxy(3,12);
    printf("Pre�o etanol carro A....: 	     [R$ %d  ]\n", a);
    
    b = (DH*VelM)/10;
    gotoxy(3,13);
    printf("Pre�o gasolina carro b..: 	     [R$ %d  ]\n", b);
    b = b*1.04;
    gotoxy(3,14);
    printf("Pre�o etanol carro b....: 	     [R$ %d  ]\n", b);
    
    c = (DH*VelM)/12;
    gotoxy(3,15);
    printf("Pre�o gasolina carro c..: 	     [R$ %d  ]\n", c);
    c = c*1.04;
    gotoxy(3,16);
    printf("Pre�o etanol carro c....:         [R$ %d  ]\n", c);
    
    
    gotoxy(12, 23);
    scanf("%d", &opcao);
}   while (opcao == 1);

    system("cls");
    DesenharTela();
    Sequencial();
	
}

// fun��o apenas pra usar gotoxy
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//fun��o de desenhar a janela padr�o
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

    gotoxy(5, 23); printf("Op��o [  ]");
}

//fun��o exercicio sequencial
void Prestacao() {
    int DiasAtrasados, Meses;
    float ValorPrestacao, ValorAtualizado, Juros = 0;
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    setlocale(LC_ALL,"portuguese");

    setlocale(LC_ALL, "Portuguese");
    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(esquerda, 11, largura);
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

    gotoxy(5, 23); printf("Op��o [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 5);
    printf("Digite o valor da presta��o.............[R$             ]");

    gotoxy(3, 7);
    printf("Digite a quantidade de dias em atraso...[      ]");

    gotoxy(3, 16);
    printf("O valor da presta��o atualizado ........[R$                 ]");
    
do {

    gotoxy(47,5);
    printf("          ");

    gotoxy(45,7);
    printf("     ");

    gotoxy(47,16);
    printf("                ");

    gotoxy(47,16);
    printf("               ");

    gotoxy(12,23);
    printf("  ");
    
    
    gotoxy(47, 5);
    scanf("%f", &ValorPrestacao);
    fflush(stdin);
    // ou usar isso: while (getchar() != '\n');
    
    gotoxy(45, 7);
    scanf("%d", &DiasAtrasados);

    if  (DiasAtrasados != 0)
        {
            ValorAtualizado = (1.05 * ValorPrestacao) + (ValorPrestacao * 0.09 * (DiasAtrasados / 30.0));
            gotoxy(47, 16);
            printf("%.2f", ValorAtualizado);
            
        }
    else
        {
            gotoxy(47, 16);
            printf("%.2f", ValorPrestacao);
        }

    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Sequencial();
}

//fun��o da primeira tela quando come?a o programa
void TelaInicial() {
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int i, Opcao, X;

    system("cls");
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

    gotoxy(5, 23); printf("Op��o [  ]");

    gotoxy(5, 8); printf("1 - Estrutura Sequencial");

    gotoxy(5, 10); printf("2 - Estrutura Condicional");

    gotoxy(5, 12); printf("3 - Estrutura de Repeti��o");

    gotoxy(5, 14); printf("4 - Vari�veis compostas homog�neas");

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
    case 3:
    case 4:
        gotoxy(12, 21); printf("Ainda em desenvolvimento... (Enter para continuar o programa)");
        system("pause > null");
        goto Ler;
    default:
        break;
    }
}

// fun��o menu sequencial
void Sequencial() {
    int i, Opcao, X;
    gotoxy(5, 8); printf("1 - Figuras Geom�tricas");

    gotoxy(5, 10); printf("2 - Consumo de Ve�culo");

    gotoxy(5, 12); printf("3 - Atualizar Presta��o de Ve�culo");

    gotoxy(5, 14); printf("4 - Retornar ao Menu Principal");

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
        FigurasGeometricas();
        break;
    case 2:
        system("cls");
        DesenharTela();
        CnsVeiculo();
        break;
    case 3:
        system("cls");
        DesenharTela();
        Prestacao();
        break;
    case 4:
        system("cls");
        DesenharTela();
        TelaInicial();
        break;
    }
}

void FigurasGeometricas() 
{
    int i, Opcao, X;
    gotoxy(5, 7); printf("1 - Calcular Hipotenusa");

    gotoxy(5, 9); printf("2 - Calcular Per�metro e �rea de C�rculos");

    gotoxy(5, 11); printf("3 - Calcular Per�metro, �rea e Diagonal de Quadrados");

    gotoxy(5, 13); printf("4 - Calcular �rea de Losangos");

    gotoxy(5, 15); printf("5 - Retornar ao Menu Anterior");

    gotoxy(5, 17); printf("6 - Retornar ao Menu Principal");

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
        Hipotenusa();
        break;
    case 2:
        system("cls");
        DesenharTela();
        Circulo();
        break;
    case 3:
        system("cls");
        DesenharTela();
        Quadrado();
        break;
    case 4:
        system("cls");
        DesenharTela();
        Losango();
        break;

    case 5:
        system("cls");
        DesenharTela();
        Sequencial();
        break;
        
    case 6:
        TelaInicial();
        break;
    }
}

    


