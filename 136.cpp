//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//
//˵����
//
//����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����
//
//ʾ�� 1:
//
//����: [2,2,1]
//���: 1
//
//ʾ�� 2:
//
//����: [4,1,2,1,2]
//���: 4
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/single-number
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
  int singleNumber(vector<int>& nums) {
	int num = 0;
	for (int i = 0; i < nums.size(); i++) {
		num ^= nums[i];
	}
	return num;
}
int main()
{
	
 } 
 
 //tip: ����� 

