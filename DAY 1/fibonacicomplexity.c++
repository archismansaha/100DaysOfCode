class Solution {
public:
    int fib(int n) {
     
        if(n==0|| n==1){
            return n;
        }
        
        return fib(n-1)+fib(n-2);
    }
};

/*T(n)=2*T(n-1)
    =2*2T(n-2)
    =2*2*2T(n-3)
    =2^nT(0)
    


complexity o(n) = O(2^n)*/