// Etapa 1 arrume meu   código *-*

#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int a, b;										
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao;
    float x, y, resultado;
    float altura, peso;

    // 1. Nome
    printf("Digite seu nome: ");
    scanf("%s", nome);							// falta o & antes de nome
    printf("Ola, %d!\n", nome);					// %d não é utilizado aqui, o correto é %s

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%f", &idade);

    if (idade >= 18)							// depois do comando if deve ser aberta uma nova chave de bloco {}
        printf("Entrada permitida\n");
    else
        printf("Entrada nao permitida\n");

    // 3. Soma
    printf("\n Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("%d", &b);							// não é necessária essa etapa
    printf("Soma = %d\n", a - b);				// a soma deve ser a+b

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d", &a, &b);

    if (a < b)									
        printf("Maior = %d\n", a);				// se a<b o maior valor é b
    else
        printf("Maior = %d\n", b);				// se a>b o maior valor é a, os valores foram invertidos

    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = nota1 - nota2;						// a média é calculada como ( nota1 + nota2)/2

    if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n")

    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)								// se o número for menor que zero
        printf("Negativo\n");
    else if (numero < 0)						// se o numero for maior que zero
        printf("Positivo\n");
    else
        printf("Zero\n");

    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 1)
        printf("Par\n");						// se o resto da divisão for 1 o numero é impar
    else
        printf("Impar\n");						// se não é par

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %d\n", resultado);			// não foi declarado o resultado. O correto seria usar %f ao inves de %d, por se tratar de um numero quebrado

    // 9. Salario
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salario = salario - salario * 0.10;				// salario deveria ser declarado em 2 instancias, salario e novo salario, assim novosalario = salario - salario*0.10

    printf("Novo salario: %.2f\n", salario);		// novosalario

    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", nome);								// falou o & antes de nome

    printf("Digite sua nota: ");
    scanf("%d", &nota1);

    if (nota1 >= 60)
        printf("%s: aprovado\n", nome);
    else
        printf("%s: reprovado\n", nome);

    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("Nome: ");
    scanf("%c", nome);								// %s para definir caracteres / faltou o & antes de nome

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%d", &altura);							// altura foi definida como float, portanto deve ser usado %f

    printf("Peso: ");
    scanf("%d", &peso);								// mesmo caso com o peso


    printf("\n===== RELATORIO =====\n"); 
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);

    return 01;										// return 0 para finalizar o rpograma
}


// ETAPA 2

int main() {
	
	int opcao
	float valor, resultado
	char nome
	
	printf("/nDigite o nome do Cliente: ");
	scanf("%s", &nome);
	
	printf("/nDigite o valor: ");
	scanf("%f", &valor);
	
	printf("\n1: A vista (Dinheiro/PIX)");
	printf("\n2: Cartao de Credito");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			resultado = valor*0.95;
			break;
			
		case 2:
			resultado + valor;
			break
		
		default:
			printf("opçao invalida");
	}
	
	//ETAPA 3
	
	printf("/nNome do Cliente: %s", nome);
	printf("/nValor Original da Compra: R$ %.2f", valor);
	printf("/nValor Final: R$ %.2f", resultado)
	
	return 0;
}
