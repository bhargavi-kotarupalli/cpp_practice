/*
    Extract and print each digit in a given number
*/

#include <iostream>
#include <bits/stdc++.h> //to use in-built function

void extractNumber(int n)
{
    //Get the actual number of digits - 1
    int digits = (int) log10(n); //For eg: 41125 gives 4 (exponential index of last digit)
    for(int i = digits; i >= 0; i--)
    {
        int powVal = (int) pow(10,i+1);
        int val = (int) n % powVal;
        while(val >= 10)
            val /= 10;
        std::cout << "value at 10 index " << i << ": " << val << std::endl;
    }
}

int main()
{
    int num;
    std::cout << "Enter an integer value: ";
    std::cin >> num;
    extractNumber(num);

    return 0;
}
