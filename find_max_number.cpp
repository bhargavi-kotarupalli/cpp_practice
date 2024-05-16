/*
    Find the largest number in an array Iterative approach
*/



#include <iostream>
#include <bits/stdc++.h> //to use in-built function

//Iterative approach function

int find_max_num(int arr[], int n)
{
    int max = arr[0];
    
    for(int i = 1; i < n ; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

//In-build function usage
int largest(int arr[], int n)
{
    /*
    parameters:
    first: iterator to first element
    Second: iterator to last element till which we've to check the maximum number
    Return value: It returns a pointer to the largest 
    element in the range, and in case if there are more than 
    one such element, then it points to the first one.
    */
    return *std::max_element(arr, arr+n);
}

int main()
{
    int arr[] = { 10, 324, 9808, 90, 45 };
    
    std::cout << "Size of array: " << sizeof(arr) << "\nSize of array element: " 
                << sizeof(arr[0]) << std::endl;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Maximum number : " << find_max_num(arr,arrSize) << std::endl; 
    
    /*
    arr - pointer to first element
    arr(arrSize-1) - pointer to last element
    */
    
    std::cout << "Maximum number : " << largest(arr,arrSize-1) << std::endl; 

    return 0;
}
