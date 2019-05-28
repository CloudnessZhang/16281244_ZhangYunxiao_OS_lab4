#include"header.h"
#include<iostream>

using namespace std;

int main()
{
    int select=0;
    int flag=1;
    clock_t start,finish;
    double usingtime;

    while(flag)
    {
        cout<<"****************************************Welcome****************************************"<<endl;
        cout<<"请选择置换算法或结束程序！"<<endl;
        cout <<"菜单："<<endl<<"1.最佳置换算法(OPT)"<<endl<<"2.先进先出算法(FIFO)"<<endl<<"3.最近最久未使用算法(LRU)"<<endl<<"4.改进型Clock算法(gClock)"<<endl<<"5.页面缓冲置换算法(PBA)"<<endl<<"0.退出"<<endl;
        cin>>select;

        while (select<0&&select>4){
			cout << "输入错误！！！请重新输入" << endl;
			cin >> select;
		}

        switch(select)
        {
        case 0:
            cout<<"已退出！"<<endl;
            flag=0;
            break;
        case 1:
            cout<<"*****************************页面最佳置换算法(OPT)*****************************"<<endl;
            start = clock();
            OPT();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"算法开销/运行时间："<<usingtime<<endl;
            break;
        case 2:
            cout<<"****************************先进先出算法(FIFO)****************************"<<endl;
            start = clock();
            FIFO();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"算法开销/运行时间："<<usingtime<<endl;
            break;
        case 3:
            cout<<"*****************************最近最久未使用算法(LRU)*********************************"<<endl;
            start = clock();
            LRU();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"算法开销/运行时间："<<usingtime<<endl;
            break;
        case 4:
            cout<<"*****************************改进型Clock算法(gClock)***************************"<<endl;
            start = clock();
            gClock();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"算法开销/运行时间："<<usingtime<<endl;
            break;
        case 5:
            cout<<"******************************页面缓冲置换算法(PBA)****************************"<<endl;
            start = clock();
            PBA();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"算法开销/运行时间："<<usingtime<<endl;
            break;
        }
    }
    while(select);
    return 0;
}
