//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
//
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�
//
//ʾ��:
//
//���� nums = [2, 7, 11, 15], target = 9
//
//��Ϊ nums[0] + nums[1] = 2 + 7 = 9
//���Է��� [0, 1]
#include <iostream>
#include <vector>
#include <map>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
     map<int, int> m;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m.find(target-nums[i]) != m.end() ) {
			return {m[target-nums[i]],i};
		}
		m[nums[i]] = i;
	}
	return {};
    }
int main()
{
	
 } 
 
 //tip: use map, insert and check

