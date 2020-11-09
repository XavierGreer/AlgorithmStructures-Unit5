////
////  main.cpp
////  Unit5
////
////  Created by Xavier Greer on 8/27/20.
////  Copyright © 2020 Xavier Greer. All rights reserved.
////
//
//
//#include <iostream>
//using namespace std;
//
//
//void swapElement(int *xp, int *yp)
//{
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//// A function to implement bubble sort
//void bubblesort(int array[], int n)
//{
//    int x, y;
//    for (x = 0; x < n-1; x++)
//
//    // Last i elements are already in place
//    for (y = 0; y < n-x-1; y++)
//        if (array[y] > array[y+1])
//            swapElement(&array[y], &array[y+1]);
//}
//
///* Function to print an array */
//void printSorted(int array[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//        cout << array[i] << " ";
//    cout << endl;
//}
//
//// Driver code
//int main()
//{
//    int array[] = {3, 44, 45, 10, 15, 16, 9, 11};
//    int n = sizeof(array)/sizeof(array[0]);
//    bubblesort(array, n);
//    cout<<"Bubble sorted array: \n";
//    printSorted(array, n);
//    return 0;
//}
//
//
