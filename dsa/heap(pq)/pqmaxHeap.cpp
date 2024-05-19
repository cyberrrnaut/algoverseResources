 #include<bits/stdc++.h>


class PriorityQueue {
private:
    std::vector<int> heap;

    void heapifyUp(int index) {
        if (index == 0) return;
        int parentIndex = (index - 1) / 2;
        if (heap[index] > heap[parentIndex]) {
            std::swap(heap[index], heap[parentIndex]);
            heapifyUp(parentIndex);
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest])
            largest = leftChild;
        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
            largest = rightChild;

        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void push(int element) {
        heap.push_back(element);
        heapifyUp(heap.size() - 1);
    }

    void pop() {
        if (heap.size() > 1) {
            heap[0] = heap.back();
            heap.pop_back();
            heapifyDown(0);
        } else {
            heap.pop_back();
        }
    }

    int top() {
        if (!heap.empty())
            return heap[0];
        throw std::runtime_error("Priority queue is empty");
    }

    bool empty() {
        return heap.empty();
    }

    void printQueue() {
        for (int i : heap) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(30);
    pq.push(40);

    std::cout << "Priority Queue: ";
    pq.printQueue();

    std::cout << "Top element: " << pq.top() << std::endl;

    pq.pop();
    std::cout << "After removal: ";
    pq.printQueue();

    return 0;
}


