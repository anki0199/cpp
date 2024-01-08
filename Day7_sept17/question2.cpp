/*
2. Given an array of n integers, find the smallest element and return if from function.
int findMin(int nums[], int n);
*/

#include <iostream>

int findMin(int nums[], int n)
{
    int min = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    return min;
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

    int min = findMin(nums, n);

    std::cout << "Smallest element in the array: " << min << std::endl;

    return 0;
}
