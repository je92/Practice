/*Code Abbey Problem #5
Find the smallest integer for each triplet of values
*/

#include <iostream>
using namespace std;

int main()
{
    int N; //number of triplets
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int a, b, c, min;

        cin >> a >> b >> c; //read in the triplets from user input
        min = a;

        if(b < min)
            min = b;
        if(c < min)
            min = c;

        cout << min << " ";
    }
    return 0;
}
