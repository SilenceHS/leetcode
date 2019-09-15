//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//
//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//
//示例：
//
//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/add-two-numbers
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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

