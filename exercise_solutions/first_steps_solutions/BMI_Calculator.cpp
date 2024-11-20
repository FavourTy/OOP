/* Create a BMI calculator application that reads the user’s weight
 in pounds and height in inches (or, if you prefer, the user’s
 weight in kilograms and height in meters), then calculates and
 displays the user’s body mass index. Also, the application
 should display the following information from the Department of
 Health and Human Services/National Institutes of Health so the
 user can evaluate his/her BMI
*/

#include <iostream>
using namespace std;
int main()
{
    double weight{0};
    double height{0};
    double bmi{0};
    const int poundsV = 703;

    cout << "Input your weight in Pounds : ";
    cin >> weight;
    cout << "Input your Height in Inches: ";
    cin >> height;
    bmi = (weight * poundsV) / (height * height);
    cout << "Your Body Mass Index Value is " << bmi << endl;
    cout << "BMI Values: Evaluate your BMI" << endl;
    cout << "Underweight : less than 18.5" << endl;
    cout << "Normal : between 18.5 and 24.9" << endl;
    cout << "Overweight : between 25 and 29.9 " << endl;
    cout << "Obese : 30 0r greater" << endl;
    return 0;
}