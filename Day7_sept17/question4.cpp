/*
4. Given an array of n integers, find the second smallest element and return if from function.
int findSecondSmallest(int nums[], int n);
*/
#include <iostream>

int findSecondSmallest(int nums[], int n)
{
    int min = nums[0];
    int secondMin = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < min)
        {
            secondMin = min;
            min = nums[i];
        }
        else if (nums[i] != min && nums[i] < secondMin)
        {
            secondMin = nums[i];
        }
    }

    return secondMin;
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

    int secondMin = findSecondSmallest(nums, n);
    std::cout << "Second smallest element in the array: " << secondMin << std::endl;

    return 0;
}
