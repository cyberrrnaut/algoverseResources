#include <bits/stc++.h>

void minHeapify(std::vector<int> &heap, int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] < heap[smallest])
        smallest = left;

    if (right < n && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i)
    {
        std::swap(heap[i], heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void buildMinHeap(std::vector<int> &heap)
{
    int n = heap.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        minHeapify(heap, n, i);
    }
}

int main()
{
    std::vector<int> heap = {4, 10, 3, 5, 1};
    buildMinHeap(heap);

    std::cout << "Min Heap: ";
    for (int i : heap)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
