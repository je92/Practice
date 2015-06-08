//Code Abbey Problem #13

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; //size of input
    cin >> N;

    int num = 0;

    while(cin >> num)
    {
        vector<int> digits;

        while(num != 0)
        {
            digits.push_back(x%10);
            num /= 10;
        }

        int weight = 1;
        int weighted_sum = 0;

        for(int i = digits.size()-1; i > -1; i--)
        {
            weighted_sum += weight*digits[i];
            weight++;
        }
        cout << weighted_sum << " ";
    }
    return 0;
}
