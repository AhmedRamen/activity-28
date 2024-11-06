//This code was NOT written by me.
#include <iostream>
#include <iomanip>
#include <sstream>


using namespace std;

int main()
{
    double number = 12.34;
    stringstream stream;
    cout << convertDoubleToString(stream, number);
    return 0;
}

string convertDoubleToString(stringstream& stream, double number) {
    stream << fixed << setprecision(1) << number;
    string str = stream.str();
    return str;
}