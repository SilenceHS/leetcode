//����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//
//ʾ�� 1:
//
//����: [1,2,3]
//���: [1,2,4]
//����: ���������ʾ���� 123��
//
//ʾ�� 2:
//
//����: [4,3,2,1]
//���: [4,3,2,2]
//����: ���������ʾ���� 4321��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/plus-one
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
  vector<int> plusOne(vector<int>& digits) {
	int a = getnumber(digits, digits.begin());
	if (a == 1)
	{
		reverse(digits.begin(), digits.end());
		digits.push_back(1);
		reverse(digits.begin(), digits.end());
	}
	return digits;
}
int getnumber(vector<int>& numbers, vector<int>::iterator pos)
{
	if (pos == numbers.end())
	{
		return 1;
	}
	*pos= *pos+getnumber(numbers, pos+1);
	if (*pos >= 10)
	{
		*pos -= 10;
		return 1;
	}
	return 0;
}
int main()
{
	
 } 
 
 //tip: ��Ҫ�õݹ鵱ǰλ���ϵݹ��λ, �����жϵ�һλ�Ƿ�Ҫ��λ, �������� 

