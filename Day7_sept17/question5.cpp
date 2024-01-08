/*
5. Given an array of n integers, find the given element. Return true if element is present in the array else return false.
bool search(int nums[], int n, int element);
*/

#include <iostream>

bool search(int nums[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == element)
        {
            return true;
        }
    }
    return false;
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

    int elementToSearch;
    std::cout << "Enter an element to search for: ";
    std::cin >> elementToSearch;

    if (search(nums, n, elementToSearch))
    {
        std::cout << elementToSearch << " is present in the array." << std::endl;
    }
    else
    {
        std::cout << elementToSearch << " is not present in the array." << std::endl;
    }
    return 0;
}
