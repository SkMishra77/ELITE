class Solution {
public:
    int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int fact(int x)
{
    if(x <= 1) return 1;
        return ((long long)(x) * fact(x - 1)) % 1000000007;
}


int numPrimeArrangements(int n){
    int c = 0;
        for(int i = 1; i <= n; ++i) {
            c += isPrime(i);
        }
        return ((long long)(fact(n - c)) * fact(c)) % 1000000007;
}

};