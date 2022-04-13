#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void display_message(const string & msg,const vector<T> &vec)
{
    cout << msg << endl;
    for (int ix = 0; ix < vec.size();ix++)
        cout << vec[ix] << endl;
    cout << endl;
}

int main()
{
    string msg = "Hi,Ales!";
    vector<int> ivec;
    vector<string> svec;
    ivec.push_back(1);
    ivec.push_back(2);
    svec.push_back("Welcome");
    svec.push_back("Congratulation");

    display_message(msg, ivec);
    display_message(msg, svec);

    return 0;
}