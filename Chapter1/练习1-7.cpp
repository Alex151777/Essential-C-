#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    
    vector<string> str;
    ifstream infile("练习1-7.txt");
    ofstream outfile("练习1-7_sorted.txt",ios_base::app);

    if(!infile||!outfile)
    {
        cerr << "Open file failed.";
    }
    else
    {
        string word;
        while(infile>>word)
            str.push_back(word);
        
        cout << "Unsorted text: " ;
        for (int index = 0; index < str.size();index++)
            cout << str[index] << ' ';
        cout << endl;

        sort(str.begin(), str.end());
        
        cout << endl << "After sorted: ";
        outfile << endl;
        for (int index = 0; index < str.size();index++)
            {
                outfile << str[index] << ' ';
                cout << str[index] << ' ';
            }
        
    }
    infile.close();
    outfile.close();
}