# Estruturas
> Estruturas de dados são usadas para armazenar e organizar dados em um programa.

Para que seja posssivel entender como essas estruras funcionam, é preciso
entender como são implementadas. 

## Tipos de dados abstratos (TAD)
Um Tipo Abstrato de Dados (TAD) é uma definição teórica de uma estrutura de dados, focada nas operações que podem ser realizadas e no comportamento esperado, sem se preocupar com sua implementação específica. <br>

### O que especifíca
**Conjunto de operações :** como inserir, remover, acessar ou modificar dados.
**Regras :** Como os dados são organizados e manipulados.
**Ocultação da implementação :** A melhoria dos detalhes internos (como os dados são armazenados) é oculta, permitindo flexibilidade para alterar a implementação sem afetar o uso.

## Estruturas e seus tipos
Existem diversos tipos de estruturas de dados cada um seguindo um proposíto, no entanto elas divididas em duas classes
de acordo uma caracteristica da mesma que é a alocação de memória.
Esta pode ser Estática (pré definida) ou dinâmica (em tempo de execução).
Estruturas estáticas são utilizadas onde os recursos de memória são limitados e requer um tratamento mais controlado enquanto que
estruturas dinâmicas são utilizadas onde os recursos de memória são abundantes e requerem um tratamento mais flexível.

### Tipos de estruturas

Algumas estruturas de dados comuns incluem:

__Exemplos__:<br>
    1. Listas<br>
    2. Pilhas<br>
    3. Filas<br>
    4. Arvores<br>
    5. Grafos<br>

Estes são apenas alguns exemplos, existem muitas outras, alem é claro de suas variações.
Cada estruturas apresenta sua vantagem e desvantagem, que serao apresentadas na documentação de cada.

**Arquivos ".h"**: protótipos das funções, tipo de ponteiros, e dados globalmente acessível.

**Arquivos ".c"**: declaração do tipo de dados e implementação das suas funções.

Assim é separado o "conceito" de sua "implementação".
