#include <iostream>
#include <cstdlib>
#include "bubbleSort.h"


#include "inc/mergeSort.h"

#include "inc/heapSort.h"



int main() 
{
    BubbleSort bs;

    int numbers[100];

    for (int i = 0; i < 100; i++) {
        numbers[i] = rand() % 1000 + 1;
    }
    for (int i = 0; i < 100; i++) {
        std::cout << numbers[i] << std::endl;
    }


    mergeSort();

    heapSort();
    bs.runBubbleSort(numbers);

    return 0;
}
