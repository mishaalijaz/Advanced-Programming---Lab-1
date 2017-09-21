#include<iostream>
2	#include<conio.h>
3	using namespace std;
4	
5	void main()
6	{
7		int a[2][2], b[2][2], c[2][2];
8		int m1, m2, m3, m4, m5, m6, m7, i, j;
9	
10	
11		cout << "Enter the elements of 2x2 Matrix 1:\n";
12		for (i = 0; i<2; i++)
13		{
14			for (j = 0; j<2; j++)
15			{
16				cin >> a[i][j];
17			}
18		}
19		cout << "Enter the elements of 2x2 Matrix 2:\n";
20		for (i = 0; i<2; i++)
21		{
22			for (j = 0; j<2; j++)
23			{
24				cin >> b[i][j];
25			}
26		}
27	
28		
29		m1 = (a[0][0] + a[1][1])*(b[0][0] + b[1][1]);
30		m2 = (a[1][0] + a[1][1])*b[0][0];
31		m3 = a[0][0] * (b[0][1] - b[1][1]);
32		m4 = a[1][1] * (b[1][0] - b[0][0]);
33		m5 = (a[0][0] + a[0][1])*b[1][1];
34		m6 = (a[1][0] - a[0][0])*(b[0][0] + b[0][1]);
35		m7 = (a[0][1] - a[1][1])*(b[1][0] + b[1][1]);
36		c[0][0] = m1 + m4 - m5 + m7;
37		c[0][1] = m3 + m5;
38		c[1][0] = m2 + m4;
39		c[1][1] = m1 - m2 + m3 + m6;
40		cout << "\nProduct of the matrices is:\n";
41		for (i = 0; i<2; i++)
42		{
43			for (j = 0; j<2; j++)
44			{
45				cout << c[i][j];
46			}
47			cout << "\n";
48		}
49	
50	}
