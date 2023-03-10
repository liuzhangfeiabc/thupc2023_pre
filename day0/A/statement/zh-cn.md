{{ self.title() }}

{{ s('background') }}

有一天，小W和小H在玩大富翁。

{{ s('description') }}

这版大富翁的游戏规则比较独特。它的地图是一棵$n$个节点的有根树，其中$1$号节点为根。树上每个节点都有一个价格，第$x$号节点的价格记为$w_x$。

对于树上两个不同的节点$x,y$，若$x$是$y$的祖先节点（即，$x$在$1$号点到$y$号点的简单路径上），则称$x$**支配**$y$。

游戏过程中，小W和小H轮流**购买**树上的一个未被人购买过的节点，直到树上的$n$个节点都被小W或小H购买。（游戏开始前，树上的所有节点都没有被购买。）

对于一次购买，假设买方购买了$x$号节点，那么他首先要向系统支付$w_x$个游戏币。假设此时$x$支配着$n_1$个已被买方的对手购买了的节点，同时又被$n_2$个已被对手购买了的节点支配。若$n_1>n_2$，那么对手要向买方支付$n_1-n_2$个游戏币，若$n_1<n_2$，那么买方要向对手支付$n_2-n_1$个游戏币。

小W和小H都是绝顶聪明的人，他们都会在游戏中采用最优策略，来使自己赚到尽量多的游戏币。现在，小W想考考你：如果他先手，他最终能赚到多少个游戏币？（即，在整个游戏过程中，小W从小H手中获得的游戏币个数减去他支付给系统和小H的游戏币个数。你可以认为，游戏开始前，小H和小W手中都有足够数量的游戏币。注意：答案可能为负数。）

{{ s('input format') }}

{{ self.input_file() }}

第一行一个正整数$n$。

第二行$n$个非负整数，第$i$个整数为$i$号节点的价格$w_i$。

第三行$n-1$个正整数，第$i$个正整数表示第$i+1$号节点的父亲编号。

{{ s('output format') }}

{{ self.output_file() }}

一行一个整数表示答案。

{{ s('sample', 1) }}

{{ self.sample_text() }}

{{ self.title_sample_description() }}

一个可能的游戏过程是：

- 第一次购买：小W购买$1$号节点，向系统支付$0$个游戏币。
- 第二次购买：小H购买$2$号节点，向系统支付$0$个游戏币，并向小W支付$1$个游戏币。
- 第三次购买：小W购买$3$号节点，向系统支付$1$个游戏币。
- 第四次购买：小H购买$4$号节点，向系统支付$0$个游戏币，并向小W支付$1$个游戏币。
- 第五次购买：小W购买$6$号节点，向系统支付$0$个游戏币。
- 第六次购买：小H购买$5$号节点，向系统支付$0$个游戏币，并向小W支付$1$个游戏币。
- 第七次购买：小W购买$7$号节点，向系统支付$0$个游戏币。

{{ s('sample', 2) }}

{{ self.sample_file() }}

{{ s('subtasks') }}

对于所有测试数据，$1\leq n\leq 2\times 10^5$，$0\leq w_x\leq 2\times 10^5$。保证输入的图为一棵以$1$号节点为根的有根树。