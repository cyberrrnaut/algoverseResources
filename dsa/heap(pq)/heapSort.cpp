#include <bits/stdc++.h>

// Function to heapify a subtree rooted with node i which is an index in arr[].
void heapify(std::vector<int> &arr, int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        std::swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Main function to do heapsort
void heapSort(std::vector<int> &arr)
{
    int n = arr.size();

    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Move current root to end
        std::swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// A utility function to print array of size n
void printArray(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i)
    std::cout << arr[i] << " ";
    std::cout << "\n";
}

// Driver program
int main()
{
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array is \n";
    printArray(arr);

    heapSort(arr);

    std::cout << "Sorted array is \n";
    printArray(arr);
    return 0;
}
