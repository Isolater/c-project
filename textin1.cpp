#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        ++cout;
        cin >> ch;
    }
    cout << endl <<cout << "characters read\n";
    return 0;
}
