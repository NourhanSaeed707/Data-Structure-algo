# Heap Sort:
- **Heap sort** is a comparison-based sorting technique based on **Binary Heap data structure**. It is similar to **the selection sort** where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.
- Time complexity : O(N*logN)
- Auxiliary space: O(1)

# Where to use it?
- **Guaranteed O(nlogn) performance**. When you don't necessarily need very fast performance, but guaranteed O(nlogn) performance (e.g. in a game), because Quicksort's O(n^2) can be painfully slow. Why not use Mergesort then? Because it takes O(n) extra memory.
- **To avoid Quicksort's worst case**. C++'s std::sort routine generally uses a varation of Quicksort called Introsort, which uses Heapsort to sort the current partition if the Quicksort recursion goes too deep, indicating that a worst case has occurred.

- **Partially sorted array** even if stopped abruptly. We get a partially sorted array if Heapsort is somehow stopped abruptly. Might be useful, who knows?
- Based on [the wikipedia article for sorting algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm), it appears that the Heapsort and Mergesort all have identical time complexity O(n log n) for best, average and worst case.
