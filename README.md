# Triângulo de Pascal sem desperdício 🔺

Este repositório contém um programa desenvolvido em **C** que gera e imprime o **Triângulo de Pascal** utilizando **alocação dinâmica de memória** para matrizes irregulares , e o melhor: sem desperdício de espaço!

##  Sobre o Projeto

O objetivo principal deste exercício é praticar conceitos avançados de programação em C, tais como:
- Uso de ponteiros para ponteiros (`int **`).
- Alocação dinâmica com `malloc` dimensionada estritamente ao tamanho necessário para cada linha (`i + 1` colunas).
- Manipulação de índices em matrizes triangulares.
- Gerenciamento correto de memória para evitar vazamentos (*memory leaks*) utilizando `free`.

##  Como Compilar e Executar

Certifique-se de ter um compilador C (como o GCC) instalado no seu sistema.

1. **Clone o repositório** (ou baixe o arquivo `.c`):
   ```bash
   git clone [https://github.com/SEU-USUARIO/Triangulo-de-Pascal-sem-desperdicio.git](https://github.com/SEU-USUARIO/Triangulo-de-Pascal-sem-desperdicio.git)
   cd Triangulo-de-Pascal-sem-desperdicio

   Compile o código (substitua codigo.c pelo nome do seu arquivo):
    Bash

    gcc codigo.c -o pascal

    Execute o programa:
    Bash

    ./pascal

📋 Exemplo de Uso

Entrada:
Plaintext

5

Saída:
Plaintext

1 

1 1

1 2 1 

1 3 3 1

1 4 6 4 1 

 Tecnologias Utilizadas

    Linguagem C

    Alocação Dinâmica (stdlib.h)

    Entrada e Saída Padrão (stdio.h)


<FollowUp label="Precisa de ajuda com os comandos do Git para
