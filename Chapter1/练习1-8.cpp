#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    const int size=5;
    
    string comfort[size] = {
        "Nice!",
        "Oops! Nice guess but not quiet it.",
        "Hmm.Sorry.Wrong a second time.",
        "Ah,this is harder than it look,isn't it?",
        "It must be getting frustrating by now!"
        };
    vector<string> comfort_words(comfort, comfort + 5);
    int usr_wrong;
    cin >> usr_wrong;
    cout << comfort_words[usr_wrong];
}