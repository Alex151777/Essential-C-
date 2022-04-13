#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

void Pen_Calculate( vector<int> &elems,const int size);
inline bool Is_Size_Ok(vector<int> &vec,const int size);
void Display_Seq(const vector<int> &elems, ofstream &ofil);

int main()
{
    vector<int> pentagonal;
    int size;
    ofstream ofil("Pentagonal_list.txt",ios_base::out);

    cout << "Please enter a size:";
    while(cin>>size)
    {
        if(Is_Size_Ok(pentagonal,size))
            
            Display_Seq(pentagonal,ofil);
        else
            break;
    }
}

void Pen_Calculate( vector<int> &elems,const int size)
{
    for (int ix = 1; ix <= size; ix++)
    {
        elems.push_back((ix*(3*ix-1)/2));
    }
    
}

void Display_Seq(const vector<int> &elems,ofstream &ofil)
{
    for (int ix = 0; ix < elems.size();ix++)
    {   
        if(ix%10==0)
        {
            //cout << endl;
            ofil << endl;
        }
        //cout << elems[ix] << ' ';
        ofil << elems[ix] << ' ';
    }
}

inline bool Is_Size_Ok(vector<int> &vec,const int size)
{
    const int max_size = 64;

    if(size<=0||size>max_size)
    {
        cerr << "wrong size";
        return false;
    }
    if(vec.size()<size)
        Pen_Calculate(vec,size);
    return true;
}