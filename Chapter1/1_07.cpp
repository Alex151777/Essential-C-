#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string usr_name;
    int num_tries = 0;
    int num_right = 0;
    fstream iofile("data.txt", ios_base::in | ios_base::app);

    if(!iofile)
    {
        cerr << "Oops! Unable to open file!" << endl;
    }
    else
    {
        
        iofile << "alex " << 10 << ' ' << 7 << endl;
        cout << "________"<<endl;
        //ios_base::app会把把文件位置置于末尾,故开始读取之前需定位到文件起始处
        iofile.seekg(0);
        iofile >> usr_name >> num_tries >> num_right;
        cout << "usr_name: " << usr_name << endl;
        cout << "total: " << num_tries << endl;
        cout << "right: " << num_right << endl;
    }
}