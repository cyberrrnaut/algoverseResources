#include <bits/stdc++.h>
// #include<iostream>

class MaxHeap
{
private:
    std::vector<int> heap;

    void heapifyUp(int index)
    {
        if (index == 0)
            return;
        int parentIndex = (index - 1) / 2;
        if (heap[index] > heap[parentIndex])
        {
            std::swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }

    void heapifyDown(int index)
    {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest])
            largest = leftChild;
        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
            largest = rightChild;

        if (largest != index)
        {
            std::swap(heap[index], heap[largest]);
            heapifyDown(largest);
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

    int getMax()
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
    MaxHeap maxHeap;
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(40);

    int n;
    std::cin >> n;
    std::cout << "HI" << n << '\n';
    std::cout << "Max-Heap: ";
    maxHeap.printHeap();

    std::cout << "Max element: " << maxHeap.getMax() << std::endl;

    maxHeap.remove();
    std::cout << "After removal: ";
    maxHeap.printHeap();

    return 0;
}
