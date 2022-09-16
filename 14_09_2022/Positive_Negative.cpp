vector<int> Solution::solve(vector<int> &A) {
    int p=0;
    int n=0;
    vector<int> ans;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0)
            p++;
        if(A[i]<0)
            n++;
    }
    ans.push_back(p);
    ans.push_back(n);
    return ans;
}
