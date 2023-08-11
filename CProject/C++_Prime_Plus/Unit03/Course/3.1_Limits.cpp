// llimits.cpp -- some integer limits

#include <iostream>
#include <climits>                  // use limits.h for older systems

int main()
{
    using namespace std;
    int n_int = INT_MAX;            // initialize n_int to max int value
    short n_short = SHRT_MAX;       // symbols defined in climits files
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    // sezeof operator yields size of type or of variable
    cout << "int is " << sizeof ()
}