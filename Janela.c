#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

void gotoxy(int x, int y);

void DesenharLinhaHorizontal ();

void DesenharTela();

void LimparTela();

void TelaInicial();

void Sequencial();

void FigurasGeometricas();

void CnsVeiculo();

void Prestacao();

void Hipotenusa();

void Circulo();

void Quadrado();

void Losango();

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
	setlocale(LC_ALL, "Portuguese");

    double ctt1, ctt2, hipotenusa;
	int OpcaoR;

do{

	gotoxy(41,5);
	printf("   ");
	
	gotoxy(40,6);
	printf("   ");
	
	gotoxy(33,8);
	printf("     ");
	
	gotoxy(8,9);
	printf("    ");
	
    //primeiro cateto
    gotoxy(3, 5);
    printf("Digite o valor do primeiro cateto:...[   ]");
    gotoxy(41, 5); 
    scanf("%lf", &ctt1);

    //segundo cateto
    gotoxy(3, 6);
    printf("Digite o valor do segundo cateto:...[   ]");
    gotoxy(40, 6); 
    scanf("%lf", &ctt2);

	//hipotenusa
    hipotenusa = sqrt((ctt1 * ctt1) + (ctt2 * ctt2));

    gotoxy(8, 8);
    printf("Valor da hipotenusa é: [%.2lf]\n", hipotenusa);
	
	gotoxy(12,23);
	scanf("%d", &OpcaoR);
	
  }
  
  	while (OpcaoR==1);
}

void Circulo()
{
	 setlocale(LC_ALL, "Portuguese");

    double ctt1, ctt2, hipotenusa;
	int OpcaoR;

do{

	gotoxy(41,5);
	printf("   ");
	
	gotoxy(40,6);
	printf("   ");
	
	gotoxy(33,8);
	printf("       ");
	
	gotoxy(8,9);
	printf("    ");
	
    //primeiro cateto
    gotoxy(3, 5);
    printf("Digite o valor do primeiro cateto:...[    ]");
    gotoxy(41, 5); 
    scanf("%lf", &ctt1);

    //segundo cateto
    gotoxy(3, 6);
    printf("Digite o valor do segundo cateto:...[    ]");
    gotoxy(40, 6); 
    scanf("%lf", &ctt2);

	//hipotenusa
    hipotenusa = sqrt((ctt1 * ctt1) + (ctt2 * ctt2));

    gotoxy(8, 8);
    printf("Valor da hipotenusa é: [ %.2lf ]\n", hipotenusa);
	
	gotoxy(8,9);
	scanf("%d", &OpcaoR);
	
  }
  
  	while (OpcaoR==1);  
}

void Quadrado()
{
		setlocale(LC_ALL, "Portuguese");

	double ld, a, p, d; 
	int OpcaoR;

	do{
		gotoxy(42, 5); 
		printf("    "); 
		gotoxy(33, 7); 
		printf("        "); 
		gotoxy(33, 8); 
		printf("        "); 
		gotoxy(33, 9); 
		printf("        "); 
        gotoxy(3, 11); 
        printf("   ");

		//entrada do lado
		gotoxy(5, 5);
		printf("Digite o valor do lado do quadrado: [    ]");
		gotoxy(42, 5);
		scanf("%lf", &ld);
		
		//cálculos 
		a = ld * ld;
		p = ld * 4;
		d = ld * sqrt(2);
		
		//saídas
		gotoxy(6, 7);
		printf("A área do quadrado é:......[ %.2lf ]", a);
		
		gotoxy(6, 8);
		printf("O perímetro do quadrado é:.[ %.2lf ]", p);
		
		gotoxy(6, 9);
		printf("A diagonal do quadrado é:..[ %.2lf ]", d);

		gotoxy(3, 11);
		scanf("%d", &OpcaoR);

	  } 
		while (OpcaoR == 1);
}

void Losango()
{
	setlocale(LC_ALL, "Portuguese");
	
	double dmaior, dmenor, a;
	int OpcaoR;

	do{
		
		gotoxy(40, 3); 
		printf("     "); 
		gotoxy(40, 4); 
		printf("     "); 
		gotoxy(30, 6); 
		printf("        "); 

		//entrada da diagonal maior
		gotoxy(5, 3);
		printf("Digite o valor da diagonal maior: [     ]");
		gotoxy(40, 3);
		scanf("%lf", &dmaior);

		//entrada da diagonal menor
		gotoxy(5, 4);
		printf("Digite o valor da diagonal menor: [     ]");
		gotoxy(40, 4);
		scanf("%lf", &dmenor);

		//calculo da area
		a = (dmaior * dmenor) / 2;

		//saÃ­da
		gotoxy(6, 6);
		printf("A Ã¡rea do losango Ã©: [ %.2lf ]", a);

		gotoxy(3, 8);
		scanf("%d", &OpcaoR);

	  } 
	
		while (OpcaoR == 1);

}

void CnsVeiculo()
{
    int DH, VelM, a , b , c, opcao;
		do
		{
		gotoxy(38, 0);
		printf("   ");
		
		gotoxy(38, 1);
		printf("   ");
		
		gotoxy(2, 9);
		printf("   ");
		
		gotoxy(0,0);
		printf("digite a duraÃ§Ã£o da viagem...........[   ]");
		gotoxy(38,0);
		scanf("%d", &DH);
		
		gotoxy(0,1);
		printf("digite a velocidade media da viagem..[   ]");
		gotoxy(38,1);
		scanf("%d", &VelM);
		
		a = (DH*VelM)/8;
		printf("PreÃ§o gasolina carro a..: 	     [R$ %d]\n", a);
	    a = a*1.04;
	    printf("PreÃ§o etanol carro a....: 	     [R$ %d]\n", a);
		
		b = (DH*VelM)/10;
		printf("PreÃ§o gasolina carro b..: 	     [R$ %d]\n", b);
		b = b*1.04;
		printf("PreÃ§o etanol carro b....: 	     [R$ %d]\n", b);
		
		c = (DH*VelM)/12;
		printf("PreÃ§o gasolina carro c..: 	     [R$ %d]\n", c);
		c = c*1.04;
		printf("PreÃ§o etanol carro c....:            [R$ %d]\n", c);
		
		gotoxy(2, 9);
		scanf("%d", &opcao);
		}while(opcao == 1);
	
}

// fun??o apenas pra usar gotoxy
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//fun??o de desenhar a janela padr?o
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

    gotoxy(5, 23); printf("Op??o [  ]");
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

//fun??o exercicio sequencial
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
    printf("Digite o valor da presta??o.............[R$             ]");
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
            printf("O valor da presta??o atualizado ?.......[R$ %.2f             ]", ValorAtualizado);
        }
    else
        {
            gotoxy(3, 8);
            printf("O valor da presta??o atualizado ?.......[R$ %.2f             ]", ValorPrestacao);
        }
    gotoxy(12, 23);
    scanf("%d", &OpcaoR);
} while (OpcaoR == 1);
}

//fun??o da primeira tela quando come?a o programa
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

    gotoxy(5, 23); printf("Op??o [  ]");

    gotoxy(5, 8); printf("1 - Estrutura Sequencial");

    gotoxy(5, 10); printf("2 - Estrutura Condicional");

    gotoxy(5, 12); printf("3 - Estrutura de Repeti??o");

    gotoxy(5, 14); printf("4 - Vari?veis compostas homog?neas");

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

// fun??o menu sequencial
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
    gotoxy(5, 8); printf("1 - Calcular Hipotenusa");

    gotoxy(5, 10); printf("2 - Calcular Perímetro e Área de Circuitos");

    gotoxy(5, 12); printf("3 - Calcular Perímettro, Área e Diagonal de Quadrados");

    gotoxy(5, 14); printf("4 - Calcular Perímetro e Área de Losangos");

    gotoxy(5, 16); printf("5 - Retornar ao Menu Anterior");

    gotoxy(5, 18); printf("6 - Retornar ao Menu Principal");

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

    case 5:
        system("cls");
        DesenharTela();
        Sequencial();
        
    case 6:
        TelaInicial();
        break;
    }
}

    


