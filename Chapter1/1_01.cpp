#include<iostream>
#include<string>
using namespace std;

int main()
{
    ////string user_name;
    string first_name, last_name;

    cout << "\nPlease enter your first name and last name:";
    cin >> first_name>>last_name;

    cout << "\nHello " << last_name <<first_name << "...and goodbye!"<<endl;

    return 0;

}