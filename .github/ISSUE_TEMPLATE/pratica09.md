---
name: "Prática 09"
about: "Template para criar a issue da pratica09"
title: "[Prática 09] – Árvores"
labels: ["pratica09"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar operações básicas de manipulação de árvores binárias;
- Implementar diferentes formas de percurso em uma árvore binária;
- Testar o funcionamento de uma árvore binária para armazenamento dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica09
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica09`.
3. Desenvolva os arquivos solicitados:
- `arvore_binaria.h`: Definir o tipo `Arvore` e declarar os protótipos das funções `arvore_criar`, `arvore_inserir`, `arvore_exibir_pre_ordem`, `arvore_exibir_em_ordem`, `arvore_exibir_em_ordem`, `arvore_esta_vazia` e `arvore_destruir`;
- `arvore_binaria.c`: Definir a struct `arvore_t` contendo o atributo `raiz`, a struct interna `no_t` contendo os atributos `esquerda`, `valor` e `direita`, e implementar todas as funções do TDA; 
- `main.c`: Testar as operações do TDA criando uma árvore binária de valores inteiros, realizando inserção e exibição de elementos nos diferentes percursos.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica09`.
```bash
cd praticas/pratica09
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
git commit -m "feat: conclui pratica09. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica09
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei uma árvore binária em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica09/
    ├── arvore_binaria.c
    ├── arvore_binaria.h
    └── main.c
```