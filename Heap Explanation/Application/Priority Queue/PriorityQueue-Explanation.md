# Priority Queue:

- A priority queue is **a special type of queue** in which each element is associated with **a priority value**. And, elements are served on the basis of their priority. That is, higher priority elements are served first.
- However, if elements with the same priority occur, they are served according to their order in the queue.

## Assigning Priority Value:
- Generally, the value of the element itself is considered for assigning the priority. For example,
- The element with the highest value is considered the highest priority element. However, in other cases, we can assume the element with the lowest value as the highest priority element.
- We can also set priorities according to our needs.

![Capture](https://user-images.githubusercontent.com/64387352/195920170-02106408-68cc-4b4c-8e49-c69be374ca2a.PNG)


## Difference between Priority Queue and Normal Queue:
-In a queue, **the first-in-first-out** rule is implemented whereas, in a **priority queue**, the values are removed on **the basis of priority**. The element with the highest priority is removed first.

# Implementation of Priority Queue:
- Priority queue can be implemented using an array, a linked list, a heap data structure, or a binary search tree. Among these data structures, heap data structure provides an efficient implementation of priority queues.
Hence, we will be using the heap data structure to implement the priority queue in this tutorial. A max-heap is implemented in the following operations.


![Capture](https://user-images.githubusercontent.com/64387352/195919467-503b0a2a-8cdc-4c53-a39d-2b32951ff941.png)

# How to Implement Priority Queue? 
- Array
- Linked List
- Heap data structure
- Binary search tree

# 1) Implement Priority Queue Using Array: 
- **enqueue():** This function is used to insert new data into the queue.
- **dequeue():** This function removes the element with the highest priority from the queue.
- **peek()/top():** This function is used to get the highest priority element in the queue without removing it from the queue.
![array](https://user-images.githubusercontent.com/64387352/195971655-84c26619-f160-41db-85d0-88e438f99eff.PNG)

# 2) Implement Priority Queue Using Linked List: 
In a LinkedList implementation, the entries are sorted in descending order based on their priority. The highest priority element is always added to the front of the priority queue, which is formed using linked lists. The functions like push(), pop(), and peek() are used to implement a priority queue using a linked list and are explained as follows:

- **push():** This function is used to insert new data into the queue.
- **pop():** This function removes the element with the highest priority from the queue.
- **peek() / top():** This function is used to get the highest priority element in the queue without removing it from the queue.
 ![linked list](https://user-images.githubusercontent.com/64387352/195971760-5a4a3316-93d1-47ee-9f40-b9096ec064ac.PNG)
 
 # 3) Implement Priority Queue Using Heaps: 
 Binary Heap is generally preferred for priority queue implementation because heaps provide better performance compared to arrays or LinkedList. Operations on Binary Heap are as follows: 

- **insert(p):** Inserts a new element with priority p.
- **extractMax():** Extracts an element with maximum priority.
- **remove(i):** Removes an element pointed by an iterator i.
- **getMax():** Returns an element with maximum priority.
- **changePriority(i, p):** Changes the priority of an element pointed by i to p.
![binary](https://user-images.githubusercontent.com/64387352/195971838-5641925d-3165-4446-bb7c-063bb840fda3.PNG)

