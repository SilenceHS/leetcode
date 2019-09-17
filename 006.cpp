//��һ�������ַ������ݸ������������Դ������¡������ҽ��� Z �������С�
//
//���������ַ���Ϊ "LEETCODEISHIRING" ����Ϊ 3 ʱ���������£�
//
//L   C   I   R
//E T O E S I I G
//E   D   H   N
//
//֮����������Ҫ�����������ж�ȡ��������һ���µ��ַ��������磺"LCIRETOESIIGEDHN"��
//
//����ʵ��������ַ�������ָ�������任�ĺ�����
//
//string convert(string s, int numRows);
//
//ʾ�� 1:
//
//����: s = "LEETCODEISHIRING", numRows = 3
//���: "LCIRETOESIIGEDHN"
//
//ʾ�� 2:
//
//����: s = "LEETCODEISHIRING", numRows = 4
//���: "LDREOEIIECIHNTSG"
//����:
//
//L     D     R
//E   O E   I I
//E C   I H   N
//T     S     G
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/zigzag-conversion
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
  string convert(string s, int numRows) {
	if (numRows == 1)
		return s;
	string::iterator it = s.begin();
	map<int, string> m;
	int pos = 0;
	int p = 1;
	while (it != s.end())
	{
		m[pos] += *it;
		if (pos == 0)
			p = 1;
		if (pos == numRows-1)
			p = -1;
		pos += p;
		it++;
	}
	string r = "";
	for (int i = 0; i < numRows; i++)
		r += m[i];
	return r;
}
int main()
{
	
 } 
 
 //tip: how do we calculate it on paper, how does this code

