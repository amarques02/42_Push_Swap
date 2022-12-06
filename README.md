# 42_Push_Swap

<div align="center"><br>
  <img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="650" height="300">
</div>
</br>
<p> The Push_swap project is a "simple" and very effective algorithm project: you will need to sort data from a stack.
</br> The program takes a set of int values, 2 stacks and few instructions to manipulate the stacks. The final goal is to calculate and display the sorted stack.</p>
<p> Clone the project:</p>

```bash
git clone https://github.com/amarques02/42_Push_Swap.git
```
<p> To run, use make to compile and pass the arguments you want as showed:</p>

```bash
make && ./push_swap -5 1273 2 0 -1 523 10 8345
```
<p> Make sure to:
<ul>
	<li>Use integers only (don't overflow, or use floats and doubles)</li>
	<li>Use unique values (no duplicated numbers are accepted)</li>
</ul>
Otherwise you will receive an Error message.
</p>
<p> The program will print all the movements done to sort the received stack.
</br> Here is an explanation of the movements used:
<ul>
  <li><p> <code>Swap</code> Swaps the position of the 2 numbers on top of the stack. You can <code>sa</code> (swap the top of a stack), <code>sb</code> (swap the top of b stack) and <code>ss</code> (swaps the top of both stacks at the same time).</p>
  <li><p> <code>Push</code> Removes the number on top of one stack and push it to the top of the other stack. You can <code>pa</code> (removes from b, and push to a), <code>pb</code> (removes from a and pushes it to b).</p>
  <li><p> <code>Rotate</code> Takes the top number of the stack and puts it at the bottom. Every number shifts 1 position up. You can <code>ra</code> (rotate the a stack), <code>rb</code>(rotate the b stack) and <code>rr</code> (rotate both stacks at the same time).</p>
  <li><p> <code>Reverse Rotate</code> Does the opposite of <code>Rotate</code>, Takes the bottom number of the stack and puts it at the top. Every number shifts 1 position down , you can <code>rra</code> (reverse rotate the a stack), <code>rrb</code> (reverse rotate the b stack) and <code>rrr</code> (reverse rotate both stacks at the same time).</p>
</ul>
</p>
