int strStr(string s, string pat) {
    if(pat=="")
        return 0;
    vector<int> next(pat.size()+1);
    next[0]=-1;
    int i=1;
    int k=-1;
    /***求next数组**/
    while(i<=pat.size())
        (k==-1||pat.at(i-1)==pat.at(k))?(next.at(i)=++k)&(i++):k=next.at(k);
    /*****/
    i=0;
    k=0;
    int flag=0;
    while(i<s.size())
    {
        if (pat.at(k) == s.at(i)) {
            i++;
            k++;
            if(k==pat.size())
            {
                return i-k;
            }
        }
        else if(k==0) {
            i++;
        } else{
            k=next.at(k);
        }
    }
    return -1;
}
//此题涉及kmp算法, 核心为求出next数组, 务必掌握!
