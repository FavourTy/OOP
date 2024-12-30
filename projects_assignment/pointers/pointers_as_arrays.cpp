/*Develop a dynamic array manipulation system using pointers, allowing for addition,
removal, and viewing of elements.*/

#include <iostream>
using namespace std;

// function prototype
int *createDynamicArray(int);
void addElement(int *&myArray, int &size, int value);
void removeElement(int *&myArray, int &size, int index);
void updateArray(int *myArray, int size);

int main()
{
    int size;
    cout << "size";
    cin >> size;

    int *arr = createDynamicArray(size);
    cout << "array : ";
    updateArray(arr, size);

    int newValue;

    cout << "Enter the number you will like to add: ";
    cin >> newValue;
    addElement(arr, size, newValue);
    cout << "array  after adding : ";
    updateArray(arr, size);

    int index;
    cout << "Enter the index you want to remove like? ";
    cin >> index;
    removeElement(arr, size, index);
    cout << "array  after removing index[" << index << "] : ";
    updateArray(arr, size);

    delete[] arr;
    // int *createDynamicArray = new int[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "array[" << i << "] = ";
    //     cin >> createDynamicArray[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << *(createDynamicArray + i) << " ";
    // }
}

// Function to create a dynamic array
int *createDynamicArray(int size)
{
    int *myArray = new int[size];
    for (int i = 0; i < size; ++i)
    {
        cout << "array[" << i << "] = ";
        cin >> myArray[i];
    }
    return myArray;
}
// Function to add an element to the array
void addElement(int *&myArray, int &size, int value)
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; ++i)
    {
        newArray[i] = myArray[i];
    }
    newArray[size] = value;
    delete[] myArray;   // free the old array memory
    myArray = newArray; // update the pointer to the memory
    size++;             // increment the size
}
// Function to remove an element from the array
void removeElement(int *&myArray, int &size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Index out of bounds!" << endl;
        return;
    }
    int *newArray = new int[size - 1]; // Create a new array with reduced size
    for (int i = 0, j = 0; i < size; ++i)
    {
        if (i != index)
        {
            newArray[j++] = myArray[i]; // Copy all elements except the one at 'index'
        }
    }
    delete[] myArray;   // Free the old array memory
    myArray = newArray; // Update the pointer to the new array
    --size;             // Decrement the size
}

// Function to update(Display ) the array
void updateArray(int *myArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
}