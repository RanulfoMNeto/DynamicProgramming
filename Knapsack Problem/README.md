# O Problema da Mochila

Dada uma mochila de capacidade $W$ e um conjunto de $n$ itens com peso $w_i$ e valor de utilidade $v_i$ associado a cada item $i$, pretendemos determinar um subconjunto de itens que serão alocados de modo a maximizar a utilizade da mochilha:

$\sum^{n}_{i=1}x_iv_i$, sob restrição $\sum^{n}_{i=1}x_iw_i \le W$.

Onde $0 \le w_i \le W$, para todo $i = 1,...,n$.

## O Problema da Mochila Binário

Nesse caso, considere a variável $x_j$ de maneira que, se o item $j$ é alocado na mochila então $x_j = 1$, caso contrário, então $x_k = 0$.

max $\sum^{n}_{i=1}x_iv_i$, sob restrição $\sum^{n}_{i=1}x_iw_i \le W$ onde $x_j \in {\{0,1\}}$.

## O Problema da Mochila Ilimitado

Nesse caso, considere a variável $x_j$ de maneira que, não existe nenhuma restrição quanto a quantidade máxima do mesmo item a ser alocado.

max $\sum^{n}_{i=1}x_iv_i$, sob restrição $\sum^{n}_{i=1}x_iw_i \le W$ onde $x_j \in \mathbb{N}$.