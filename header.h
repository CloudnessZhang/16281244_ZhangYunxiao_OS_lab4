#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include "windows.h"
#include <conio.h>
#include <stdlib.h>
#include <io.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
#include"time.h"
using namespace std;

/***************************************��Ҫ����************************************************/
void FIFO();          //�Ƚ��ȳ��㷨
void LRU();           //������δʹ���㷨
void OPT();// ����û��㷨
void gClock(); //�Ľ�Clock�㷨
void PBA();   //PBA()�㷨
/***************************************��Ҫ����************************************************/


/***************************************��������************************************************/
void initialize();    //��ʼ��������ݽṹ
void createps();      //������ɷ�������
void displayinfo();   //��ʾ��ǰ״̬��ȱҳ���
void displayinfoPBA();
int  findpage();      //����ҳ���Ƿ����ڴ�
/***************************************��������************************************************/

#endif // HEADER_H_INCLUDED