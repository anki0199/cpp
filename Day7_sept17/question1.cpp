/*
1. Given an array of n integers, find the largest element and return if from function.
int findMax(int nums[], int n);
*/

#include <iostream>

int findMax(int nums[], int n)
{
    int max = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}
int main()
{
    int nums[100], n;
    do
    {
        std::cout << "Enter the number of elements in the array(it must be less than 100):  ";
        std::cin >> n;

    } while (n <= 0 || n > 100);

    std::cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    int max = findMax(nums, n);

    std::cout << "Largest element in the array: " << max << std::endl;

    return 0;
}
