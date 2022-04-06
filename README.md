

> Status: Developing ⚠️

# Exercício de Laboratório

## descrição

<body>
  <p> O código foi projetado usando um algoritmo guloso. A ideia é percorrer a matriz com início na posição [0][0] 
  até o fim na poição [N][N] definida pelo usuário, somando os maiores números contidos na matriz.</p>
</body>

## instruções
<body>
  <ol>
    
       1- Preenche a matriz N x N com números inteiros aleatórios de 0 a 99</li>

       2- Considere a posição Linha 0 e Coluna 0 (0,0) como início;

       3- Considere a posição (N, N) como posição final;

       4- Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

       5- O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

       5.1-Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

       6 - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.


  </ol>
</body>

![Problema](https://user-images.githubusercontent.com/102326098/161875973-d90862f2-a1d5-44b6-a233-9736e4837961.png)


## Perguntas
<body>
  <ol>
  1- Há mais de uma maneira de resolver esse problema ?<br/>
    Resposta: Sim, com ponteiros ou usando outros tipos de algoritmos.<br/><br/>
    
  2- Há algoritmos em literatura que resolvam esse problema ?<br/>
    Resposta:hob<br/><br/>
  3- Pode existir mais de um caminho cujo valor total é o maximo?<br/>
    Resposta: Sim, quando os valores da matriz são iguais.<br<br/>
  </ol>
</body>

## Tecnologias usadas:

<table>
  <tr>
    <td>c++</td>
  </tr>
  
</table>

## Compilação e Execução 

A pilha dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
