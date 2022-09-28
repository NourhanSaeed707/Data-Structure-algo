#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
// main function to do heap sort
void heapSort(vector<int>& arr, int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
    }
}
void printArray(vector<int>& hT)
{
    for (int i = 0; i < hT.size(); ++i)
        cout << hT[i] << " ";
    cout << "\n";
}
int main()
{
    vector<int> heapTree;
    heapTree.push_back(26);
    heapTree.push_back(18);
    heapTree.push_back(20);
    heapSort(heapTree, heapTree.size());

    cout << "Max-Heap array: ";
    printArray(heapTree);

}

