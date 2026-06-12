---
name: "Prática 04"
about: "Template para criar a issue da pratica04"
title: "[Prática 04] – Algoritmos de Ordenação"
labels: ["pratica04"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar algoritmos clássicos de ordenação;
- Testar e comparar diferentes algoritmos de ordenação com o mesmo conjunto de dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica04
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica04`.
3. Desenvolva os arquivos solicitados:
- `ordenacao.h`: Declarar os protótipos das funções de ordenação `bubble_sort`, `selection_sort` e `quick_sort`;
- `ordenacao.c`: Implementar os algortimos de ordenação;
- `main.c`: Gerar um vetor com 100 números inteiros aleatórios, aplicar cada algoritmo de ordenação e calcular o seu tempo de execução.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica04`.
```bash
cd praticas/pratica04
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
git commit -m "feat: conclui pratica04. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica04
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei e comparei algoritmos clássicos de ordenação em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica04/
    ├── ordenacao.c
    ├── ordenacao.h
    └── main.c
```