// textin3.cpp -- reading chars to end offile
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);                        // attempt to read a char
    while (cin.fail() == false)         // test for EOF
    {
    cout << ch;
    ++count;                            // echo character
    cin.get(ch);                        // attempt to read another char
    }
    cout << endl << count << " characters reead\n";
    return 0;
}