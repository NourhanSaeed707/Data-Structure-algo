# Heap Data Structure
- Heap data structure is a **complete binary tree** that satisfies the heap property, where any given node is
. **Complete binary tree** is a binary tree in which all the levels are completely filled except possibly the lowest one, which is filled from the left.
- **A complete binary tree is just like a full binary tree, but with two major differences:**

- All the leaf elements must lean towards the left.
- The last leaf element might not have a right sibling i.e. a complete binary tree doesn't have to be a full binary tree.

![download](https://user-images.githubusercontent.com/64387352/190855701-77ee4007-df1d-4f9b-a5c5-5e541e3e058a.png)

- **Heap data structure** is a **complete binary tree** that satisfies the heap property, where any given node is:
- **Max heap property** the parent node’s value must be greater than or equal to both of its child nodes.
 
![max_heap_example](https://user-images.githubusercontent.com/64387352/190857618-f9c9f5b9-07a4-4ddd-a310-b67ea1f5bdd2.jpg)

- **Min heap property** the parent node’s value must be less than or equal to both of its child nodes.

![min_heap_example](https://user-images.githubusercontent.com/64387352/190857631-33571f70-78e7-45a0-9348-e8e043c3faca.jpg)

## Note:
- Heap Property: Heap tree can't have both Min Heap and Max Heap if tree has both of (Min heap, MaxHeap) that mean it doesn't heap property

# Operations of Heap Data Structure:
- **Heapify:** a process of creating a heap from an array.
- **Insertion:** process to insert an element in existing heap time complexity O(log N).
- **Deletion:** deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).
- **Peek:** Peek operation returns the maximum element from Max Heap or minimum element from Min Heap without deleting the node.

## When would I want to use a heap?
- We use it whenever you need quick access to the largest (or smallest) item, because that item will always be the first element in the array or at the root of the tree, **heaps** allow you to pull the smallest or the biggest and quickly know the NEXT smallest or biggest. That's why it's called **a Priority Queue**.

# Real world example (not very fair world, though):
Suppose you have a hospital in which patients are attended based on their ages. The oldest are always attended first, no matter when he/she got in the queue.

You can't just keep track of the oldest one because if you pull he/she out, you don't know the next oldest one. In order to solve this hospital problem, you implement a max heap. This heap is, by definition, partially ordered. This means you cannot sort the patients by their age, but you know that the oldest ones are always in the top, so you can pull a patient out in constant time O(1) and re-balance the heap in log time O(log N).

# Heap Data Structure Applications
- Heap is used while implementing a priority queue.
- Dijkstra's Algorithm
- Heap Sort

# Max Heap:

![heap-sort-diagram](https://user-images.githubusercontent.com/64387352/192093122-1597cfa1-e44e-43e6-aa5d-180618f9f46a.png)

- Set current element i as largest.
- The index of left child is given by 2i + 1 and the right child is given by 2i + 2.
- If leftChild is greater than currentElement (i.e. element at ith index), set leftChildIndex as largest.
- If rightChild is greater than element in largest, set rightChildIndex as largest.
- Swap largest with currentElement

# Explanation Heapify:
- first we put largest = i(current node), compare root with its childern if left child > root then largest = left and swap , if right child > root then largest = right and swap. After that call heapify again (arr, largest) to make sure that childern achieve map heap
- We pick node depend on i = (n / 2 -1) where n = size, and i >= 0.
- 10 1 23 first w make largest = i (index: 0) ,then if left (index: 1) > root (index: 0) then largest = left, if right(2) > root(0) the largest = r (index : 2 ) after that swap (arr[i], arr[largest]) and call heapift again (arr, largest). To make sure childern achieve map heap.
- after that arr [23 , 1 , 10],  
- insert 50 arr [23 , 1 , 10 , 50].
- insert 7 arr [23 , 1 , 10, 50, 7].
- we start from node 1 depend on (n/2-1), arr = [1, 50, 7] largest = i(index: 1) if left (index: 3) > root(index: 1) then largest = l, if right (index: 4) > root (index: 1) then largest = r; then swap (arr[i], arr[largest]) and call heapify again(arr,laregst) [50 1 7] then we heapify again at index 0 so arr = [50 , 23 , 10, 1, 7].
- insert -4 arr [50 , 23 , 10 , 1 , 7, -4].

# Explanation Insert: 
- Insert the new element at the end of the tree.
- Heapify the tree.

# Explanation delete:
- Select the element to be deleted.
- Swap it with the last element.
- Remove the last element.










