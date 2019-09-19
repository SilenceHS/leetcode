//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//
//示例 1:
//
//输入: [1,2,3]
//输出: [1,2,4]
//解释: 输入数组表示数字 123。
//
//示例 2:
//
//输入: [4,3,2,1]
//输出: [4,3,2,2]
//解释: 输入数组表示数字 4321。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/plus-one
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
 
 //tip: 主要用递归当前位加上递归进位, 单独判断第一位是否要进位, 单独处理 

