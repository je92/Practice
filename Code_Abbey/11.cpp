#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int num = 0;
    for(int k = 0; k < N; k++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        num = a*b+c;

        vector<int> digits;

        while(num != 0)
        {
            digits.push_back(num%10);
            num /= 10;
        }

        int sum = 0;

        for(int i = 0; i < digits.size(); i++)
        {
            sum += digits[i];
        }
        cout << sum << " ";
    }
    return 0;
}
