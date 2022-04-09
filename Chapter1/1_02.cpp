#include<iostream>
#include<string>
using namespace std;

const int max_tries = 3;
const int max_seq = 6;
const int seq_size = 18;
int elem_seq[seq_size] = {
    1, 2, 3,  // Fibonacci
    3, 4, 7,  // Lucas       递推同Fibonacci
    2, 5, 12, // Pell        A[n]=A[n-2]+2*A[n-1]
    3, 6, 10, // Triangular  A[n]=A[n-1]+n
    4, 9, 16, // Square      A[n]=pow(n,2)
    5, 12, 22 // Pentagonal  A[n]=4+3*(n-2)+A[n-1]
};
string seq_names[max_seq] = {
    "Fibonacci",
    "Lucas",
    "Pell",
    "Triangular",
    "Square",
    "Pentagonal"
};

int main()
{
    string user_name;
    int user_guess;             
    int num_tries;              //总猜测次数
    int num_right = 0;          //总答对次数
    double user_score = 0.0;    //用户分数 = 总答对/总猜测
    
    char user_rsp;              //用户的回答（response）
    bool next_seq = true;       //显示下一组数列
    bool go_for_it = true;      //用户是否想继续猜
    bool got_it = false;        //用户是否猜对
    
    int cur_index = 0;

    while(next_seq==true&&cur_index<18)
    {
        //显示数列的前两个数字
        cout<< "The first two elements of the sequence are:"
            << elem_seq[cur_index] << ' '<< elem_seq[cur_index + 1] << endl;
        cout<< "What's the next element? ";

        int tries_cnt = 0;
        next_seq = true;
        go_for_it = true;
        got_it = false;
        
        //用户所答不正确 && 用户想继续猜
        while(!got_it&&go_for_it&&(++tries_cnt<=max_tries))
        {
            cin >> user_guess;
            ++num_tries;
            

            //若答案正确
            if(user_guess==elem_seq[cur_index+2])
            {
                ++num_right;
                cout << "Very Good. Yes, " << elem_seq[cur_index + 2]
                    << " is the next element in the "
                    << seq_names[cur_index / 3] << " sequence" << endl;
                got_it = true;
            }
            else
            {
                //如果答案错误
                
                switch (tries_cnt)
                {
                case 1:
                    cout << "Oops! Nice guess but not quiet it." << endl;
                    break;
                case 2:
                    cout << "Hmm.Sorry.Wrong a second time." << endl;
                    break;
                case 3:
                    cout << "Ah,this is harder than it look,isn't it?" << endl;
                    break;
                default:
                    cout << "It must be getting frustrating by now!" << endl;
                    break;
                }

                cout << "Do you want to continue?(y/n):";
                cin >> user_rsp;
                if(user_rsp=='N'||user_rsp=='n')    //若用户不想继续猜
                    go_for_it = false;
            }
        }//内层while结束
        cout << "Want to try another sequence? (Y/N)" << endl;
        char try_again;
        cin >> try_again;

        if(try_again=='N'||try_again=='n')
            next_seq = false;
        else
            cur_index += 3;
    }//外层while结束

    return 0;
}