#include <bits/stdc++.h>

class MinHeap
{
private:
    std::vector<int> heap;

    void heapifyUp(int index)
    {
        if (index == 0)
            return;
        int parentIndex = (index - 1) / 2;
        if (heap[index] < heap[parentIndex])
        {
            std::swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }

    void heapifyDown(int index)
    {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest])
            smallest = leftChild;
        if (rightChild < heap.size() && heap[rightChild] < heap[smallest])
            smallest = rightChild;

        if (smallest != index)
        {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int element)
    {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void remove()
    {
        if (heap.size() > 1)
        {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        }
        else
        {
            heap.pop_back();
        }
    }

    int getMin()
    {
        if (!heap.empty())
            return heap[0];
        throw std::runtime_error("Heap is empty");
    }

    void printHeap()
    {
        for (int i : heap)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    MinHeap minHeap;
    minHeap.insert(10);
    minHeap.insert(20);
    minHeap.insert(15);
    minHeap.insert(30);
    minHeap.insert(5);

    std::cout << "Min-Heap: ";
    minHeap.printHeap();

    std::cout << "Min element: " << minHeap.getMin() << std::endl;

    minHeap.remove();
    std::cout << "After removal: ";
    minHeap.printHeap();

    return 0;
}
