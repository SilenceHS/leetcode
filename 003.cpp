//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
//
//ʾ�� 1:
//
//����: "abcabcbb"
//���: 3 
//����: ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
//
//ʾ�� 2:
//
//����: "bbbbb"
//���: 1
//����: ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
//
//ʾ�� 3:
//
//����: "pwwkew"
//���: 3
//����: ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
//     ��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/longest-substring-without-repeating-characters
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int lengthOfLongestSubstring(string s) {
	int dict[256] = { 0 };
	char* a = &s[0];
	int left = 0,right=1,max=0; 
	while (*a != '\0') {
		left = dict[*a - 0] < left ? left : dict[*a - 0];
		dict[*a - 0] = right;
		max = max > right - left ? max : right - left;
		a++;
		right++;
	}
	return max;
}
int main()
{
	
 } 
 
 //tip: how do we calculate it on paper, how does this code

