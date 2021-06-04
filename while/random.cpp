#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int number1 = 0;
   int number2 = 0;
    srand((unsigned int)time(0));//添加随机种子

    number1 = rand()%100+1;
    number2= rand()%100+1;
    
    cout << "0~99之间的一个随机数："<<number1 <<endl;

    cout << "0~99之间的一个随机数："<< number2<<endl;

    system("pause");

}