---
name: "Prática 05"
about: "Template para criar a issue da pratica05"
title: "[Prática 05] – Algoritmos de Seleção"
labels: ["pratica05"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar algoritmos clássicos de seleção;
- Testar e comparar diferentes algoritmos de seleção com o mesmo conjunto de dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica05
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica05`.
3. Desenvolva os arquivos solicitados:
- `selecao.h`: Declarar os protótipos das funções de seleção `linear_search` e `quick_select`;
- `selecao.c`: Implementar os algortimos de seleção;
- `main.c`: Gerar um vetor com 100 números inteiros aleatórios, aplicar cada algoritmo de seleção e calcular o seu tempo de execução.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica05`.
```bash
cd praticas/pratica05
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
git commit -m "feat: conclui pratica05. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica05
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei e comparei algoritmos clássicos de seleção em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica05/
    ├── selecao.c
    ├── selecao.h
    └── main.c
```