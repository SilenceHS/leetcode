//�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
//
//��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
//
//�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
//
//ʾ����
//
//���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)
//�����7 -> 0 -> 8
//ԭ��342 + 465 = 807
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/add-two-numbers
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
  ListNode* deal(ListNode* l1)
{
	int p = 0;
	ListNode* re = l1;
	while (1)
	{
		l1->val += p;
		p = 0;
		if (l1->val >= 10)
		{
			p = 1;
			l1->val -= 10;
		}
		if (l1->next == NULL)
			break;
		l1 = l1->next;
	}
	if (p != 0)
	{
		ListNode* d = new ListNode(p);
		l1->next = d;
	}
	return re;
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* pl1 = new ListNode(-1);
	ListNode* pl2 = new ListNode(-1);
	pl1->next = l1;
	pl2->next = l2;
	while (pl2->next!=NULL&&pl1->next!=NULL)
	{
		pl1->next->val += pl2->next->val;
		pl1 = pl1->next;
		pl2 = pl2->next;
	}	
	if (pl1->next == NULL)
		pl1->next = pl2->next;
	return deal(l1);
}
int main()
{
	
 } 
 
 //tip: how do we calculate it on paper, how does this code

