//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
//
//ʾ�� 1:
//
//����: [1,2,3,1]
//���: true
//
//ʾ�� 2:
//
//����: [1,2,3,4]
//���: false
//
//ʾ�� 3:
//
//����: [1,1,1,3,3,4,3,2,4,2]
//���: true
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/contains-duplicate
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
 bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int i=0;i<nums.size();i++)
    {
        if(s.find(nums[i])!=s.end())
            return true;
        s.insert(nums[i]);
    }
    return false;
}
int main()
{
	
 } //tip: ��һ����һ�� 

