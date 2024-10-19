#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int size)
{
    int newSize = 0;
    // 1,1,2,2,3,3,4,4

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++)
        {
            if (nums[i] == nums[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate == false)
        {
            nums[newSize] = nums[i];
            newSize++;
            cout << "FALSE! ";
        }
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < newSize; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    return newSize;
}

int main()
{
    int nums[] = {1, 1, 2, 2, 3, 3, 4, 4};
    int size = sizeof(nums) / sizeof(int);
    int newSize = removeDuplicates(nums, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
