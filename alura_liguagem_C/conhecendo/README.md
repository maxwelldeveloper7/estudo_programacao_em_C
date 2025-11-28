# Jogo de Adivinhação em C

Um jogo simples de adivinhação desenvolvido em linguagem C onde o jogador deve descobrir um número secreto gerado aleatoriamente.

## 📋 Descrição

O jogo gera um número aleatório entre 0 e 99 e desafia o jogador a descobri-lo através de tentativas. O programa oferece três níveis de dificuldade com diferentes quantidades de tentativas permitidas.

## 🎮 Como Jogar

1. Execute o programa
2. Escolha o nível de dificuldade:
   - **Fácil (1)**: 20 tentativas
   - **Médio (2)**: 15 tentativas  
   - **Difícil (3)**: 6 tentativas
3. Digite seus palpites quando solicitado
4. O jogo informará se seu chute foi maior ou menor que o número secreto
5. Continue até acertar ou esgotar as tentativas

## 🏆 Sistema de Pontuação

- Pontuação inicial: 1000 pontos
- A cada tentativa errada, você perde pontos baseado na diferença entre seu chute e o número secreto
- Fórmula: `pontos perdidos = |chute - número secreto| / 2`

## 🛠️ Compilação e Execução

```bash
gcc adivinhacao.c -o adivinhacao
./adivinhacao
```

## 📚 Conceitos Utilizados

- Geração de números aleatórios com `rand()` e `srand()`
- Estruturas de controle (`for`, `switch`, `if-else`)
- Entrada e saída formatada (`printf`, `scanf`)
- Manipulação de tempo com `time()`
- Limpeza de tela com códigos ANSI

## 🔧 Funcionalidades

- ✅ Geração aleatória do número secreto
- ✅ Três níveis de dificuldade
- ✅ Sistema de pontuação dinâmico
- ✅ Validação de entrada (números negativos)
- ✅ Interface limpa no terminal
- ✅ Feedback sobre os palpites

## 📝 Exemplo de Execução

```
******************************************
* Bem vindo ao nosso jogo de adivinhação *
******************************************

Escolha o nível de dificuldade:
(1) Fácil (2) Médio (3) Difícil

Escolha: 2
Tentativa 1
Qual é o seu chute? 50
Seu chute foi 50
Seu chute foi maior que o número secreto!
```