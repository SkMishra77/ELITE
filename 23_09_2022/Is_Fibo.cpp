string isFibo(long n) {
    long a=0,b=1,c;
    if(n==0)
        return 0;
    while(a<n){
        c=b;
        b=a+c;
        a=c; 
    }
    
    return a==n?"IsFibo":"IsNotFibo";
}