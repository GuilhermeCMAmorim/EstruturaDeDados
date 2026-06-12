---
name: "Prática 08"
about: "Template para criar a issue da pratica08"
title: "[Prática 08] – Filas"
labels: ["pratica08"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar operações básicas de manipulação de filas FIFO;
- Testar o funcionamento de uma fila dinâmica para armazenamento dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica08
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica08`.
3. Desenvolva os arquivos solicitados:
- `fila.h`: Definir o tipo `Fila` e declarar os protótipos das funções `fila_criar`, `fila_enfileirar`, `fila_desenfileirar`, `fila_inicio`, `lista_exibir`, `fila_esta_vazia` e `fila_destruir`;
- `fila.c`: Definir a struct `fila_t` contendo os atributos `inicio` e `fim`, a struct interna `no_t` contendo os atributos `valor` e `proximo`, e implementar todas as funções do TDA; 
- `main.c`: Testar as operações do TDA criando uma fila de valores inteiros, realizando enfileiramento, desenfileiramento, consulta do início e exibição dos elementos.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica08`.
```bash
cd praticas/pratica08
```
2. Compile e execute cada programa:
```bash
gcc *.c -lm -o a.out
./a.out
```

## 📤 Entrega da Prática
1. Abra outro terminal do VSCode (isso garante que você esteja na pasta raiz).
2. Adicione os arquivos ao controle de versão e grave suas alterações.
```bash
git add .
git commit -m "feat: conclui pratica08. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica08
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei uma fila em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica08/
    ├── fila.c
    ├── fila.h
    └── main.c
```