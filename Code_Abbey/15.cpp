/* Code Abbey Problem #15
   Find the smallest (min) and largest (max) value from an array of integers.
   Input data will contain exactly 300 integers from user input.
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 300;
    int array[size];
    int element, min, max;

    for(int i = 0; i < size; i++)
    {
        cin >> element; //read in element from user input
        array[i] = element;

        if(i == 0)
            min = max = array[i]; //set both min and max to the first element in the array
        else if(array[i] > max)
            max = array[i];
        else if(array[i] < min)
            min = array[i];
    }

    cout << max << " " << min;

    return 0;
}
