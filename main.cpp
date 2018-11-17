// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III
// program Name: Digit sum and digital root recursive function.cpp
// last Modification Date: 8/11/2018
// Author,Id and Group: Ola Sameh - 20170165 - G8
// Teaching Assistant: Eng.Sara Hassan , Eng.Khloud Khaled

#include <iostream>

using namespace std;

int sum = 0;

int digitSum(int n) //Digit sum function
{
    if (n == 0) // call to stop recursion
    {
        return sum;
    }
    else
    {
        sum = sum + n%10;  // recursion to add digits
        n = n/10;
        return digitSum(n); // returning number
    }
}
int digitalRoot(int n)
{
    if (n < 10) // call to stop recursion
    {
        return n;
    }
    else
    {
        n = n%10 + digitalRoot(n/10);  // recursion to add digits

        return digitalRoot(n); // returning number
    }
}


int main()
{
    cout << "The sum of all digits is: " << digitSum(1729) << endl;  //calling digit sum recursive function

    cout << "The digital root is: " << digitalRoot(1729) << endl;  //calling digital root recursive function

    return 0;
}
