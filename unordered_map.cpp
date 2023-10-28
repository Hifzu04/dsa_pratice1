#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> menu;
    menu["samosa"] = 10;
    menu["tea"] = 8;
    menu["maggi"] = 20;
    menu["pakodi"] = 30;
    menu["bann-makhan"] = 30;
    menu["pakodi"] = 9;

    for (pair<string, int> it : menu)
    {
        cout << it.first << "-" << it.second << endl;
    }

    cout << "enter the item , u want to purchase ";
    string item;
    cin >> item;
    if (menu.count(item) == 0)
    {
        cout << "item is not available";
    }
    else
    {
        cout << item << " is available having price " << menu[item] << endl;
    }
    return 0;
}