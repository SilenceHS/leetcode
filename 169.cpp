//����һ����СΪ n �����飬�ҵ����е�������������ָ�������г��ִ������� ? n/2 ? ��Ԫ�ء�
//
//����Լ��������Ƿǿյģ����Ҹ������������Ǵ���������
//
//ʾ�� 1:
//
//����: [3,2,3]
//���: 3
//
//ʾ�� 2:
//
//����: [2,2,1,1,1,2,2]
//���: 2
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/majority-element
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
 int majorityElement(vector<int>& nums) {
	unordered_map<int, int> m;
	for (int i = 0; i < nums.size(); i++)
		m[nums[i]]++;
	unordered_map<int, int>::iterator it=m.begin();
	while (it != m.end())
	{
		if (it->second > nums.size() / 2)
			return it->first;
		it++;
	}
	return 0;
}
int main()
{
	
 } 
 
 //tip: ������Ԫ�ش���map������map 

