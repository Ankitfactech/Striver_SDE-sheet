 // power of a Number and its reverse . 
 
 
 int MOD = 1000000007;
       if(N == 0)
        return 0;
        
        if(R == 0)
        return 1;
        
        if(R % 2 == 0)
        {
            long long ans = power(N,R/2);
            return (ans%MOD * ans%MOD)%MOD;
        }
        else{
            long long ans = power(N, (R-1)/2);
            return (ans%MOD * ans%MOD *N%MOD)%MOD;
        }
        
    }