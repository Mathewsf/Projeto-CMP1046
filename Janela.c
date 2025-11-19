#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

void Circulo();

void CnsVeiculo(); 

void Condicional();

void Calculadora();

void CapitalGoias();

void CalcMediaAluno();

void ConversorGraus();

void DeterminarSalaProva();

void DesenharLinhaHorizontal(int x, int y, int largura);

void DesenharTela(); 

void Emprestimo();

void Fetuccine();

void FigurasGeometricas();

void gotoxy(int x, int y);

void Hipotenusa();

void LimparTela();

void Losango();

void OrdemCrescente();

void Prestacao();

void PesoIdeal();

void Quadrado();

void RaizQuadrada();

void Repeticao();

void Sequencial();

void TamanhoNome();

void TelaInicial();

void Vetores();


int main() {
    //Traduz pro portugues
    setlocale(LC_ALL,"portuguese");

    //Limpa a tela
    system("cls");

    //acentos passam a aparecer corretamente
    system("chcp 65001 > nul");

    //Limpa a sujeira das variaveis
    fflush(stdin); 
   
    //chama a função do menu principal
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

    gotoxy(5, 23); printf("Opção [  ]");

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

    // tÃ­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Círculo");

    // instruÃ§Ãµes no rodapÃ©
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saÃ­da
    gotoxy(3, 7);
    printf("Digite o valor do raio do círculo:...[     ]");

    gotoxy(3, 14);
    printf("Área do círculo:       [         ]");

    gotoxy(3, 16);
    printf("Perímetro do círculo:  [         ]");

    do {
        // limpar apenas os campos numÃ©ricos dentro dos colchetes
        gotoxy(42, 7);  printf("     ");       // campo do raio
        gotoxy(28, 14); printf("         ");   // campo da Ã¡rea
        gotoxy(28, 16); printf("         ");   // campo do Perímetro
        gotoxy(12, 23); printf("  ");          // campo da opÃ§Ã£o

        // entrada do raio
        gotoxy(42, 7);
        scanf("%lf", &raio);

        // Cálculos
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

    // tÃ­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Quadrado");

    // instruÃ§Ãµes no rodapÃ©
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saÃ­da
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
        gotoxy(28, 13); printf("         ");   // campo da Ã¡rea
        gotoxy(28, 15); printf("         ");   // campo do Perímetro
        gotoxy(28, 17); printf("         ");   // campo da diagonal
        gotoxy(12, 23); printf("  ");          // campo da opÃ§Ã£o

        // entrada do lado
        gotoxy(42, 7);
        scanf("%lf", &ld);

        // Cálculos
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

    // tÃ­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Losango");

    // instruÃ§Ãµes no rodapÃ©
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // mensagens fixas de entrada e saÃ­da
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
        gotoxy(25, 15); printf("         "); // campo da Área
        gotoxy(12, 23); printf("  ");      // campo da opção

        // entrada das diagonais
        gotoxy(40, 5);
        scanf("%lf", &dmaior);

        gotoxy(40, 8);
        scanf("%lf", &dmenor);

        // Cálculo da Área
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
    float DH, VelM, a , b , c;
    int opcao;
    int i;

	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(esquerda, 10, largura);
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

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3,5);
    printf("Digite a duração da viagem...........[   ]");

    gotoxy(3,7);
    printf("Digite a velocidade média............[   ]");

    gotoxy(3,11);
    printf("Preço gasolina carro A..: 	     [R$         ]");

    gotoxy(3,12);
    printf("Preço etanol carro A....: 	     [R$         ]");

     gotoxy(3,13);
    printf("Preço gasolina carro b..: 	     [R$         ]");

    gotoxy(3,14);
    printf("Preço etanol carro b....: 	     [R$         ]");

     gotoxy(3,15);
    printf("Preço gasolina carro c..: 	     [R$         ]");

    gotoxy(3,16);
    printf("Preço etanol carro c....:         [R$         ]");

    do
    {
    gotoxy(41, 5);
    printf("   ");
    
    gotoxy(41, 7);
    printf("   ");
    
    gotoxy(40,11);
    printf("        ");

    gotoxy(40,12);
    printf("        ");

    gotoxy(40,13);
    printf("        ");

    gotoxy(40,14);
    printf("        ");

    gotoxy(40,15);
    printf("        ");

    gotoxy(40,16);
    printf("        ");

    gotoxy(12,23);
    printf("  ");
    
    gotoxy(41,5);
    scanf("%f", &DH);
    
    gotoxy(41,7);
    scanf("%f", &VelM);

    a = (DH*VelM)/8;
    gotoxy(41,11);
    printf("%.2f", a);

    a = a*1.04;

    gotoxy(41,12);
    printf("%.2f", a);
    
    b = (DH*VelM)/10;

    gotoxy(41,13);
    printf("%.2f", b);
   
    b = b*1.04;

    gotoxy(41,14);
    printf("%.2f", b);
    
    c = (DH*VelM)/12;

    gotoxy(41,15);
    printf("%.2f", c);
   
    c = c*1.04;

    gotoxy(41,16);
    printf("%.2f", c);
    
    gotoxy(12, 23);
    scanf("%d", &opcao);
}   while (opcao == 1);

    system("cls");
    DesenharTela();
    Sequencial();
	
}

// função apenas pra usar gotoxy
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//função de desenhar a janela padrï¿½o
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

//função exercicio sequencial
void Prestacao() {
    int DiasAtrasados, Meses;
    float ValorPrestacao, ValorAtualizado, Juros = 0;
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    
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

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 5);
    printf("Digite o valor da prestação.............[R$             ]");

    gotoxy(3, 7);
    printf("Digite a quantidade de dias em atraso...[      ]");

    gotoxy(3, 16);
    printf("O valor da prestação atualizado ........[R$                 ]");
    
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

//função da primeira tela quando come?a o programa
void TelaInicial() {
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int i, Opcao, X;

    while (1) {

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
        system("cls");
        DesenharTela();
        Condicional();
        break;
    case 3:
        system("cls");
        DesenharTela();
        Repeticao();
        break;
    case 4:
        system("cls");
		DesenharTela();
        Vetores();
        break;
    default:
        return;
    }
}
}

// função menu sequencial
void Sequencial() {
    int i, Opcao, X;
    gotoxy(5, 8); printf("1 - Figuras Geométricas");

    gotoxy(5, 10); printf("2 - Consumo de Veículo");

    gotoxy(5, 12); printf("3 - Atualizar Prestação de Veículo");

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
        CnsVeiculo();
        break;
    case 3:
        system("cls");
        Prestacao();
        break;
    case 4:
        system("cls");
        return;
        break;
    }
}

void FigurasGeometricas() 
{
    int i, Opcao, X;
    gotoxy(5, 7); printf("1 - Calcular Hipotenusa");

    gotoxy(5, 9); printf("2 - Calcular Perímetro e Área de Círculos");

    gotoxy(5, 11); printf("3 - Calcular Perímetro, Área e Diagonal de Quadrados");

    gotoxy(5, 13); printf("4 - Calcular Área de Losangos");

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

void Condicional() {
    int i, Opcao, X;
    gotoxy(5, 7); printf("1 - Ordenar 3 números inteiros");

    gotoxy(5, 8); printf("2 - Receber nome da capital de Goiás");

    gotoxy(5, 9); printf("3 - Calculadora");

    gotoxy(5, 10); printf("4 - Calcular quadrado e raiz quadrada");

    gotoxy(5, 11); printf("5 - Margem de consignação");

    gotoxy(5, 12); printf("6 - Média final e frequências");

    gotoxy(5, 13); printf("7 - Alunos pelo nome");

    gotoxy(5, 14); printf("8 - Peso ideal");

    gotoxy(5, 15); printf("9 - Retornar menu principal");

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
        OrdemCrescente();
        break;
    case 2:
        system("cls");
        CapitalGoias();
        break;
    case 3:
        system("cls");
        Calculadora();
        break;
    case 4:
        system("cls");
        RaizQuadrada();
        break;
    case 5:
        system("cls");
        Emprestimo();
        break;
    case 6:
        system("cls");
        CalcMediaAluno();
        break;
    case 7:
        system("cls");
        DeterminarSalaProva();
        break;
    case 8:
    	system("cls");
        PesoIdeal();
        break;
    case 9:
        system("cls");
        return;
        break;
    }
}

void Calculadora() {
    int OpcaoR, i, Op, X;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    float Num1, Num2, total;
    
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

    gotoxy(35, 2); printf("Projeto CMP1046 - Calculadora");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 8);
    printf("Digite o número da operação que deseja fazer:...[ ]");

    gotoxy(17, 10);
    printf("1 - Adição");

    gotoxy(17, 12);
    printf("2 - Subtração");

    gotoxy(32, 10);
    printf("3 - Multiplicação");

    gotoxy(32, 12);
    printf("4 - Divisão");

    gotoxy(3, 14);
    printf("Resultado:     [          ]  [          ] = [                ]");
    
do {

    gotoxy(52,8);
    printf(" ");

    gotoxy(19,14);
    printf("          ");

    gotoxy(34,14);
    printf("         ");

    gotoxy(48,14);
    printf("                ");

    gotoxy(30, 14);
    printf("  ");

    gotoxy(12,23);
    printf("  ");

    gotoxy(52, 8); 
    scanf("%d", &Op);

    fflush(stdin);

    switch(Op)
    {
        case 1:
            gotoxy(29, 14);
            printf("] + [");

            gotoxy(19, 14);
            scanf("%f", &Num1);

            fflush(stdin);

            gotoxy(34, 14);
            scanf("%f", &Num2);

            fflush(stdin);
            
            total = Num1 + Num2;

            gotoxy(48,14);
            printf("%.2f", total);
            break;
        case 2:
            gotoxy(29, 14);
            printf("] - [");

            gotoxy(19, 14);
            scanf("%f", &Num1);

            fflush(stdin);

            gotoxy(34, 14);
            scanf("%f", &Num2);

            total = Num1 - Num2;

            gotoxy(48,14);
            printf("%.2f", total);
            break;
        case 3:
            gotoxy(29, 14);
            printf("] x [");

            gotoxy(19, 14);
            scanf("%f", &Num1);

            fflush(stdin);

            gotoxy(34, 14);
            scanf("%f", &Num2);

            total = Num1 * Num2;

            gotoxy(48,14);
            printf("%.2f", total);
            break;
        case 4:
            gotoxy(29, 14);
            printf("] / [");

            gotoxy(19, 14);
            scanf("%f", &Num1);

            fflush(stdin);

            gotoxy(34, 14);
            scanf("%f", &Num2);

            while (Num2 == 0)
            {
                gotoxy(12,21);
                printf("Impossível dividir por 0");
                system("pause > null");

                for (X = 12; X <= 80; X++)
                    {
                        gotoxy(X, 21);
                        printf("   ");
                    }

                gotoxy(34,14);
                printf("         ");

                gotoxy(34, 14);
                scanf("%f", &Num2);
            }

            total = Num1 / Num2;

            gotoxy(48,14);
            printf("%.2f", total);
            break;
    }

    fflush(stdin);
    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Condicional();

}

void RaizQuadrada() {
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int Quadrado, X;
    float Raiz, Num;
    
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

    gotoxy(25, 2); printf("Projeto CMP1046 - Quadrado e Raiz Quadrada");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 8);
    printf("Digite um número inteiro:...[             ]");
    
    gotoxy(3,10);
    printf("Quadrado do número:.........[             ]");

    gotoxy(3,12);
    printf("Raiz quadrada do número:....[             ]");

    gotoxy(3,14);
    printf("É quadrado perfeito?........[             ]");

do {
    gotoxy(32,8);
    printf("             ");

    gotoxy(32,10);
    printf("             ");

    gotoxy(32,12);
    printf("             ");

    gotoxy(32,14);
    printf("             ");

    gotoxy(12,23);
    printf("  ");

    gotoxy(32,8);
    scanf("%f", &Num);

    fflush(stdin);
    
    while (Num != (int)Num)
    {
    	gotoxy(12, 21);
    	printf("Digite apenas número inteiro");
    	system("pause > null");
    	for (X = 12; X <= 80; X++)
        {
            gotoxy(X, 21);
            printf("   ");
        }
        gotoxy(32,8);
    	printf("             ");
    	gotoxy(32,8);
    	scanf("%f", &Num);
	}

    Quadrado = Num * Num;

    gotoxy(32,10);
    printf("%d", Quadrado);

    Raiz = sqrt(Num);

    gotoxy(32,12);
    printf("%.2f", Raiz);

    if (Raiz == (int)Raiz)
    {
        gotoxy(33,14);
        printf("Sim");
    }
    else
    {
        gotoxy(33,14);
        printf("Não");
    }

    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Condicional();
}

void Emprestimo() {
    int OpcaoR, i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    float salario, emprestimo, parcelas, valorParcela, limite;

    // Desenho padrï¿½o
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    gotoxy(25, 2);
    printf("Projeto CMP1046 - Empréstimo Consignado");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    // --- Campos de texto fixos ---
    gotoxy(3, 8);
    printf("Valor do salário mensal:...........[             ]");

    gotoxy(3, 10);
    printf("Valor do empréstimo pretendido:....[             ]");

    gotoxy(3, 12);
    printf("Quantidade de parcelas desejadas:..[             ]");

    gotoxy(3, 14);
    printf("Valor de cada parcela:.............[             ]");

    gotoxy(3, 16);
    printf("Empréstimo pode ser concedido?.....[             ]");

    // --- Loop principal ---
do {
        // Limpa os campos antes de ler novamente
        gotoxy(39,8);  printf("             ");
        gotoxy(39,10); printf("             ");
        gotoxy(39,12); printf("             ");
        gotoxy(39,14); printf("             ");
        gotoxy(39,16); printf("             ");
        gotoxy(12,23); printf("  ");

        // Leitura dos dados
        gotoxy(39,8);
        scanf("%f", &salario);

        gotoxy(39,10);
        scanf("%f", &emprestimo);

        gotoxy(39,12);
        scanf("%f", &parcelas);

        // Cálculos
        valorParcela = emprestimo / parcelas;
        limite = salario * 0.3;

        // Exibição do valor da parcela
        gotoxy(39,14);
        printf("%.2f", valorParcela);

        // Verificação
        if (valorParcela <= limite)
        {
            gotoxy(39,16);
            printf("Sim");
        }
        else
        {
            gotoxy(39,16);
            printf("Não");
        }

        // Repetição
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Condicional();
}
    
void CalcMediaAluno()
{
    char nome[50];
    float n1, n2, n3, n4;
    int aulas, faltas;
    float media1, media2, mediaFinal, freq;
    int opcao;

    int i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 13, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    gotoxy(25, 2);
    printf("Projeto CMP1046 - Calculo Media Aluno");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");
    gotoxy(5, 23);
    printf("Opção [  ]");
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Sair");

    gotoxy(3, 5);
    printf("Digite o nome do aluno...............[                                         ]");
    gotoxy(3, 7);
    printf("Digite a nota 1......................[   ]");
    gotoxy(3, 8);
    printf("Digite a nota 2......................[   ]");
    gotoxy(3, 9);
    printf("Digite a nota 3......................[   ]");
    gotoxy(3, 10);
    printf("Digite a nota 4......................[   ]");
    gotoxy(3, 11);
    printf("Digite o número de aulas.............[   ]");
    gotoxy(3, 12);
    printf("Digite o número de faltas............[   ]");
    gotoxy(3, 15);
    printf("Média final..........................[      ]", mediaFinal);
    gotoxy(3, 16);
	printf("Frequência...........................[      ]", freq);
	gotoxy(3, 18);
	printf("Situação.............................[             ]");
	
    do
    {
        gotoxy(41, 5);  printf("                         ");
        gotoxy(41, 7);  printf("   ");
        gotoxy(41, 8);  printf("   ");
        gotoxy(41, 9);  printf("   ");
        gotoxy(41, 10); printf("   ");
        gotoxy(41, 11); printf("   ");
        gotoxy(41, 12); printf("   ");
        gotoxy(41, 15); printf("      ");
        gotoxy(41, 16); printf("      ");
        gotoxy(41, 18); printf("             ");
        gotoxy(12, 23); printf("  ");

        gotoxy(41, 5);
        fflush(stdin);
        gets(nome);
        gotoxy(41, 7);
        scanf("%f", &n1);
        gotoxy(41, 8);
        scanf("%f", &n2);
        gotoxy(41, 9);
        scanf("%f", &n3);
        gotoxy(41, 10);
        scanf("%f", &n4);
        gotoxy(41, 11);
        scanf("%d", &aulas);
        gotoxy(41, 12);
        scanf("%d", &faltas);

        media1 = (n1 + n2) / 2.0;
        media2 = (n3 + n4) / 2.0;
        mediaFinal = (media1 * 0.4) + (media2 * 0.6);
        freq = ((aulas - faltas) * 100.0) / aulas;

        gotoxy(41, 15);
        printf("%.2f");
        gotoxy(41, 16);
        printf("%.2f");

        gotoxy(41, 18);
        if (mediaFinal >= 7.5 && freq >= 75)
            printf("APROVADO");
        else
            printf("REPROVADO");

        gotoxy(12, 23);
        scanf("%d", &opcao);

    } while (opcao == 1);

    system("cls");
    DesenharTela();
    Condicional();
}


void DeterminarSalaProva() 
{
	char nome[50];
    char primeiraLetra;
    char sala[10];
    int opcao;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int i;
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 9, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Determinar Sala de Prova");

    gotoxy(3, 21);
    printf("Mens [                                                                               ]");
    gotoxy(3, 23);
    printf("Opção [ ]");
    gotoxy(12, 23);
    printf("1 - Repetir     2 - Sair");

    gotoxy(3, 5);
    printf("Digite o nome do aluno...............[                        ]");

    gotoxy(3, 11);
    printf("Primeira letra do nome.............: [ ]");
    gotoxy(3, 12);
    printf("Sala de Prova......................: [                   ]");

    do
    {
    	
    gotoxy(41, 5);
    printf("                        ");

    gotoxy(41, 11);
    printf(" ");
    
	gotoxy(41, 12);
    printf("                   ");

    gotoxy(10, 21);
    printf("                                                                             ");

    gotoxy(10, 23);
    printf(" ");

    gotoxy(41, 5);
	fflush(stdin);
    gets(nome);

    if (strlen(nome) > 0)
    {
        primeiraLetra = toupper(nome[0]);

        if (primeiraLetra >= 'A' && primeiraLetra <= 'K')
        {
            strcpy(sala, "SALA 110");
        }
        else if (primeiraLetra >= 'L' && primeiraLetra <= 'N')
        {
            strcpy(sala, "SALA 120");
        }
        else if (primeiraLetra >= 'O' && primeiraLetra <= 'Z')
        {
            strcpy(sala, "SALA 130");
        }
        else
        {
            strcpy(sala, "N/A - Inválida");
        }
    }
    else
    {
         primeiraLetra = ' ';
         strcpy(sala, "N/A - Vazio");
    }

    gotoxy(41, 11);
    printf("%c", primeiraLetra);
    gotoxy(41, 12);
    printf("%s", sala);

    gotoxy(10, 23);
    scanf("%d", &opcao);

} while (opcao == 1);

system("cls");
DesenharTela();
Condicional();
}

void OrdemCrescente() 
{
    int a, b, c, aux;
    int OpcaoR, i;
    int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;

    // ==== DESENHA A ESTRUTURA PADRÃO DA TELA ====
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 14, largura); 
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);
        printf("=");
        gotoxy(largura, i);
        printf("=");
    }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Ordem Crescente");

    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(3, 6);
    printf("Digite o primeiro número: ......[    ]");
    gotoxy(3, 8);
    printf("Digite o segundo número: .......[    ]");
    gotoxy(3, 10);
    printf("Digite o terceiro número: ......[    ]");
    gotoxy(3, 16);
    printf("Ordem crescente: [     ,     ,      ]");

    do 
    {
        gotoxy(36, 6);  printf("    ");
        gotoxy(36, 8);  printf("    ");
        gotoxy(36, 10); printf("    ");
        gotoxy(21, 16); printf("     ,     ,      "); // limpa antes de imprimir o novo resultado
        gotoxy(12, 23); printf("  ");

        gotoxy(36, 6);
        scanf("%d", &a);

        gotoxy(36, 8);
        scanf("%d", &b);

        gotoxy(36, 10);
        scanf("%d", &c);

        if (a > b) { aux = a; a = b; b = aux; }
        if (a > c) { aux = a; a = c; c = aux; }
        if (b > c) { aux = b; b = c; c = aux; }

        // ?? CORREÇÃO AQUI ??
        gotoxy(21, 16);
        printf("     ,     ,      "); // limpa o campo do resultado
        gotoxy(21, 16);
        printf("%d , %d , %d", a, b, c); // imprime no mesmo ponto

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Condicional();
}

void CapitalGoias() 
{
    char capital[50];
    int OpcaoR, i;
    int esquerda = 1;   // margem esquerda da janela
    int vertical = 1;   // início vertical
    int largura = 90;   // largura total da tela
    int altura = 25;    // altura total da tela

    // ==== DESENHA A ESTRUTURA PADRÃO DA TELA ====
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    DesenharLinhaHorizontal(esquerda, 11, largura); // linha que separa
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    // ==== DESENHA AS LINHAS VERTICAIS ====
    for (i = vertical; i < altura; i++)
    {
        gotoxy(esquerda, i);   // borda esquerda
        printf("=");
        gotoxy(largura, i);    // borda direita
        printf("=");
    }

    // ==== TÍTULO DO EXERCÍCIO ====
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Capital de Goiás");

    // ==== INSTRUÇÕES NO RODAPÉ ====
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Voltar ao menu"); // instrução de repetição e retorno

    // ==== MENSAGEM PADRÃO ====
    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    // ==== CAMPO DE OPÇÃO ====
    gotoxy(5, 23);
    printf("Opção [  ]");

    // ==== CAMPOS DE ENTRADA E SAÍDA ====
    gotoxy(3, 7);
    printf("Digite a Capital de Goiás: [                         ]");

    gotoxy(3, 15);
    printf("Resultado: [             ]");

    // ==== LOOP PRINCIPAL ====
    do 
    {
        // --- LIMPA APENAS OS CAMPOS VARIÁVEIS ---
        gotoxy(31, 7);  printf("                        ");   // limpa campo do nome
        gotoxy(15, 15); printf("             ");              // limpa resultado
        gotoxy(12, 23); printf("  ");                         // limpa campo da opção

        // --- ENTRADA DO NOME ---
        gotoxy(31, 7); // dentro dos colchetes do nome
        fflush(stdin);
        gets(capital);

        // --- PROCESSAMENTO ---
        gotoxy(15, 15); // dentro dos colchetes de Resultado
        if(strcmp(capital, "Goiania") == 0 || 
           strcmp(capital, "GOIANIA") == 0 || 
           strcmp(capital, "goiania") == 0) 
        {
            printf("Correto!");
        } 
        else 
        {
            printf("Incorreto!");
        }

        // --- LEITURA DA OPÇÃO (1 REPETIR / 2 VOLTAR) ---
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    // --- VOLTA PARA O MENU CONDICIONAL ---
    system("cls");
    DesenharTela();
    Condicional();
}

void Repeticao() {
    int i, Opcao, X;
    gotoxy(5, 6); printf("1 - Soma de intervalo de números");

    gotoxy(5, 8); printf("2 - Conversão de graus");

    gotoxy(5, 10); printf("3 - Série de fetuccine");

    gotoxy(5, 12); printf("4 - Tamanho de um nome");

    gotoxy(5, 14); printf("5 - Tabuada");

    gotoxy(5, 16); printf("6 - Retornar ao menu principal");

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
        break;
    case 2:
        system("cls");
        ConversorGraus();
        break;
    case 3:
        system("cls");
        Fetuccine();
        break;
    case 4:
        system("cls");
        TamanhoNome();
        break;
    case 5:
        system("cls");
        break;
    case 6:
        system("cls");
        return;
        break;
    }
}

void ConversorGraus() {
    float Celsius, Fahrenheit;
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    
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

    gotoxy(25, 2); printf("Projeto CMP1046 - Quadrado e Raiz Quadrada");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 7);
    printf("Digite a temperatura em graus celsius:...[          °C ]");
    
    gotoxy(3,15);
    printf("Temperatura em fahrenheits:..............[          °F ]");

do {
    gotoxy(45,7);
    printf("         ");

    gotoxy(45,15);
    printf("         ");

    gotoxy(12,23);
    printf("  ");

    gotoxy(46,7);
    scanf("%f", &Celsius);

    fflush(stdin);

    Fahrenheit = Celsius * 9/5 + 32;

    gotoxy(46, 15);
    printf("%.0f", Fahrenheit);

    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Repeticao();
}

void Fetuccine() {
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int altura = 25;
    int Qtd, j, linha, s1 = 1, s2 = 2, prox;
    
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

    gotoxy(25, 2); printf("Projeto CMP1046 - Série de Fetuccine");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");

    gotoxy(3, 6);
    printf("Número de termos...[     ]");

    gotoxy(3, 15);
    printf("Sequência: ");

do {
	s1 = 1;
	s2 = 2;
    gotoxy(23,6);
    printf("    ");

    for (i = 14; i <= 89; i++)
    {
        gotoxy(i, 15);
        printf(" ");
    }

    gotoxy(12,23);
    printf("  ");

    gotoxy(23,6);
    scanf("%d", &Qtd);

    fflush(stdin);

	if  (Qtd == 1)
		{
			gotoxy(14, 15);
	    	printf("%d ", s1);
		}
	else
		{
			if  (Qtd == 2)
				{
					gotoxy(14, 15);
    				printf("%d  %d ", s1, s2);
				}
			else
				{
					gotoxy(14, 15);
    				printf("%d  %d ", s1, s2);
    				
					linha = 15;
				    for (i = 3, j = 20; i <= Qtd; i++, j = j + 3)
				    {
				            gotoxy(j, linha);
				            if (i % 2 == 1) {  // ímpar: soma
				                prox = s2 + s1;
				                printf("%d ", prox);
				            } else {           // par: subtrai
				                prox = s2 - s1;
				                printf("%d ", prox);
				            }
				            s1 = s2;
				            s2 = prox;
				    }
				}
		}

    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);

    system("cls");
    DesenharTela();
    Repeticao();
}
void PesoIdeal() {

    double altura, pesoIdeal;
    char sexo;
    
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int Altura = 25;
    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(esquerda, 12, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    //Desenha as linhas na vertical
    for (i = vertical; i < Altura; i++)
        {
            gotoxy(esquerda, i);
            printf("=");
            gotoxy(largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2); printf("Projeto CMP1046 - Peso ideal");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");
	
	gotoxy(3, 7);  printf("Digite a altura em metros..............[     ]");
    gotoxy(3, 9);  printf("Digite o sexo (M/F)..................[ ]");
    gotoxy(3, 16); printf("Peso ideal........[              Kg]");
    
    do {
	

        // limpar campos
        gotoxy(43, 7); printf("     ");
        gotoxy(41, 9); printf(" ");
        gotoxy(25, 16); printf("          ");
        gotoxy(12,23);
   		printf("  ");

        // entrada
        gotoxy(43, 7); scanf("%lf", &altura);
        gotoxy(41, 9); scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm')
            pesoIdeal = altura * 72.7 - 58;
        else if (sexo == 'F' || sexo == 'f')
            pesoIdeal = altura * 62.1 - 44.7;
        else {
            gotoxy(11, 21);
            printf("Sexo inválido!");
            pesoIdeal = 0;
        }

        gotoxy(25, 16);
        printf("%.2lf", pesoIdeal);

        // repetir?
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);
    system("cls");
    DesenharTela();
    Condicional();
}


void TamanhoNome() {

    char nome[200];
    int OpcaoR, i;
	int esquerda = 1;
    int vertical = 1;
    int largura = 90;
    int Altura = 25;
    
    DesenharLinhaHorizontal(esquerda, 1, largura);
    DesenharLinhaHorizontal(esquerda, 3, largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(esquerda, 12, largura);
    DesenharLinhaHorizontal(esquerda, 20, largura);
    DesenharLinhaHorizontal(esquerda, 22, largura);
    DesenharLinhaHorizontal(esquerda, 24, largura);

    //Desenha as linhas na vertical
    for (i = vertical; i < Altura; i++)
        {
            gotoxy(esquerda, i);
            printf("=");
            gotoxy(largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2); printf("Projeto CMP1046 - Peso ideal");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir    2 - Voltar ao menu");
	


	 gotoxy(3, 7);
        printf("Digite o nome completo.......[                                            ]");

        gotoxy(3, 16);
        printf("O nome digitado é:[                                              ]");
        
        gotoxy(3,18);
        printf("Qtd de caracteres:[    ]");
        
        
    do {

       

        // limpar campos
        gotoxy(36, 7); printf("                                       ");
        gotoxy(22,18); printf("    ");
        gotoxy(22, 16); printf("                                       ");
        gotoxy(12,23);
    	printf("  ");

        // entrada
        gotoxy(36, 7);
        fflush(stdin);
        fgets(nome, sizeof(nome), stdin);

        // limpar \n
        size_t len = strlen(nome);
        if (len > 0 && nome[len - 1] == '\n')
            nome[len - 1] = '\0';

        int tamanho = strlen(nome);

        gotoxy(23, 16);
        printf("%s", nome);
        
        gotoxy(22, 18);
        printf("%d", tamanho);

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);
    system("cls");
    DesenharTela();
    Repeticao();
}


void Vetores() {
    int Opcao, X;

    gotoxy(5, 7);  printf("1 - Média de alunos");
    gotoxy(5, 9);  printf("2 - Soma de vetores");
    gotoxy(5, 11); printf("3 - Comparar elemento de vetores");
    gotoxy(5, 13); printf("4 - Ordenação de vetores");
    gotoxy(5, 15); printf("5 - Retornar ao menu principal");

    gotoxy(12, 23); 
    scanf("%d", &Opcao);

    switch (Opcao) {
        case 1:
            system("cls");
            //SomaIntervalo();
            break;
        case 2:
            system("cls");
            //ConversorGraus();
            break;
        case 3:
            system("cls");
            //Fetuccine();
            break;
        case 4:
            system("cls");
            //TamanhoNome();
            break;
        case 5:
            system("cls");
            return;     
    }
}