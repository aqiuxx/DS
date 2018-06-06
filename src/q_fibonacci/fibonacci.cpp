/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/
#include <stdint.h>
#define __int64 int64_t

__int64 fibI ( int n ) { //����Fibonacci���еĵ�n������棩��O(n)
    __int64 f = 1, g = 0; //��ʼ����fib(-1)��fib(0)
    while ( 0 < n-- ) { g += f; f = g - f; } //����ԭʼ���壬ͨ��n�μӷ��ͼ�������fib(n)
    return g; //����
}

__int64 fib ( int n, __int64& prev ) { //����Fibonacci���е�n����Եݹ�棩�������ʽfib(n, prev)
    if ( 0 == n ) //������ݹ������
    { prev = 1; return 0; } //ֱ��ȡֵ��fib(-1) = 1, fib(0) = 0
    else { //����
        __int64 prevPrev; prev = fib ( n - 1, prevPrev ); //�ݹ����ǰ����
        return prevPrev + prev; //��ͼ�Ϊ����
    }
} //�ø���������¼ǰһ��������еĵ�ǰ�O(n)

__int64 fib ( int n ) { //����Fibonacci���еĵ�n����ֵݹ�棩��O(2^n)
    return ( 2 > n ) ?
    ( __int64 ) n //������ݹ����ֱ��ȡֵ
    : fib ( n - 1 ) + fib ( n - 2 ); //���򣬵ݹ����ǰ�����ͼ�Ϊ����
}
