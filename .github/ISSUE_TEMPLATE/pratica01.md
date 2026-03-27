---
name: "Prática 01"
about: "Template para criar a issue da pratica01"
title: "[Prática 01] – Metodologia de Desenvolvimento de Algoritmos"
labels: ["pratica01"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Resolver problemas aplicando a metodologia de desenvolvimneto de algoritmos;
- Testar e validar programas utilizando diferentes entradas e saídas esperadas;
- Praticar o fluxo real de desenvolvimento: **Branch -> Code -> Pull Request**.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica01
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica01`.
3. Desenvolva os arquivos solicitados:
- `imc.c`: Ler o peso e a altura de uma pessoa, calcular o IMC e informar a situação dela conforme a escala `abaixo do peso` (< 18.5), `peso normal` (18.5 até 24.9), `sobrepeso` (25.0 até 29.9) ou `obesidade` (30.0+);
- `potencia.c`: Ler uma base e um expoente inteiro positivo e calcular a potência da base elevada ao expoente sem usar funções prontas.
- `media_artimetica.c`: Ler um número inteiro n e calcular a média aritmética de n números informados pelo usuário. O valor máximo permitido para n é 100.
- `caixa_eletronico.c`: Ler o valor de um saque e calcular a quantidade de notas necessárias nas cédulas de 200, 100, 50, 20, 10, 5 e 2, utilizando a menor quantidade possível de notas. O valor máximo permitido para saque é 1000.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica01`.
```bash
cd praticas/pratica01
```
2. Compile e execute cada programa:
```bash
gcc nome_do_arquivo.c -lm -o a.out
./a.out
```

## 📤 Entrega da Prática
1. Abra outro terminal do VSCode (isso garante que você esteja na pasta raiz).
2. Adicione os arquivos ao controle de versão e grave suas alterações.
```bash
git add .
git commit -m "feat: conclui pratica01. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica01
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei programas em C aplicando a metodologia de desenvolvimento de algoritmos. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica01/
    ├── caixa_eletronico.c
    ├── imc.c
    ├── media_artimetica.c
    └── potencia.c
```