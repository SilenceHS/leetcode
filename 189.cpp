//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����
//
//ʾ�� 1:
//
//����: [1,2,3,4,5,6,7] �� k = 3
//���: [5,6,7,1,2,3,4]
//����:
//������ת 1 ��: [7,1,2,3,4,5,6]
//������ת 2 ��: [6,7,1,2,3,4,5]
//������ת 3 ��: [5,6,7,1,2,3,4]
//
//ʾ�� 2:
//
//����: [-1,-100,3,99] �� k = 2
//���: [3,99,-1,-100]
//����: 
//������ת 1 ��: [99,-1,-100,3]
//������ת 2 ��: [3,99,-1,-100]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/rotate-array
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
 void rotate(vector<int>& nums, int k) {
	reverse(nums.begin(), nums.end());
	reverse(nums.begin() + k%nums.size(), nums.end());
	reverse(nums.begin(), nums.begin()+k % nums.size());
}
int main()
{
	
 } 

