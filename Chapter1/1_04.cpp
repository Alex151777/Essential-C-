#include<iostream>
#include<string>
#include<vector>
#include<ctime>
using namespace std;

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
    
    ////int cur_index = 0;

    const int max_tries = 3;    //单次最大尝试次数
    
    ////const int seq_size = 18;    
    int elem_seq[] = {
        1, 2, 3,  // Fibonacci
        3, 4, 7,  // Lucas       递推同Fibonacci
        2, 5, 12, // Pell        A[n]=A[n-2]+2*A[n-1]
        3, 6, 10, // Triangular  A[n]=A[n-1]+n
        4, 9, 16, // Square      A[n]=pow(n,2)
        5, 12, 22 // Pentagonal  A[n]=4+3*(n-2)+A[n-1]
    };

    vector<int> Fibonacci(elem_seq, elem_seq + 3);
    vector<int> Lucas(elem_seq+3, elem_seq + 6);
    vector<int> Pell(elem_seq+6, elem_seq + 9);
    vector<int> Triangular(elem_seq+9, elem_seq + 12);
    vector<int> Square(elem_seq+12, elem_seq + 15);
    vector<int> Pentagonal(elem_seq+15, elem_seq + 18);

    const int max_seq = 6;  
    string seq_names[max_seq] = {
        "Fibonacci",
        "Lucas",
        "Pell",
        "Triangular",
        "Square",
        "Pentagonal"
    };
    vector<int> *seq_addres[max_seq] = {
        &Fibonacci, &Lucas, &Pell,
        &Triangular, &Square, &Pentagonal
    };

    vector<int> *current_vec = nullptr;
    int seq_index;
    srand(time(NULL));

    while(next_seq==true)
    {
        //显示数列的前两个数字
            seq_index = rand() % max_seq;
            current_vec = seq_addres[seq_index];
            cout<< "The first two elements of the sequence are:"
                << (*current_vec)[0] << ' ' << (*current_vec)[1] << endl;
            cout<< "What's the next element? ";

            int tries_cnt = 0;
            next_seq = true;
            go_for_it = true;
            got_it = false;

            //用户所答不正确 && 用户想继续猜
            while (!got_it && go_for_it && (++tries_cnt <= max_tries))
            {
                cin >> user_guess;
                ++num_tries;

                //若答案正确
                if (user_guess == (*current_vec)[2])
                {
                    ++num_right;
                    cout<< "Very Good. Yes, " << (*current_vec)[2]
                        << " is the next element in the "
                        << seq_names[seq_index] << " sequence" << endl;
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
                    //若用户不想继续猜
                    if (user_rsp == 'N' || user_rsp == 'n') 
                        go_for_it = false;
                }
        }//内层while结束
        cout << "Want to try another sequence? (Y/N)" << endl;
        char try_again;
        cin >> try_again;

        if(try_again=='N'||try_again=='n')
            next_seq = false;
    }//外层while结束

    return 0;
}