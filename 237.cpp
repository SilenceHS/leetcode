void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
       
    }
//题目意思是将node节点删除, 思路是将下一节点的所有数据拷贝到当前节点即可
