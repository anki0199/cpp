/*
3. Given an array of n integers, find the second largest element and return if from function.
int findSecondLargest(int nums[], int n);
*/

#include <iostream>

int findSecondLargest(int nums[], int n)
{
    int max = nums[0];
    int secondMax = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max)
        {
            secondMax = max;
            max = nums[i];
        }
        else if (nums[i] != max && nums[i] > secondMax)
        {
            secondMax = nums[i];
        }
    }

    return secondMax;
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

    int secondMax = findSecondLargest(nums, n);

    std::cout << "Second largest element in the array: " << secondMax << std::endl;

    return 0;
}
