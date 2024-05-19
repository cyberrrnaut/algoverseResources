 #include<bits/stdc++.h>


struct MinHeapComparator {
    bool operator()(int a, int b) {
        return a > b; // For min heap, higher value means lower priority
    }
};

int main() {
    // Create a priority queue using a min heap with a custom comparator
    std::priority_queue<int, std::vector<int>, MinHeapComparator> minHeap;

    // Insert elements into the min heap
    minHeap.push(10);
    minHeap.push(4);
    minHeap.push(15);
    minHeap.push(7);
    minHeap.push(2);

    // Print and remove elements from the min heap
    std::cout << "Elements in the min heap: ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>
#include <queue>
#include <vector>
#include <functional> // For std::greater

int main() {
    // Create a priority queue using a min heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Insert elements into the min heap
    minHeap.push(10);
    minHeap.push(4);
    minHeap.push(15);
    minHeap.push(7);
    minHeap.push(2);

    // Print and remove elements from the min heap
    std::cout << "Elements in the min heap: ";
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}
