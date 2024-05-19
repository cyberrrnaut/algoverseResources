#include <bits/stc++.h>

void maxHeapify(std::vector<int> &heap, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i)
    {
        std::swap(heap[i], heap[largest]);
        maxHeapify(heap, n, largest);
    }
}

void buildMaxHeap(std::vector<int> &heap)
{
    int n = heap.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(heap, n, i);
    }
}

int main()
{
    std::vector<int> heap = {4, 10, 3, 5, 1};
    buildMaxHeap(heap);

    std::cout << "Max Heap: ";
    for (int i : heap)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
