#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age : ";
    cin>>a;
    if (a>=18)
    {
        cout << "\nYou are eligible for voting";
    }
    else
    {
        cout << "\nYou are not eligibe for voting. Wait for "<< 18-a << " years";
    }
    return 0;

}
