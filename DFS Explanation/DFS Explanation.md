## What is DFS?
- **Depth first Search or Depth first traversal** is a recursive algorithm for searching all the vertices of a graph or tree data structure. Traversal means visiting all the nodes of a graph.
- Unlike **BFS** in which we explore the nodes breadthwise, in **DFS** we explore the nodes depth-wise. In DFS we use a stack data structure for storing the nodes being explored. The edges that lead us to unexplored nodes are called ‘discovery edges’ while the edges leading to already visited nodes are called ‘block edges’.

- Time Complexity: 
  O( V + E )
  
 # Example, we will use the same graph that we used in the BFS illustration.
 
 ![Illustrations-with-traversals-step-1-1](https://user-images.githubusercontent.com/64387352/189496903-1a6f8b0e-084c-46fd-8e3c-9a567763f7ae.png)
 
- Let 0 be the starting node or source node. First, we mark it as visited and add it to the visited list. Then we push all its adjacent nodes in the stack.

![Illustrations-with-traversals-step-2-1](https://user-images.githubusercontent.com/64387352/189496921-7daf3b33-a5a6-42d7-9c2e-59cfbe2005ba.png)

- Next, we take one of the adjacent nodes to process i.e. the top of the stack which is 1. We mark it as visited by adding it to the visited list. Now look for the adjacent nodes of 1. As 0 is already in the visited list, we ignore it and we visit 2 which is the top of the stack.

![Illustrations-with-traversals-step-3-1](https://user-images.githubusercontent.com/64387352/189497360-13e49c72-1b16-4908-b780-07a97b39f9ce.png)

