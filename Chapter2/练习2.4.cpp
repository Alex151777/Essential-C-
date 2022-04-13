#include<iostream>
#include<vector>
using namespace std;

const vector<int> *pen_caulcate(int pos);
bool pen_elems(int pos, int &elems);
bool check_pos(int pos);

int main()
{
    vector<int> pen;
    int pos;
    int elem;
    cout << "Please enter a postion:";
    while(cin>>pos)
    {
        if(pen_elems(pos,elem))
            cout << "element " << pos << " is " << elem << endl;
        cout << "Enter another postion to continue:";
    }
    
}

bool check_pos(int pos)
{
    return (pos <= 0 || pos > 64) ? false : true;
}

const vector<int> *pen_caulcate(int pos)
{
    static vector<int> elems;
    if(elems.size()<pos&&check_pos(pos))
        for (int ix = elems.size() + 1; ix <= pos;ix++)
            elems.push_back((ix*(3*ix-1)/2));
    return &elems;
}

bool pen_elems(int pos, int &elems)
{
    if(!check_pos(pos))
    {    
        cout << "Invalid postion: " << pos << endl;
        elems = 0;
        return false;
    }
    const vector<int> *pent = pen_caulcate(pos);
    elems = (*pent)[pos - 1];
    return true;
}