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

void reverse ( int*, int, int ); //重载的倒置算法原型
void reverse ( int* A, int n ) //数组倒置（算法的初始入口，调用的可能是reverse()的递归版或迭代版）
{ reverse ( A, 0, n - 1 ); } //由重载的入口启动递归或迭代算法



#if 1
void reverse ( int* A, int lo, int hi ) { //数组倒置（规范整理之后的迭代版）
    while ( lo < hi ) //用while替换跳转标志和if，完全等效
        swap ( A[lo++], A[hi--] ); //交换A[lo]和A[hi]，收缩待倒置区间
} //O(hi - lo + 1)

#elif 0

void reverse ( int* A, int lo, int hi ) { //数组倒置（多递归基递归版）
    if ( lo < hi ) {
        swap ( A[lo], A[hi] ); //交换A[lo]和A[hi]
        reverse ( A, lo + 1, hi - 1 ); //递归倒置A(lo, hi)
    } //else隐含了两种递归基
} //O(hi - lo + 1)

#else

void reverse ( int* A, int lo, int hi ) { //数组倒置（直接改造而得的迭代版）
next: //算法起始位置添加跳转标志
    if ( lo < hi ) {
        swap ( A[lo], A[hi] ); //交换A[lo]和A[hi]
        lo++; hi--; //收缩待倒置区间
        goto next; //跳转至算法体的起始位置，迭代地倒置A(lo, hi)
    } //else隐含了迭代的终止
} //O(hi - lo + 1)

#endif