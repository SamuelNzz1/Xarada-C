# Xarada com Palavras em C

Este projeto é um jogo de adivinhação de palavras feito em C, onde o jogador deve adivinhar frases baseadas em dicas curtas. O jogo usa a biblioteca `conio.h` para manipular a tela, melhorando a experiência interativa do usuário.

## Funcionalidades

- **Jogo de Adivinhação**: O jogador deve adivinhar palavras com base em charadas fornecidas pelo jogo.
- **Interface Colorida**: Utiliza a biblioteca `conio.h` para cores de fundo e texto, enriquecendo a interface do usuário.
- **Controle de Tentativas**: Permite ao jogador tentar adivinhar cada charada e fornece feedback imediato sobre acertos ou erros.

## Tecnologias Utilizadas

- **C**: Linguagem de programação usada para desenvolver toda a lógica do jogo.
- **Biblioteca Conio.h**: Usada para manipulação de tela, incluindo limpeza de tela e coloração.
- **Biblioteca Locale.h**: Usada para configuração regional, permitindo exibição correta de caracteres acentuados.

## Pré-requisitos

Este projeto é desenvolvido para ambientes Windows, devido à dependência da biblioteca `conio.h` e suas funções como `clrscr()` e `gotoxy()`. Para compilar e executar este projeto, é necessário ter um compilador C compatível com Windows, como o MinGW ou o Visual Studio.

## Compilação e Execução

1. Clone o repositório ou baixe os arquivos do projeto para sua máquina local.
2. Abra o prompt de comando ou terminal e navegue até o diretório do projeto.
3. Compile o projeto usando o seguinte comando:
   ```bash
   gcc -o xarada xarada.c -lconio
