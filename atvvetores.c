#include <stdio.h>

int main()
{
    int i; //variavel contadora
    int n = 5; //variavel iniciada com 5 -> 5 funcionarios
    float salario[5]; // salario de cada funcionario -> 5 Salarios /// array, aqui vai armazenar o salario de 5 funcionarios

    for (i=0; i<n; i++) //usando para coletar o salario de cada funcionario
    {
        printf("Informe o salario de cada funcionario: %i ->", i); // a cada loop o usuario vai ter que inserir o salario de um funcionario
        scanf("%f", &salario[i]); // leitura do salario do funcionario e armazenando no valor do array -> salario[i]
    }

    for (i=0; i<n; i++) //loop para imprimir o salario de cada funcionario vai de 0 a 4. -> o 0 conta também
    {
        printf("O salario do funcionario %i e %2.f\n", i, salario[i]); // vai exibir o salario de todos funcionarios de 0 a 4.
    }
    return 0;
}
