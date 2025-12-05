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

void CompVetores();

void SomaIntervalos();

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

void MediaNotas();

void OrdemCrescente();

void OrdemVetor();

void Prestacao();

void PesoIdeal();

void Quadrado();

void RaizQuadrada();

void Repeticao();

void Sequencial();

void TamanhoNome();

void Tabuada();

void TelaInicial();

void Vetores();

void VetorC();

int Esquerda = 1;
int Vertical = 1;
int Largura = 90;
int Altura = 25;
int X;

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
	int OpcaoR, i, X;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(28, 2); printf("Projeto CMP1046 - Calcular hipotenusa");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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
	    gotoxy(25, 16); printf("         ");
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
	
    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                FigurasGeometricas();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Circulo()
{
    double raio, area, perimetro;
    int OpcaoR, i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    // tÃ­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Círculo");

    // instruÃ§Ãµes no rodapÃ©
    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    // mensagens fixas de entrada e saÃ­da
    gotoxy(3, 7);
    printf("Digite o valor do raio do círculo:...[      ]");

    gotoxy(3, 14);
    printf("Área do círculo:.......[            ]");

    gotoxy(3, 16);
    printf("Perímetro do círculo:..[            ]");

    do {
        // limpar apenas os campos numÃ©ricos dentro dos colchetes
        gotoxy(42, 7);  printf("     ");       // campo do raio
        gotoxy(28, 14); printf("          ");   // campo da Ã¡rea
        gotoxy(28, 16); printf("          ");   // campo do Perímetro
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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                FigurasGeometricas();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Quadrado()
{
    double ld, a, p, d;
    int OpcaoR, i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    // tí­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Quadrado");

    // instruções no rodapé
    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    // mensagens fixas de entrada e saí­da
    gotoxy(3, 7);
    printf("Digite o valor do lado do quadrado:...[     ]");

    gotoxy(3, 13);
    printf("Área do quadrado:......[              ]");

    gotoxy(3, 15);
    printf("Perímetro do quadrado:.[              ]");

    gotoxy(3, 17);
    printf("Diagonal do quadrado:..[              ]");

    do {
        // limpar apenas campos
        gotoxy(42, 7);  printf("     ");       // campo do lado
        gotoxy(28, 13); printf("           ");   // campo da Área
        gotoxy(28, 15); printf("           ");   // campo do Perímetro
        gotoxy(28, 17); printf("           ");   // campo da diagonal
        gotoxy(12, 23); printf("  ");          // campo da opção

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

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                FigurasGeometricas();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Losango()
{
    double dmaior, dmenor, a;
    int OpcaoR, i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    // tÃ­tulo
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Cálculo do Losango");

    // instruÃ§Ãµes no rodapÃ©
    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    // mensagens fixas de entrada e saÃ­da
    gotoxy(3, 5);
    printf("Digite o valor da diagonal maior:...[     ]");

    gotoxy(3, 8);
    printf("Digite o valor da diagonal menor:...[     ]");

    gotoxy(3, 15);
    printf("Área do losango: [              ]");

    do {
        // limpar apenas os 
        gotoxy(40, 5);  printf("     ");   // campo da diagonal maior
        gotoxy(40, 8);  printf("     ");   // campo da diagonal menor
        gotoxy(25, 15); printf("          "); // campo da Área
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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                FigurasGeometricas();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void CnsVeiculo()
{
    float DH, VelM, a , b , c;
    int Opcao;
    int i;

	DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 9, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(27, 2); printf("Projeto CMP1046 - Consumo de veículo");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3,5);
    printf("Digite a duração da viagem...........[   ]");

    gotoxy(3,7);
    printf("Digite a velocidade média............[   ]");

    gotoxy(3,12);
    printf("Preço gasolina carro A..: 	     [R$         ]");

    gotoxy(3,13);
    printf("Preço etanol carro A....: 	     [R$         ]");

     gotoxy(3,14);
    printf("Preço gasolina carro b..: 	     [R$         ]");

    gotoxy(3,15);
    printf("Preço etanol carro b....: 	     [R$         ]");

     gotoxy(3,16);
    printf("Preço gasolina carro c..: 	     [R$         ]");

    gotoxy(3,17);
    printf("Preço etanol carro c....:         [R$         ]");

    do
    {
    gotoxy(41, 5);
    printf("   ");
    
    gotoxy(41, 7);
    printf("   ");
    
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

    gotoxy(40,17);
    printf("        ");

    gotoxy(12,23);
    printf("  ");
    
    gotoxy(41,5);
    scanf("%f", &DH);
    
    gotoxy(41,7);
    scanf("%f", &VelM);

    a = (DH*VelM)/8;
    gotoxy(41,12);
    printf("%.2f", a);

    a = a*1.04;

    gotoxy(41,13);
    printf("%.2f", a);
    
    b = (DH*VelM)/10;

    gotoxy(41,14);
    printf("%.2f", b);
   
    b = b*1.04;

    gotoxy(41,15);
    printf("%.2f", b);
    
    c = (DH*VelM)/12;

    gotoxy(41,16);
    printf("%.2f", c);
   
    c = c*1.04;

    gotoxy(41,17);
    printf("%.2f", c);
    
    gotoxy(12, 23);
    scanf("%d", &Opcao);
}   while (Opcao == 1);

    while (1) {
        switch (Opcao) {
            case 2:
                system("cls");
                DesenharTela();
                Sequencial();
                return; 
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return; 
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                for (i = 11; i <= 80; i++) {
                    gotoxy(i, 21);
                    printf("   ");
                }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &Opcao);
                break;
        }
    }
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
    int i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
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

	DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(27, 2); printf("Projeto CMP1046 - Prestação de Veículo");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3, 6);
    printf("Digite o valor da prestação.............[R$             ]");

    gotoxy(3, 8);
    printf("Digite a quantidade de dias em atraso...[      ]");

    gotoxy(3, 16);
    printf("O valor da prestação atualizado ........[R$                 ]");
    
    do {

        gotoxy(47,6);
        printf("          ");

        gotoxy(45,8);
        printf("     ");

        gotoxy(47,16);
        printf("                ");

        gotoxy(47,16);
        printf("               ");

        gotoxy(12,23);
        printf("  ");
        
        
        gotoxy(47, 6);
        scanf("%f", &ValorPrestacao);
        fflush(stdin);
        // ou usar isso: while (getchar() != '\n');
        
        gotoxy(45, 8);
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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Sequencial();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

//função da primeira tela quando come?a o programa
void TelaInicial() {
    int i, Opcao, X;

    while (1) {

    system("cls");
    DesenharLinhaHorizontal(Esquerda, 2, Largura);
    DesenharLinhaHorizontal(Esquerda, 4, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
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
        case 5:
            system("cls");
            printf("Encerrando o programa...\n");
            exit(0);
            break;
        default:
            gotoxy(11, 21);
            printf("Opção inválida!");
            system("pause > null");
                    for (i = 11; i <= 80; i++)
                    {
                        gotoxy(i, 21);
                        printf("   ");
                    }
            goto Ler;
            break;
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
    float Num1, Num2, total;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(35, 2); printf("Projeto CMP1046 - Calculadora");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void RaizQuadrada() {
    int OpcaoR, i;
    int Quadrado, X;
    float Raiz, Num;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2); printf("Projeto CMP1046 - Quadrado e Raiz Quadrada");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Emprestimo() {
    int OpcaoR, i;
    float salario, emprestimo, parcelas, valorParcela, limite;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2);
    printf("Projeto CMP1046 - Empréstimo Consignado");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}
    
void CalcMediaAluno()
{
    char nome[50];
    float n1, n2, n3, n4;
    int aulas, faltas;
    float media1, media2, mediaFinal, freq;
    int Opcao;

    int i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 13, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
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
    printf("Média final..........................[      ]");
    gotoxy(3, 16);
	printf("Frequência...........................[      ]");
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
        printf("%.2f", mediaFinal);
        gotoxy(41, 16);
        printf("%.2f", freq);

        gotoxy(41, 18);
        if (mediaFinal >= 7.5 && freq >= 75)
            printf("APROVADO");
        else
            printf("REPROVADO");

        gotoxy(12, 23);
        scanf("%d", &Opcao);

    } while (Opcao == 1);

    while(1) {
        switch(Opcao) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &Opcao);
                break;
        }
    }
}


void DeterminarSalaProva() 
{
	char nome[50];
    char primeiraLetra;
    char sala[10];
    int Opcao;
    int i;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 9, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Determinar Sala de Prova");

    gotoxy(3, 21);
    printf("Mens [                                                                               ]");
    gotoxy(3, 23);
    printf("Opção [ ]");
    gotoxy(17, 23);
    printf("1 - Repetir    2 - Sair");

    gotoxy(3, 6);
    printf("Digite o nome do aluno...............[                                 ]");

    
	
	
	gotoxy(3, 13);
    printf("Primeira letra do nome.............: [ ]");
    gotoxy(3, 15);
    printf("Sala de Prova......................: [                   ]");

    do {    
        gotoxy(41, 6);
        printf("                                 ");

        gotoxy(41, 13);
        printf(" ");
        
        gotoxy(41, 15);
        printf("                   ");

        gotoxy(10, 21);
        printf("                                                                             ");

        gotoxy(10, 23);
        printf(" ");

        gotoxy(41, 6);
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

        gotoxy(41, 13);
        printf("%c", primeiraLetra);
        gotoxy(41, 15);
        printf("%s", sala);

        gotoxy(10, 23);
        scanf("%d", &Opcao);

    } while (Opcao == 1);

    while(1) {
        switch(Opcao) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &Opcao);
                break;
        }
    }
}

void OrdemCrescente() 
{
    int a, b, c, aux;
    int OpcaoR, i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 13, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Ordem Crescente");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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
        gotoxy(21, 16); printf("     ,     ,      ");
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

        gotoxy(21, 16);
        printf("     ,     ,      "); // limpa o campo do resultado
        gotoxy(21, 16);
        printf("%d , %d , %d", a, b, c); // imprime no mesmo ponto

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void CapitalGoias() 
{
    char capital[50];
    int OpcaoR, i;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Capital de Goiás");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal"); 

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(3, 7);
    printf("Digite a Capital de Goiás: [                         ]");

    gotoxy(3, 15);
    printf("Resultado: [             ]");

    do 
    {
        // LIMPA APENAS OS CAMPOS VARIÁVEIS
        gotoxy(31, 7);  printf("                        ");   // limpa campo do nome
        gotoxy(15, 15); printf("             ");              // limpa resultado
        gotoxy(12, 23); printf("  ");                         

        // ENTRADA DO NOME
        gotoxy(31, 7); 
        fflush(stdin);
        gets(capital);

        gotoxy(15, 15); 
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

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
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
        SomaIntervalos();
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
        Tabuada();
        break;
    case 6:
        system("cls");
        return;
        break;
    }
}

void SomaIntervalos() 
{
    int N1 = 0;
    int N2 = 0;
    int OpcaoR = 1;
    int i;
    int soma = 0;
    int qtd = 0;
    int contPar = 0;
    double media = 0.0;

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    for (i = Vertical; i < Altura; i++)
    {
        gotoxy(Esquerda, i);
        printf("=");

        gotoxy(Largura, i);
        printf("=");
    }

    gotoxy(20, 2);
    printf("PROJETO CMP1046 - SOMA DE INTERVALO DE NÚMEROS");

    gotoxy(3, 6);
    printf(" valor inteiro positivo [          ]");

    gotoxy(3, 8);
    printf(" valor inteiro positivo [          ]");

    gotoxy(3, 13);
    printf(" A media dos numeros do intervalo ........[    ]");

    gotoxy(3, 15);
    printf(" Quantidade de numeros pares no intervalo.[    ]");

    gotoxy(3, 17);
    printf(" Números digitados são iguais ...........[    ]");

    gotoxy(3, 21);
    printf(" Mensagem [                                                                         ]");

    gotoxy(3, 23);
    printf(" Opção [  ]  1 - Repetir    2 - Menu Anterior    3 - Menu Principal");

    do
    {
        gotoxy(3, 6);
        printf(" valor inteiro positivos [          ]");

        gotoxy(3, 8);
        printf(" valor inteiro positivos [          ]");

        gotoxy(3, 13);
        printf(" A media dos numeros do intervalo ........[       ]");

        gotoxy(3, 15);
        printf(" Quantidade de numeros pares no intervalo.[       ]");

        gotoxy(3, 17);
        printf(" Números digitados são iguais ...........[    ]");

        gotoxy(11, 23);
        printf("  ");

        gotoxy(44, 7);   printf("          ");
        gotoxy(44, 9);   printf("          ");

        gotoxy(46, 13);  printf("      ");
        gotoxy(46, 15);  printf("      ");
        gotoxy(46, 17);  printf("   ");

        gotoxy(29, 6);
        scanf("%d", &N1);
        fflush(stdin);

        gotoxy(29, 8);
        scanf("%d", &N2);
        fflush(stdin);

        soma = 0;
        qtd = 0;
        contPar = 0;
        media = 0.0;

        if (N1 == N2)
        {
            gotoxy(46, 17); 
            printf("Sim");
        }
        else
        {
            if (N1 < N2)
            {
                i = N1;
                while (i <= N2)
                {
                    soma = soma + i;
                    qtd = qtd + 1;

                    if ((i % 2) == 0)
                    {
                        contPar = contPar + 1;
                    }

                    i = i + 1;
                }

                media = soma * 1.0 / qtd;

                gotoxy(46, 13);   
                printf("%.2f", media);

                gotoxy(46, 15);   
                printf("%d", contPar);

                gotoxy(46, 17);   
                printf("Nao");
            }
            else
            {
                i = N1;
                while (i >= N2)
                {
                    soma = soma + i;
                    qtd = qtd + 1;

                    if ((i % 2) == 0)
                    {
                        contPar = contPar + 1;
                    }

                    i = i - 1;
                }

                media = soma * 1.0 / qtd;

                gotoxy(46, 13);   
                printf("%.2f", media);

                gotoxy(46, 15);  
                printf("%d", contPar);

                gotoxy(46, 17);   
                printf("Nao");
            }
        }

        gotoxy(11, 23);
        scanf("%d", &OpcaoR);
        fflush(stdin);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Repeticao();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void ConversorGraus() {
    float Celsius, Fahrenheit;
    int OpcaoR, i;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2); printf("Projeto CMP1046 - Conversão de graus");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Repeticao();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Fetuccine() {
    int OpcaoR, i;
    int Qtd, j, linha, s1 = 1, s2 = 2, prox;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 11, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(25, 2); printf("Projeto CMP1046 - Série de Fetuccine");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3, 7);
    printf("Número de termos...[     ]");

    gotoxy(3, 15);
    printf("Sequência: ");

do {
	s1 = 1;
	s2 = 2;
    gotoxy(23,7);
    printf("    ");

    for (i = 14; i <= 89; i++)
    {
        gotoxy(i, 15);
        printf(" ");
    }

    gotoxy(12,23);
    printf("  ");

    gotoxy(23,7);
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

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Repeticao();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}
void PesoIdeal() {

    double altura, pesoIdeal;
    char sexo;
    int X;
    int OpcaoR, i;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 12, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(32, 2); printf("Projeto CMP1046 - Peso ideal");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");
	
	gotoxy(3, 6);  printf("Digite a altura em metros..............[     ]");
    gotoxy(3, 9);  printf("Digite o sexo (M/F)..................[ ]");
    gotoxy(3, 16); printf("Peso ideal........[              Kg]");
    
    do {
	
again:
        // limpar campos
        gotoxy(43, 6); printf("     ");
        gotoxy(41, 9); printf(" ");
        gotoxy(25, 16); printf("          ");
        gotoxy(12,23);
   		printf("  ");

        // entrada
        gotoxy(43, 6); scanf("%lf", &altura);
        gotoxy(41, 9); scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm')
            pesoIdeal = altura * 72.7 - 58;
        else if (sexo == 'F' || sexo == 'f')
            pesoIdeal = altura * 62.1 - 44.7;
        else {
            gotoxy(11, 21);
            printf("Sexo inválido!");
            system("pause > null");
                    for (X = 11; X <= 80; X++)
                    {
                        gotoxy(X, 21);
                        printf("   ");
                    }
                    goto again;
            pesoIdeal = 0;
        }

        gotoxy(25, 16);
        printf("%.2lf", pesoIdeal);

        // repetir?
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);
    
    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Condicional();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}


void TamanhoNome() {

    char nome[200];
    int OpcaoR, i;
    
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 12, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(28, 2); printf("Projeto CMP1046 - Tamanho de um nome");
    
    gotoxy(5, 21); printf("Mens [                                                                         ]");

    gotoxy(5, 23); printf("Opção [  ]");

    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");
	


	 gotoxy(3, 7);
        printf("Digite o nome completo.......[                                            ]");

        gotoxy(3, 15);
        printf("O nome digitado é:[                                              ]");
        
        gotoxy(3,17);
        printf("Qtd de caracteres:[    ]");
        
        
    do {

       

        // limpar campos
        gotoxy(36, 7); printf("                                       ");
        gotoxy(22,17); printf("    ");
        gotoxy(22, 15); printf("                                       ");
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

        gotoxy(23, 15);
        printf("%s", nome);
        
        gotoxy(22, 17);
        printf("%d", tamanho);

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);
    
    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Repeticao();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void Tabuada() {
    int OpcaoR, i, j, k, y, X, num;
    char operacao;

    // Desenhar moldura
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 12, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }

    gotoxy(32, 2); printf("Projeto CMP1046 - Tabuada");

    gotoxy(5, 21); printf("Mens [                                                                         ]");
    gotoxy(5, 23); printf("Opção [  ]");
    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3, 7);  printf("Digite um número de 1 a 10............[   ]");
    gotoxy(3, 9);  printf("Digite a operação (+, -, *, /)........[   ]");

    gotoxy(3, 14); printf("Resultado:");
    
    do {
        again:
        // limpar campos
        gotoxy(42, 7); printf("   ");
        gotoxy(42, 9); printf("   ");
        gotoxy(12, 23); printf("  ");
        for ( k = 0, j = 0; k < 10; k++) {
            if (k <= 5)
            {
                gotoxy(14, 14 + k);
            }
            else
            {
                gotoxy(14, 14 + j);
                j++;
            }
            
            printf("                              ");
        }

        // entrada
        gotoxy(42, 7);
        scanf("%d", &num);

        gotoxy(42, 9);
        fflush(stdin);
        scanf(" %c", &operacao);

        // gerar tabuada
        for (j = 1, k = 1; j <= 10; j++) {
            if (j <= 5)
            {
                gotoxy(15, 13 + j);
            }
            else
            {
                gotoxy(30, 13 + k);
                k++;
            }
            
            switch (operacao) {
                case '+':
                    printf("%d + %d = %d", num, j, num + j);
                    break;
                case '-':
                    printf("%d - %d = %d", num, j, num - j);
                    break;
                case '*':
                    printf("%d * %d = %d", num, j, num * j);
                    break;
                case '/':
                    if (j != 0)
                        printf("%d / %d = %.2f", num, j, (float)num / j);
                    break;
                default:
                    gotoxy(12, 21);
                    printf("Operação inválida! Use +, -, * ou /");
                    system("pause > null");
                    for (X = 12; X <= 80; X++)
                    {
                        gotoxy(X, 21);
                        printf("   ");
                    }
                    goto again;
                    break;
            }
        }

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Repeticao();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
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
            MediaNotas();
            break;
        case 2:
            system("cls");
            VetorC();
            break;
        case 3:
            system("cls");
            CompVetores();
            break;
        case 4:
            system("cls");
            OrdemVetor();
            break;
        case 5:
            system("cls");
            return;     
    }
}

void MediaNotas() {

    double notas[9];
    double medias[3];
    double mediaFinal;
    int OpcaoR, i;

    // ----------------- JANELA FIXA (ANTES DO LOOP) -----------------
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    //linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    //Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
        {
            gotoxy(Esquerda, i);
            printf("=");
            gotoxy(Largura, i); 
            printf("=");
            
        }
    // título
    gotoxy(28, 2);
    printf("Projeto CMP1046 - Médias das Notas");
    gotoxy(5, 21); printf("Mens [                                                                         ]");
    gotoxy(5, 23); printf("Opção [  ]");
    gotoxy(17, 23); printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");
    
    // labels das 9 notas
    gotoxy(3, 5);  printf("Nota 1:....................[      ]");
    gotoxy(3, 6);  printf("Nota 2:....................[      ]");
    gotoxy(3, 7);  printf("Nota 3:....................[      ]");
    gotoxy(3, 8);  printf("Nota 4:....................[      ]");
    gotoxy(3, 9);  printf("Nota 5:....................[      ]");
    gotoxy(3, 10); printf("Nota 6:....................[      ]");
    gotoxy(3, 11); printf("Nota 7:....................[      ]");
    gotoxy(3, 12); printf("Nota 8:....................[      ]");
    gotoxy(3, 13); printf("Nota 9:....................[      ]");

    // labels das médias
    gotoxy(3, 15); printf("Média 1 (notas 1-3):.......[      ]");
    gotoxy(3, 16); printf("Média 2 (notas 4-6):.......[      ]");
    gotoxy(3, 17); printf("Média 3 (notas 7-9):.......[      ]");

    // label média final
    gotoxy(3, 19); printf("Média Final:...............[      ]");

    // ----------------- LOOP -----------------
    do {

        // limpar todas as áreas entre colchetes
        gotoxy(12, 23); printf("  ");
        for (i = 5; i <= 14; i++) {
            gotoxy(32, i);
            printf("     ");
        }

        for (i = 15; i <= 17; i++) {
            gotoxy(32, i);
            printf("     ");
        }

        gotoxy(32, 19);
        printf("     ");

        // ---------- leitura das 9 notas ----------
        gotoxy(33, 5);  scanf("%lf", &notas[0]);
        gotoxy(33, 6);  scanf("%lf", &notas[1]);
        gotoxy(33, 7);  scanf("%lf", &notas[2]);
        gotoxy(33, 8);  scanf("%lf", &notas[3]);
        gotoxy(33, 9); scanf("%lf", &notas[4]);
        gotoxy(33, 10); scanf("%lf", &notas[5]);
        gotoxy(33, 11); scanf("%lf", &notas[6]);
        gotoxy(33, 12); scanf("%lf", &notas[7]);
        gotoxy(33, 13); scanf("%lf", &notas[8]);

        // ---------- cálculos ----------
        medias[0] = (notas[0] + notas[1] + notas[2]) / 3.0;
        medias[1] = (notas[3] + notas[4] + notas[5]) / 3.0;
        medias[2] = (notas[6] + notas[7] + notas[8]) / 3.0;

        mediaFinal = (medias[0] + medias[1] + medias[2]) / 3.0;

        // ---------- impressão dos resultados ----------
        gotoxy(32, 15);
        printf("%.2lf", medias[0]);

        gotoxy(32, 16);
        printf("%.2lf", medias[1]);

        gotoxy(32, 17);
        printf("%.2lf", medias[2]);

        gotoxy(32, 19);
        printf("%.2lf", mediaFinal);

        // opção no rodapé
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Vetores();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void CompVetores()
{
    int OpcaoR, i, j, lin, Achou;
    int VetA[10], VetB[10];

    // Desenhar moldura
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    // linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 12, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    // Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
    {
        gotoxy(Esquerda, i);
        printf("=");
        gotoxy(Largura, i);
        printf("=");
    }

    gotoxy(25, 2);
    printf("Projeto CMP1046 - Comp Vetores");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3, 6);
    printf("Vet-A: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

    gotoxy(3, 8);
    printf("Vet-B: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

    gotoxy(3, 15); 
    printf("Num Comuns: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

    gotoxy(3,17);
    printf("Posição:    [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

    do {
        gotoxy(3, 6);
        printf("Vet-A: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(3, 8);
        printf("Vet-B: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(3, 15); 
        printf("Num Comuns: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(3,17);
        printf("Posição:    [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(12, 23); printf("  ");

        for (i = 11, j = 0; i <= 65; i = i + 6, j++) 
        {
            gotoxy(i, 6);
            scanf("%d", &VetA[j]);
        }

        for (i = 11, j = 0; i <= 65; i = i + 6, j++) 
        {
            gotoxy(i, 8);
            scanf("%d", &VetB[j]);
        }
		
        for (i = 0, lin = 16; i <= 10; i++)
        {
        	Achou = 1;
        	for (j = 0; j <= 10 && Achou; j++)
        	{
        		if (VetA[i] == VetB[j])
	            {
	                gotoxy(lin, 15);
	                printf("%d", VetA[i]);
	                gotoxy(lin, 17);
	                printf("%d", i);
	                lin = lin + 6;
	                Achou = 0;
	            }
			}
        }

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);
    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Vetores();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void OrdemVetor() {
	int OpcaoR, i, j;
    int VetA[10], VetB[10];
    int Aux;

    // Desenhar moldura
    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    // linha divisoria da entrada/saida
    DesenharLinhaHorizontal(Esquerda, 12, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    // Desenha as linhas na vertical
    for (i = Vertical; i < Altura; i++)
    {
        gotoxy(Esquerda, i);
        printf("=");
        gotoxy(Largura, i);
        printf("=");
    }

    gotoxy(25, 2);
    printf("Projeto CMP1046 - Ordem Vetor");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(3, 7);
    printf("Vet-A: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");
    
    gotoxy(3, 16); 
    printf("Ordem Crescente: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");
    
    do {
        gotoxy(3, 7);
        printf("Vet-A: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(3, 16); 
        printf("Ordem Crescente: [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ] [   ]");

        gotoxy(12, 23); printf("  ");

        for (i = 11, j = 0; i <= 65; i = i + 6, j++) 
        {
            gotoxy(i, 7);
            scanf("%d", &VetA[j]);
        }
        
        for (i = 0; i < 9; i++) {
            for (j = i + 1; j < 10; j++) {
                if (VetA[i] > VetA[j]) {
                    Aux = VetA[i];
                    VetA[i] = VetA[j];
                    VetA[j] = Aux;
                }
            }
        }
        
        for (i = 0, j = 21; i < 10; j = j + 6, i++) {
            gotoxy(j,16);
            printf("%d", VetA[i]);
        }
        
        gotoxy(12, 23);
        scanf("%d", &OpcaoR);
    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Vetores();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}

void VetorC()
{
    int OpcaoR = 1;
    int Primeira = 1; // flag
    int i, X;
    int A[10], B[10], C[10];

    DesenharLinhaHorizontal(Esquerda, 1, Largura);
    DesenharLinhaHorizontal(Esquerda, 3, Largura);
    DesenharLinhaHorizontal(Esquerda, 20, Largura);
    DesenharLinhaHorizontal(Esquerda, 22, Largura);
    DesenharLinhaHorizontal(Esquerda, 24, Largura);

    for (i = Vertical; i < Altura; i++)
    {
        gotoxy(Esquerda, i); printf("=");
        gotoxy(Largura, i);  printf("=");
    }

    gotoxy(28, 2);
    printf("Projeto CMP1046 - Soma de vetores");

    gotoxy(5, 21);
    printf("Mens [                                                                         ]");

    gotoxy(5, 23);
    printf("Opção [  ]");

    gotoxy(17, 23);
    printf("1 - Repetir   2 - Voltar ao menu   3 - Voltar ao menu principal");

    gotoxy(8, 5);  printf("A");
    gotoxy(18, 5); printf("+");
    gotoxy(28, 5); printf("B");
    gotoxy(38, 5); printf("=");
    gotoxy(48, 5); printf("C");

    do
    {
        gotoxy(12, 23); printf("  ");

        if (Primeira == 1)
        {
            // desenha os colchetes verticais vazios  
            for (i = 0; i < 10; i++)
            {
                gotoxy(8, 6 + i);  printf("[   ]");
                gotoxy(18, 6 + i); printf("+");
                gotoxy(28, 6 + i); printf("[   ]");
                gotoxy(38, 6 + i); printf("=");
                gotoxy(48, 6 + i); printf("[   ]");
            }

            // desenha os colchetes horizontais
            gotoxy(8, 17);  printf("A: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }

            gotoxy(8, 18);  printf("B: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }

            gotoxy(8, 19);  printf("C: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }
        }
        else
        {
            // laço que limpa apenas os números dentro dos colchetes 
            for (i = 0; i < 10; i++)
            {
                // limpa A 
                gotoxy(9, 6 + i); printf("   ");
                // limpa B 
                gotoxy(29, 6 + i); printf("   ");
                // limpa C 
                gotoxy(49, 6 + i); printf("   ");
            }

            // limpa números horizontais 
            gotoxy(8, 17);  printf("A: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }

            gotoxy(8, 18);  printf("B: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }

            gotoxy(8, 19);  printf("C: ");
            for (i = 0; i < 10; i++)
            {
                printf("[   ] ");
            }

            gotoxy(5, 21); printf("Mens [                                                                         ]");
        }

        // leitura A 
        for (i = 0; i < 10; i++)
        {
            gotoxy(9, 6 + i);
            scanf("%d", &A[i]);
            fflush(stdin);

            while (A[i] < 0 || A[i] >= 100)
            {
                gotoxy(11, 21); printf("A invalido");
                system("pause > null");
                    for (X = 11; X <= 80; X++)
                    {
                        gotoxy(X, 21);
                        printf("   ");
                    }
                    
                gotoxy(9, 6 + i);
                printf("   ");
                gotoxy(9, 6 + i);
                scanf("%d", &A[i]);
                fflush(stdin);
            }
        }

        // leitura B 
        for (i = 0; i < 10; i++)
        {
            gotoxy(29, 6 + i);
            scanf("%d", &B[i]);
            fflush(stdin);

            while (B[i] < 0 || B[i] >= 100)
            {
                gotoxy(11, 21); printf("B invalido");
                system("pause > null");
                    for (X = 11; X <= 80; X++)
                    {
                        gotoxy(X, 21);
                        printf("   ");
                    }
                gotoxy(29, 6 + i); 
                printf("   ");
                gotoxy(29, 6 + i);
                scanf("%d", &B[i]);
                fflush(stdin);
            }
        }

        // calcula C 
        for (i = 0; i < 10; i++)
        {
            C[i] = A[i] + B[i];
        }

        // imprime verticalmente C (substitui apenas o número dentro do colchete)
        for (i = 0; i < 10; i++)
        {
            gotoxy(49, 6 + i);
            printf("%3d", C[i]);
        }

        // imprime horizontal (mantendo colchetes)
        gotoxy(8, 17);
        printf("A: ");
        for (i = 0; i < 10; i++)
        {
            printf("[%3d] ", A[i]);
        }

        gotoxy(8, 18);
        printf("B: ");
        for (i = 0; i < 10; i++)
        {
            printf("[%3d] ", B[i]);
        }

        gotoxy(8, 19);
        printf("C: ");
        for (i = 0; i < 10; i++)
        {
            printf("[%3d] ", C[i]);
        }

        Primeira = 0;

        gotoxy(12, 23);
        scanf("%d", &OpcaoR);
        fflush(stdin);

    } while (OpcaoR == 1);

    while(1) {
        switch(OpcaoR) {
            case 2:
                system("cls");
                DesenharTela();
                Vetores();
                return;
            case 3:
                system("cls");
                DesenharTela();
                TelaInicial();
                return;
            default:
                gotoxy(11, 21);
                printf("Opção inválida!");
                system("pause > null");
                        for (i = 11; i <= 80; i++)
                        {
                            gotoxy(i, 21);
                            printf("   ");
                        }
                gotoxy(12, 23); 
                printf("  ");
                gotoxy(12, 23);
                scanf("%d", &OpcaoR);
                break;
        }
    }
}



