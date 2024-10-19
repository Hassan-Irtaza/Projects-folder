#include <iostream>
using namespace std;

class DynamicArray
{
public:
    int *arr;
    int capacity;
    int length;

public:
    DynamicArray(int capacity) : capacity(capacity), length(0)
    {
        arr = new int[capacity];
    }

    int get(int i)
    {
        return arr[i];
    }

    void set(int i, int n)
    {
        arr[i] = n;
    }

    void pushback(int n)
    {
        if (length == capacity)
        {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback()
    {
        if (length > 0)
        {
            length--;
        }
        return arr[length];
    }

    void resize()
    {
        capacity *= 2;
        int *newArr = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize()
    {
        return length;
    }

    int getCapacity()
    {
        return capacity;
    }
};

int main()
{
    DynamicArray dynArray(5);
    for (int i = 0; i < 10; i++)
    {
        dynArray.pushback(i);
    }
    cout << "Size: " << dynArray.getSize() << endl;
    cout << "Capacity: " << dynArray.getCapacity() << endl;
    for (int i = 0; i < dynArray.getSize(); i++)
    {
        cout << dynArray.get(i) << " ";
    }
    cout << endl;

    return 0;
}