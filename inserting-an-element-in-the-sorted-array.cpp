#include <iostream>
using namespace std;

class AbstractDataType // Declaring a class for abstractdatatype
{
public:
    int *array; // Creating pointer

    int size = 0;   // Initializing the size of the array with zero
    int length = 0; // Initializing the length of the array with zero
    void insert_element(int element);
    void display_array();
};
void AbstractDataType::display_array() // This will display the all elements
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
}

void AbstractDataType::insert_element(int element)
{
    int i = length - 1;
    while (array[i] > element)
    {
        array[i + 1] = array[i];
        i--;
    }
    array[i + 1] = element;
    length++;
}

int main()
{
    AbstractDataType adt;        // Declaring class object named as adt
    int key, number_of_elements; // Declaring some variables
    adt.array = new int[20];     // Creating the space for the array in the heap mamory
    adt.size = 20;               // size is given as 20
    cout << "Enter the number of elements" << endl;
    cin >> number_of_elements;       // number of elements in the array
    adt.length = number_of_elements; // Giving the value of numeber of the elements to lenght
    cout << "Enter the elements in sorted form " << endl;
    for (int i = 0; i < number_of_elements; i++)
    {
        cin >> adt.array[i]; // Taking the array input
    }

    cout << "Enter the element that you want to insert in the sorted array" << endl;
    cin >> key; // Taking the array as input from user

    adt.insert_element(key);
    adt.display_array();

    return 0;
}
