 int firstBadVersion(int n) {
        long long l=1;long long r=n;
        while(l!=r){
            if(!isBadVersion((l+r)/2))
                l=(l+r+1)/2;
            else
                r=(l+r)/2;
        }
        return r;
        
    }
//二分法,处理好边界即可
