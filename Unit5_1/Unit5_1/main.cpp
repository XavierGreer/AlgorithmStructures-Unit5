//
//  main.cpp
//  Unit5_1
//
//  Created by Xavier Greer on 9/20/20.
//  Copyright © 2020 Xavier Greer. All rights reserved.
//


#include <iostream>
#include <time.h>

using namespace std;

void insertionSortRecursive(int arr[], int n)
{
    if (n <= 1)
        return;
    
    insertionSortRecursive( arr, n-1 );
    
    int last = arr[n-1];
    int j = n-2;
    
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ", ";
    }
    printf("\n");
}

void quickSort(int arr[], int l, int r)
{
    if(l >= r)
    {
        return;
    }
    
    int pivot = arr[r];
    
    int cnt = l;
    
    for(int i=l; i<=r; i++)
    {
        if(arr[i]<=pivot)
        {
            swap(&arr[cnt], &arr[i]);
            cnt++;
        }
    }
    
    quickSort(arr, l, cnt-2);
    quickSort(arr, cnt, r);
}

int main()
{
    
    const int sizeOfArray = 10000;
    int *pointArray;
    int array[sizeOfArray];
    int n = sizeof(array)/sizeof(array[0]);
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    for(int i=0; i<sizeOfArray; i++)
    {
        array[i] = rand() % 1000 + 1;
    }
    pointArray = array;
    
    clock_t timer;
    timer = clock();
    
    quickSort(pointArray, 0, n-1);
    timer = clock() - timer;
    float time_taken = ((float)timer)/CLOCKS_PER_SEC;
    printf("QuickSort algorithm took %f seconds \n", time_taken);
    
    //re-assigned pointer
    pointArray = array;
    
    //insertion sort
    timer = clock();
    insertionSortRecursive(pointArray, n);
    
    timer = clock() - timer;
    time_taken = ((float)timer)/CLOCKS_PER_SEC;
    
    printf("Recursive Insertion Sort took %f seconds \n", time_taken);
    
    //cout << "sorted array: ";
    //printArray(array, n);
    //cout << endl << endl;
    
    //cout << "unsorted array: ";
    //printArray(pointArray, n);
    //cout << endl << endl;
    
    return 0;
}
