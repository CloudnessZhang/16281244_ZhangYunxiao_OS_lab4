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
        cout<<"��ѡ���û��㷨���������"<<endl;
        cout <<"�˵���"<<endl<<"1.����û��㷨(OPT)"<<endl<<"2.�Ƚ��ȳ��㷨(FIFO)"<<endl<<"3.������δʹ���㷨(LRU)"<<endl<<"4.�Ľ���Clock�㷨(gClock)"<<endl<<"5.ҳ�滺���û��㷨(PBA)"<<endl<<"0.�˳�"<<endl;
        cin>>select;

        while (select<0&&select>4){
			cout << "������󣡣�������������" << endl;
			cin >> select;
		}

        switch(select)
        {
        case 0:
            cout<<"���˳���"<<endl;
            flag=0;
            break;
        case 1:
            cout<<"*****************************ҳ������û��㷨(OPT)*****************************"<<endl;
            start = clock();
            OPT();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"�㷨����/����ʱ�䣺"<<usingtime<<endl;
            break;
        case 2:
            cout<<"****************************�Ƚ��ȳ��㷨(FIFO)****************************"<<endl;
            start = clock();
            FIFO();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"�㷨����/����ʱ�䣺"<<usingtime<<endl;
            break;
        case 3:
            cout<<"*****************************������δʹ���㷨(LRU)*********************************"<<endl;
            start = clock();
            LRU();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"�㷨����/����ʱ�䣺"<<usingtime<<endl;
            break;
        case 4:
            cout<<"*****************************�Ľ���Clock�㷨(gClock)***************************"<<endl;
            start = clock();
            gClock();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"�㷨����/����ʱ�䣺"<<usingtime<<endl;
            break;
        case 5:
            cout<<"******************************ҳ�滺���û��㷨(PBA)****************************"<<endl;
            start = clock();
            PBA();
            finish = clock();
            usingtime = (double)(finish - start)/CLOCKS_PER_SEC;
            cout<<"�㷨����/����ʱ�䣺"<<usingtime<<endl;
            break;
        }
    }
    while(select);
    return 0;
}
