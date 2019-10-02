vector<vector<int>> levelOrder(TreeNode* root) {
    if(root==NULL)
        return {};
    vector<vector<int>> v;
    queue<TreeNode * > t;
    t.push(root);
    int num=1;
    vector<int> p;
    while (!t.empty())
    {
        p.clear();
       while(num--)
       {
           if(t.front()->left!=NULL)
               t.push(t.front()->left);
           if(t.front()->right!=NULL)
               t.push(t.front()->right);
            p.push_back(t.front()->val);
           t.pop();
       }
       v.push_back(p);
       num=t.size();
    }
    return v;
}
//二叉树的层序遍历, 使用队列,将节点的子节点入队, 并且记录下当前这层的数量, 以控制出队时的个数
