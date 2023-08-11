// getinfo.cpp -- input and output

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                                         // C++ input
    cout << "Here are two more. ";
    carrots = carrots + 2;                                  // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}

// getinfo.cpp -- input and output  优化上述代码，把cout调整为一种更加优化的显示风格
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                                         // C++ input
    cout << "Here are two more. ";
    carrots = carrots + 2;                                  // the next line concatenates output
    cout << "Now you have "
         << carrots
         << " carrots."
         << endl;
    return 0;
}