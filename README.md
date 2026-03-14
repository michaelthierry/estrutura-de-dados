# Estrutura de dados
![C](https://img.shields.io/badge/Linguagem-C-blue)
![GCC](https://img.shields.io/badge/Compilador-GCC-red)
![Linux](https://img.shields.io/badge/Sistema-Linux-green)
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

Projeto educacional com implementações de **Estruturas de Dados em linguagem C**, com foco em aprendizado e clareza na explicação dos conceitos.

---

# 📚 Sumário

- [Sobre](#sobre)
- [Estruturas Implementadas](#estruturas-implementadas)
- [Instalação](#instalação)
- [Como Executar](#como-executar)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Exemplo de Execução](#exemplo-de-execução)
- [Dúvidas ou Sugestões](#dúvidas-ou-sugestões)

---

## Sobre
Este é um projeto sobre **Estruturas de Dados em linguagem C**. O objetivo é apresentar e implementar diversas estruturas de dados, buscando explicar seu funcionamento de forma **clara, simples e didática**, especialmente para quem possui dificuldade com o assunto.

Em cada estrutura recomendamos que você **leia primeiro o arquivo README** antes de analisar o código. Nele você encontrará uma explicação introdutória que ajudará na compreensão dos conceitos utilizados na implementação.

Cada estrutura do projeto segue uma **linha de evolução por versões**. Sempre que uma estrutura estiver finalizada, será adicionada uma **tag de versão**.

Exemplo:

**Fila – v1.0.0**

Isso significa que a implementação foi concluída e está pronta para execução. Normalmente o projeto estará disponível em um **arquivo compactado (.zip)**. Basta baixá-lo e extrair em sua máquina.

---

# Estruturas Implementadas

| Estrutura | Status | Versão |
|-----------|--------|--------|
| Lista Sequencial | Em desenvolvimento | - |
| Lista Encadeada | Em desenvolvimento | - |
| Pilha | Em desenvolvimento | - |
| Fila | Em desenvolvimento | - |
| Árvore | Planejado | - |

*(A tabela será atualizada conforme o desenvolvimento do projeto.)*

---

## Instalação

Para executar as estruturas é recomendado utilizar um **sistema Linux**.

Também é necessário ter instalado os **pacotes essenciais de desenvolvimento**, que incluem o compilador GCC e outras ferramentas importantes.

Caso ainda não tenha instalado, execute:

```shell
sudo apt-get install build-essential
```
Após a instalação, verifique se o compilador foi instalado corretamente com o comando:
```shell
gcc -v
```
Você deverá ver algo semelhante a:
```
gcc version 13.3.0
```
Se tudo ocorreu corretamente, navegue até a pasta da estrutura baixada e execute:
```shell
make run
```
Toda a compilação necessária será realizada automaticamente (supondo que tudo tenha dado certo — afinal, estamos usando C 😄).

Após isso, a aplicação será executada e exibirá um menu de opções para utilização da estrutura.

Vale lembrar que cada estrutura possui seu próprio conjunto de opções, que também pode variar entre as versões.

## Como Executar

Entre na pasta da estrutura desejada:
```shell
cd estrutura
```

Execute o comando:
```shell
make run
```

O Makefile irá:

- Compilar o projeto

- Gerar o executável

- Executar o programa

Após isso será exibido um menu interativo com as opções da estrutura.

---

## Estrutura do Projeto

Exemplo de organização de uma estrutura:
```
estrutura/
│
├── src/
│   ├── main.c
│   └── estrutura.c
│
├── include/
│   └── estrutura.h
│
├── Makefile
└── README.md
```
---

## Exemplo de Execução
```shell
make run
```

Saída no terminal:
```shell

===== MENU =====

1 - Inserir elemento
2 - Remover elemento
3 - Mostrar estrutura
0 - Sair

Escolha uma opção:
```

## Dúvidas ou sugestões

Se tiver alguma dúvida ou sugestão, fique à vontade para entrar em contato por e-mail. Assim que possível responderei.

Até mais!