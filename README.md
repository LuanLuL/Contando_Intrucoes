<h1><b>Contando Intruções</b></h1>
	
<p style="text-aling: center; ">Buscando revisar alguns conceitos de programação, foi realizado este pequeno projeto, em que é trabalhado uma filosofia de algoritmos chamada algoritmos gulosos. Neste trabalho caminhamos por uma matriz objetivando sempre a busca pelos maiores valores segundo as regras implementadas, objetivando com isso:</p>

<div style="margin: 30px 30px 30px 30px;"><p>(1) revisar os conceitos de programação básica;</p><p>(2) iniciar um cenário de questionamentos para identificar se realmente estou implementando de uma forma otimizada e; </p><p>(3) iniciar uma busca em torno de boa estruturação de código</p></div>

<h3>Problemática</h3>
<p>Elabore um pequeno programa que utilize uma matriz N x N, com o valor de N fornecido como entrada do programa, para executar a seguinte operação:</p>

<div style="margin: 30px 30px 30px 30px;"><p>1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;</p>
<p>2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;</p>
<p>3) - Considere a posição (N, N) como posição final;</p>
<p>4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;</p>
<p>5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;</p>
<p>5.1) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima.</p>
<p>6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.</p
<p>Observe um exemplo logo abaixo para uma matriz com N = 7.</p></div>

<img src="img/Exemplo.png"/>

<h3>Solução</h3>
