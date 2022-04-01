//power of 2

bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n%2!=0 || n==0)
            return false;
        return isPowerOfTwo(n/2);
    
    }


//power of 4

bool isPowerOfFour(int n) {
        if(n==1)
            return 1;
        if(n%4!=0 || n==0)
            return false;
        return isPowerOfFour(n/4);
    }
