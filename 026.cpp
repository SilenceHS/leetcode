//����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//
//ʾ�� 1:
//
//�������� nums = [1,1,2], 
//
//����Ӧ�÷����µĳ��� 2, ����ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2�� 
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//
//ʾ�� 2:
//
//���� nums = [0,0,1,1,1,2,2,3,3,4],
//
//����Ӧ�÷����µĳ��� 5, ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
  int removeDuplicates(vector<int>& nums) {
     if(nums.size()==0)
        return 0;
     int n=1;
     int l=0;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[l]!=nums[i])
        {
            l++;
            nums[l]=nums[i];
        }
    }
    return l+1;
}
int main()
{
	
 } 
 
 //tip: ����ָ�� 
