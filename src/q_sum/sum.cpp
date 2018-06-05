/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

int sumI ( int A[], int n ) { //��������㷨�������棩
   int sum = 0; //��ʼ���ۼ�����O(1)
   for ( int i = 0; i < n; i++ ) //��ȫ����O(n)��Ԫ�أ���һ
      sum += A[i]; //�ۼƣ�O(1)
   return sum; //�����ۼ�ֵ��O(1)
} //O(1) + O(n)*O(1) + O(1) = O(n+2) = O(n)


int sum ( int A[], int n ) { //��������㷨�����Եݹ�棩
    if ( 1 > n ) //ƽ��������ݹ��
        return 0; //ֱ�ӣ��ǵݹ�ʽ������
    else //һ�����
        return sum ( A, n - 1 ) + A[n - 1]; //�ݹ飺ǰn - 1��֮�ͣ����ۼƵ�n - 1��
} //O(1)*�ݹ���� = O(1)*(n + 1) = O(n)


int sum ( int A[], int lo, int hi ) { //��������㷨�����ֵݹ�棬���Ϊsum(A, 0, n - 1)��
    if ( lo == hi ) //�����ݹ�������䳤���ѽ���1������
        return A[lo]; //ֱ�ӷ��ظ�Ԫ��
    else { //����һ�������lo < hi������
        int mi = ( lo + hi ) >> 1; //�Ծ��е�ԪΪ�磬��ԭ����һ��Ϊ��
        return sum ( A, lo, mi ) + sum ( A, mi + 1, hi ); //�ݹ�Ը���������ͣ�Ȼ��ϼ�
    }
} //O(hi - lo + 1)����������������ĳ���