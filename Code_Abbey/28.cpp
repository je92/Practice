#include <iostream>
using namespace std;

/*Code Abbey Problem #28
  For each given weight and height pair, calculate the BMI and print
  whether the BMI is considered under weight, normal weight, over weight, or obese
*/

int main()
{
    double weight, height, bmi;

    int input;
    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        cin >> weight;
        cin >> height;

        bmi = weight/(height*height);

        if(bmi < 18.5)
            cout << "under ";
        else if(bmi >= 18.5 && bmi < 25.0)
            cout << "normal ";
        else if(bmi >= 25.0 && bmi < 30.0)
            cout << "over ";
        else
            cout << "obese ";
    }
    return 0;
}
