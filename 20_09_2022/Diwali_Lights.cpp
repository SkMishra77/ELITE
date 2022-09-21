long lights(int n) {
    long ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=2;
        ans=ans%100000;
    }
    
    return (ans-1+100000)%100000;
}
