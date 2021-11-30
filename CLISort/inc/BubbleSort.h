#pragma once

#include <iostream>

class BubbleSort
{
public:
    BubbleSort() {}
    virtual ~BubbleSort() {}

    void swap(int* xp, int* yp);
    void bubbleSort(int arr[], int n);
    void printArray(int arr[], int size);
    void runBubbleSort(int arr[100]);
};
