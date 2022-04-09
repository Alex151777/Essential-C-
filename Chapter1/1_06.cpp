#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int num_tries;
    int num_right;
    
    ifstream infile("1_05.txt");

    
    if(!infile)
    {
        cerr << "Oops! Unable to file!" << endl;
    }
    else
    {   
        while(infile>>name)
        {
            infile >> name >> num_tries >> num_right;
            cout << "name: " << name << endl;
            cout << "total: " << num_tries << endl;
            cout << "right: " << num_right << endl;
        }
    }

}