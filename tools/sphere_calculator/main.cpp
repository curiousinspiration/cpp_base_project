// tools/sphere_calculator/main.cpp

#include "calculator/calculator.h"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Welcome to Sphere Volume Calculator! "
         << "Here for all your sphere volume calculating needs!"
         << endl << endl;

    while(true)
    {
        cout << "Please enter a radius (ctrl-c to exit)" << endl;
        cout << "> ";
        float radius;
        cin >> radius;

        calc::Calculator calculator;
        float volume = calculator.CalcSphereVolume(radius);
        cout << endl << "The volume of your sphere is: "
             << endl << volume << endl << endl;
    }

    return 0;
}