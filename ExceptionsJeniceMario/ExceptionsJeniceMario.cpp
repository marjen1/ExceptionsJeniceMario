// Jenice Mario
// CIS 1202 5T1
// July 31, 2022


#include <iostream>
using namespace std;


class invalidCharacterExcpeption
{

};
class invalidRangeException
{

};


char character(char start, int offset)
{
    int x = int(start);
    int y = x + offset;

    try
    {
        if (x < 65 || (x > 90 && x < 97) || x > 122)
        {
            throw invalidCharacterExcpeption();
        }

        else if (y < 65 || (y > 90 && y < 97) || y > 122)
        {
            throw invalidRangeException();
        }
    }

    catch (invalidCharacterExcpeption characterException)
    {
        cout << "Invalid Character Exception" << endl;
        return 1;
    }
    catch (invalidRangeException rangeException)
    {
        cout << "Invalid Range Exception" << endl;
        return 1;
    }
    return char(y);
}

int main()
{
    cout << character('a', 1) << endl;
    cout << character('a', -1) << endl;
    cout << character('Z', -1) << endl;
    cout << character('?', 5) << endl;
    cout << character('A', 32) << endl;
}