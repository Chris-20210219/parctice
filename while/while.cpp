#include<iostream>
#include<stdlib.h>
#include<time.h> //time 系统头文件
//#include<windows.h> //sleep 等待时间
using namespace std;
int main()
{
    /*添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样，那就没有意义了*/
    srand((unsigned int)time(NULL));//一定要先添加随机种子
//    cout<<number<<endl;

     int value=0;
     int number=rand()%100+1; // rand()%100 表示生成0~99之间的1个随机数=>rand()%100+1 随机生成1~100

     int i=0;
    while (i<5)
    {
        cin>>value;

        i++;

        cout<<"i= "<<i<<endl;

        if(value>number)
        {
            cout<<"猜大了"<<endl;
        }
        else if(value<number)
        {
            cout<<"猜小了"<<endl;
            
        }
        else
        {
            cout<<"恭喜猜对了"<<endl;

            break; //退出当前循环

        }

 
    }
    


    system("pause");
}