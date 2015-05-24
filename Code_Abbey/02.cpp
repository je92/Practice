/* Code Abbey Problem #2

Input data has the following format:
  <>N - amount of values to sum
  <>User then inputs N number of values
*/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    int N; //where N is the size of input
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int x; //x is our user input to add to the sum
        cin >> x;
        sum += x;
    }

    cout << sum << endl;

    return 0;
}
