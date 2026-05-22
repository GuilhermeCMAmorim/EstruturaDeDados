---
name: "Prática 07"
about: "Template para criar a issue da pratica07"
title: "[Prática 07] – Pilhas"
labels: ["pratica07"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar operações básicas de manipulação de pilhas FILO;
- Testar o funcionamento de uma pilha dinâmica para armazenamento dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica07
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica07`.
3. Desenvolva os arquivos solicitados:
- `pilha.h`: Definir o tipo `Pilha` e declarar os protótipos das funções `pilha_criar`, `pilha_empilhar`, `pilha_desempilhar`, `pilha_topo`, `pilha_esta_vazia`, `pilha_exibir` e `pilha_destruir`;
- `pilha.c`: Definir a struct interna `pilha_t` contendo o atributo `topo`, a struct interna `no_t` contendo os atributos `valor` e `proximo`, e implementar todas as funções do TDA; 
- `main.c`: Testar as operações do TDA criando uma pilha de valores inteiros, realizando empilhamento, desempilhamento, consulta do topo e exibição dos elementos.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica07`.
```bash
cd praticas/pratica07
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
git commit -m "feat: conclui pratica07. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica07
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei uma pilha em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica07/
    ├── pilha.c
    ├── pilha.h
    └── main.c
```