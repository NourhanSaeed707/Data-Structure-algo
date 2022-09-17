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
- **Peek:** to check or find the most prior element in the heap, (max or min element for max and min heap).






