//练习Fibonacci数列
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

const vector<int>* fibonacci_seq(int size,istream &is,ostream &os=cout);


int main()
{
    int size;
    ifstream infile("fibonacci_seq.txt");
    ofstream outfile("fibonacci_seq.txt",ios_base::app);
    cout << "Please enter a size:";
    while(cin >> size)
    {
        if(fibonacci_seq(size,infile,outfile))
            {
                
            }
        else
            cout << "Sorry.Could not calcucate the size # " << size << endl;
        cout << "Please enter another size:";
    }
    infile.close();
    outfile.close();

    return 0;
}

const vector<int>* fibonacci_seq(int size,istream &is,ostream &os)
{
    
    static vector<int> elems;
    
    //检查位置值是否合理
    if(size<0||size>1024)
    {
        cerr<< "fibonacci_seq(): oops: invalid size: "
            << size << " -- can't fullfill request." << endl;
        return NULL;
    }

    for (int ix = elems.size(); ix < size;++ix)
    {
        if(ix==0||ix==1)
        {
            elems.push_back(1);
            os << 1 << endl;
        }
        else
        {
            elems.push_back(elems[ix - 1] + elems[ix - 2]);
            os << elems[ix - 1] + elems[ix - 2] << endl;
        }
        cout << endl;
    }
        return &elems;
    
}

