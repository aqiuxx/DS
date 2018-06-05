/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#include <iostream>
/*DSA*/#include "util.h"
/*DSA*/#include "print_int_array.h"

using namespace std;

void reverse ( int*, int, int ); //���صĵ����㷨ԭ��
void reverse ( int* A, int n ) //���鵹�ã��㷨�ĳ�ʼ��ڣ����õĿ�����reverse()�ĵݹ�������棩
{ reverse ( A, 0, n - 1 ); } //�����ص���������ݹ������㷨



#if 1
void reverse ( int* A, int lo, int hi ) { //���鵹�ã��淶����֮��ĵ����棩
    while ( lo < hi ) //��while�滻��ת��־��if����ȫ��Ч
        swap ( A[lo++], A[hi--] ); //����A[lo]��A[hi]����������������
} //O(hi - lo + 1)

#elif 0

void reverse ( int* A, int lo, int hi ) { //���鵹�ã���ݹ���ݹ�棩
    if ( lo < hi ) {
        swap ( A[lo], A[hi] ); //����A[lo]��A[hi]
        reverse ( A, lo + 1, hi - 1 ); //�ݹ鵹��A(lo, hi)
    } //else���������ֵݹ��
} //O(hi - lo + 1)

#else

void reverse ( int* A, int lo, int hi ) { //���鵹�ã�ֱ�Ӹ�����õĵ����棩
next: //�㷨��ʼλ�������ת��־
    if ( lo < hi ) {
        swap ( A[lo], A[hi] ); //����A[lo]��A[hi]
        lo++; hi--; //��������������
        goto next; //��ת���㷨�����ʼλ�ã������ص���A(lo, hi)
    } //else�����˵�������ֹ
} //O(hi - lo + 1)

#endif