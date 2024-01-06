// textin2.cpp -- using cin.ger(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;                      // use basic input
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);                        // using the cin.get(char) function to get a character
    while (ch != '#')                   //test the character
    {
        cout << ch;                     // echo the character
        ++count;                        // count the character
        cin.get(ch);                      // using the cin.get(char) function to get a character
    }
    cout << endl << count << " characters read\n";
    return 0;
}
