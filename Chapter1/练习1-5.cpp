#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{   
    //C-style string
    /* 
    const int NAME_LENGTH = 20;
    char name[NAME_LENGTH];
    
    while(scanf("%s", name))
    {
        if(strlen(name)>2)
        {
            printf("valid name!\n");
            break;
        }
        else
        {
            printf("invalid name!\nPlease retry:");
        }
    } */
    //C++ string
    string usr_name;
    while (cin >> usr_name)
    {
        if(usr_name.length()>2)
        {
            cout << "valid name!" << endl;
            break;
        }
        else 
        {
            cout << "invalid name!" << endl << "Please retry:";
        }
    }
}