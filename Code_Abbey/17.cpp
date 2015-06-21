//Code Abbey Problem #17
#include <iostream>
using namespace std;

int main()
{
    int size, N;
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cin >> N;
        array[i] = N;
    }

    int result = 0;

    for(int i = 0; i < size; i++)
    {
        result += array[i];
        result %= 10000007;
        result *= 113;
        result %= 10000007;
    }

    cout << result;

    return 0;
}
