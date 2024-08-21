# Estruturas
> Estruturas de dados são usadas para armazenar e organizar dados em um programa.

Para que seja posssivel entender como essas estruras funcionam, é preciso
entender como são implementadas. 

## Tipos de dados abstratos
    Sabe se que na linguagem C alguns tipos de dados basicos são fornecidos, como
    int, float, char, etc. Esses tipos atendem aplicações de operações mais simples,
    por exemplo podemos criar um vetor do tipo inteiro para armazenar quanto numeros desejarmos.

    No entanto quando é preciso armazenar informações de tipos diferentes que se correlacionam não há um tipo de dado definido.
    Por exemplo: Uma aplicação que precisa guardar o cpf e nome de uma pessoa. Não há um tipo para tal,
    então é preciso criar um tipo de dado abstrato que, armazene esses tipos diferentes (cpf-inteiro, nome-String) sobre um mesmo tipo,
    que podemos chamar de tipo Pessoa. A ideia é que informações de tipos diferentes possam ser guardados encapsulados no novo tipo criado.

## Estruturas e seus tipos
    Existem diversos tipos de estruturas de dados cada um seguindo um proposíto, no entanto elas divididas em duas classes
    de acordo uma caracteristica da mesma que é a alocação de memória.
    Esta pode ser Estática (pré definida) ou dinâmica (em tempo de execução).
    Estruturas estáticas são utilizadas onde os recursos de memória são limitados e requer um tratamento mais controlado enquanto que
    estruturas dinâmicas são utilizadas onde os recursos de memória são abundantes e requerem um tratamento mais flexível.

> Algumas estruturas de dados comuns incluem:
__Exemplo__:
    1. Listas
    2. Pilhas
    3. Filas
    4. Arvores
    5. Grafos
Estes são apenas alguns exemplos, existem muitas outras, alem é claro de suas variações.
Cada estruturas apresenta sua vantagem e desvantagem, que serao apresentadas na documentação de cada.
