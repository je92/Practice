//Code Abbey Problem #16: Average of an Array

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int max = 20;
    int array[max];

    for(int i = 0; i < N; i++)
    {
        int input = -1;
        double size = 0;
        int sum = 0;

        for(int k = 0; input != 0; k++)
        {
            cin >> input;

            if(input != 0)
            {
                array[k] = input;
                size++;
            }
        }

        for(int c = 0; c < size; c++)
        {
            sum += array[c];
        }

        int average = (sum/size)+0.5;

        cout << average << " ";
    }
    return 0;
}
