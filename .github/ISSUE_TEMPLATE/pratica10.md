---
name: "Prática 10"
about: "Template para criar a issue da pratica10"
title: "[Prática 10] – Tabelas Hash"
labels: ["pratica10"]
assignees: ''
---

## 🎯 Objetivo
Nesta prática, você irá:
- Implementar operações básicas de manipulação de tabelas hash;
- Implementar o tratamento de colisões utilizando encadeamento;
- Testar o funcionamento de uma tabela hash para armazenamento dados.

## 📝 Instruções da Atividade
**1️⃣ Preparação do ambiente**
1. Abra o **Visual Studio Code** na pasta do seu repositório.
2. Abra um terminal e certifique-se de que está na branch `develop`.
```bash
git checkout develop
```
3. Crie e alterne para a branch desta prática.
```bash
git checkout -b feature/pratica10
```

**2️⃣ Implementação do código**
1. No painel esquerdo do VSCode, localize a pasta `praticas`.
2. Crie uma nova pasta chamada `pratica10`.
3. Desenvolva os arquivos solicitados:
- `tabela_hash.h`: Definir o tipo `TabelaHash` e declarar os protótipos das funções `hash_criar`, `hash_inserir`, `hash_buscar`, `hash_remover`, `hash_exibir`, `hash_esta_vazia` e `hash_destruir`;
- `tabela_hash.c`: Definir a struct `hash_t` contendo os atributos `tabela` e `tamanho`, a struct interna `no_t` contendo os atributos `valor` e `proximo`, e implementar todas as funções do TDA; 
- `main.c`: Testar as operações do TDA criando uma tabela hash de valores inteiros, realizando inserção, remoção, busca e exibição de elementos.

**3️⃣ Compilação e execução**
1. No terminal, acesse a pasta da `pratica10`.
```bash
cd praticas/pratica10
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
git commit -m "feat: conclui pratica10. Fecha #ID"
```
3. Envie suas alterações para o GitHub.
```bash
git push origin feature/pratica10
```
4. No GitHub, clique no botão **Compare & pull request**.
5. **Importante**: Certifique-se de que o **base repository** é o seu repositório e a **base branch** é a `develop`.
6. Na descrição, escreva: `Nesta prática, implementei uma tabela hash com tratamento de colisões em C. Fecha #ID`.
7. Clique em **Create pull request** e envie o link do PR na plataforma de ensino para o professor.

## 📂 Estrutura Final
Seu repositório deve ficar assim:
```text
praticas/
└── pratica10/
    ├── tabela_hash.c
    ├── tabela_hash.h
    └── main.c
```