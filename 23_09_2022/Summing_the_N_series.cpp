long long summingSeries(long n) {
    n=n%1000000007;
    unsigned long long ans=0;
    for(long long int i=1;i<=n;i++){
        ans+=(n%1000000007);
    }
    return ans%1000000007;
}