/*
    Find the second largest number in an array Iterative approach
*/

#include <iostream>
#include <bits/stdc++.h> //to use in-built function

//one pass transverse
int find_second_largest(int arr[], int n)
{
    int first = 0; //index representing largest number
    int second = -1; //index representing second largest number
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[first])
        {
            second = first;
            first = i;
        }
        else if(arr[i] < arr[first])
        {
            if(second == -1 || (arr[second] < arr[i]))
                second = i;
        }
        else
        {
            //nothing to do
        }
    }
    return second;
}

//Using in-built sort function
void print2ndLargest(int arr[], int n)
{
    //sort the array in descending order
    std::sort(arr, arr+n, std::greater<int>());
    
    //check for duplicates of largest number and then return second largest
    //first element is always largest in sorted array, so start from next index
    for(int i=1; i <= n; i++)
    {
        if(arr[i] != arr[0])
        {
            std::cout << "Second largest number is: " << arr[i] << std::endl;
            return;
        }
    }
    std::cout << "Second largest number doesn't exist" << std::endl;
}

int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    
    // int arr[] = { 35, 35, 10, 10, 34, 1 };
    // int arr[] = { 35, 35, 35};
    
    std::cout << "Size of array: " << sizeof(arr) << "\nSize of array element: " 
                << sizeof(arr[0]) << std::endl;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    
    int sL = find_second_largest(arr,arrSize);
    if(sL == -1)
        std::cout << "Second largest doesn't exist" << std::endl;
    else
        std::cout << "Second largest number : " << arr[sL] << std::endl; 
    // print2ndLargest(arr, arrSize-1);

    return 0;
}
