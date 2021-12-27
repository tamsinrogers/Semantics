/**
 *  Preforms a Bubble Sort on a given array 
 * 
 * 10/14/2021
 * Nicole Matamoros, Tamsin Rogers, Rayna Hata
 * g++ -o task3cpp task3.cpp
 * ./task3
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
void swapping(int *xp, int *yp)
{
    int temporary = *xp; //storing pointer of  first value into temp
    *xp = *yp; //storing pointer to second in first 
    *yp = temporary; //storing first into second 
}
 

void bubbleSort(int arr[], int n)
{
    //bubble sort code 
    for (int a = 0; a < n-1; a++)   //making sure there are not more passes then number of items 
     
    
        for (int b = 0; b < n-a-1; b++) //ending one before the last sorted value 
            if (arr[b] > arr[b+1]) //comparing the two values 
                swapping(&arr[b], &arr[b+1]);
}
 

void printArray(int arr[], int size)
{
    //helper function to print the array 
    
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
}
 
//test code 
int main(void)
{
    int arr[] = {14,18,92,15,21,20,1,100};
    cout<<"The unsorted array is:\n" ;
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"\nThe Sorted array is: \n";
    printArray(arr, n);
    return 0;
}
 
