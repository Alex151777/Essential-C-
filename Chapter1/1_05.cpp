#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int num_tries;
    int num_right;
    ofstream outfile("1_05.txt",ios_base::app);

    cout << "Enter Your name:";
    cin >> name;
    cout << "Enter your num_tries,num_right:";
    cin >> num_tries >> num_right;
    if(!outfile)
    {
        cerr << "Oops! Unable to save the session data!" << endl;
    }
    else
    {
        outfile << name << ' '
                << num_tries << ' '
                << num_right << ' ' << endl;
    }

}