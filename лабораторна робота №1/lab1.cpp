#include <iostream>
#include "Math.h"

class firstTask 
{
    
    int variant = 7; // Danylo Kleban KHC-11/1
    double x = 0.48 * variant, y = 0.47 * variant, z = -1.32 * variant;
    
    public : int factorial(int i)
    {
        if (i == 0) return 1;
        else return i * factorial(i - 1);
    }
           
    double calculateA(double x, double y, double z)
    {
        double a, a1, a2, a3;
        
        a1 = (y - sqrt(abs(pow(x, 2) - calculateB(x, y, z))));
        a2 = (y - pow(x, 2));
        a3 = (z + 4 * pow(y, 2));

        a = log10(pow(abs(a1 * (a2 / a3)), 2/3));

        return a;
    }

    public : double calculateB(double x, double y, double z)
    {
        double b, b1, b2, b3, b4;

        b1 = ((x + y) / (pow(abs(z), 0.34)));
        b2 = (pow(y, 2)) / factorial(3);
        b3 = (pow(z, 3)) / factorial(5);
        b4 = exp(x - y) / (z + y);

        b = 1 - b1 + b2 + b3 + b4;

        return b;
    }

    public : void showResults() 
    {
        std::cout << "First task: \n";
        std::cout << "a = " << calculateA(x, y, z) << "\nb = " << calculateB(x, y, z);
    }
};

class secondTask 
{
    firstTask firstTaskObj;
    
    int variant = 7; // Danylo Kleban KHC-11/1

    double xn = -1;
    double xk = 1;
    double deltaX = 0.2;
    double y = 0.47 * variant, z = -1.32 * variant;
    
    
    void tabulateFunctionA(double x, double k, double delta) {
        double a, a1, a2, a3;

        std::cout << "\nTabulating function A: ";

        for (x; x <= k; x += delta) {
            a1 = (y - sqrt(abs(pow(x, 2) - firstTaskObj.calculateB(x, y, z))));
            a2 = (y - pow(x, 2));
            a3 = (z + 4 * pow(y, 2));

            a = log10(abs(pow(a1 * (a2 / a3), 2 / 3)));
            
            std::cout << "\n| a = " << a << " |";
        }
    }
    
    void tabulateFunctionB(double x, double k, double delta) {
        double b, b1, b2, b3, b4;

        std::cout << "\n\nTabulating function B: ";

        for (x; x <= k; x += delta) {
            b1 = ((x + y) / (pow(abs(z), 0.34)));
            b2 = ((pow(y, 2)) / (firstTaskObj.factorial(3)));
            b3 = ((pow(z, 3)) / firstTaskObj.factorial(5));
            b4 = ((exp(x - y)) / (z + y));
            
            b = 1 - b1 + b2 + b3 + b4;

            std::cout << "\n| b = " << b << " |";
        }
    }

    public: void showResults() 
    {
        std::cout << "\n\nSecond task: \n";
        tabulateFunctionA(xn, xk, deltaX);
        tabulateFunctionB(xn, xk, deltaX);
    }
};

int main()
{
    firstTask firstTaskObj;
    firstTaskObj.showResults();

    secondTask secondTaskObj;
    secondTaskObj.showResults();
}