# C++基础  

***

## 1.1 class是什么?  

- class是用户自定义的数据类型(user_defined data type)，增强类型抽象化的层次
- class定义应分为两部分:
        (1).头文件(header file)——用来声明class的各种操作行为
        (2).代码文件(program text)——包含了操作行为的具体实现

## 1.2 对象初始化方式  

        (1).使用=运算符 例:int num_tries=0
            源于C语言    
        (2).构造函数语法    例:int num_tries(0)
            可以处理多值初始化问题
            使内置类型和class类型的初始化得到统一

## 1.5 vector的定义  

        (1).包含vector头文件
        (2).类名尖括号内指定数据类型，大小写在变量名后的小括号内
        例:vector<int> vector_name(vector_size)  
        （vector_size若忽略会默认为0）

## 1.7 文件读写  

    添加fstream头文件
    (1).若写文件，则创建ofstream(output mode)对象打开output file
        1.ofstream outfile("1_05.txt"); 以覆盖的方式写文件
        2.ofstream outfile("1_05.txt",ios_base::app); 以追加的方式写文件

    (2) 若读文件,则创建ifstream(input mode)对象
        例:ifstream infile("1_05.txt");
