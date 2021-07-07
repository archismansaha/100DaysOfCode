#include <iostream>
#include <algorithm>
using namespace std;


int maximumProfit(int budget[], int n) {
    // Write your code here
    int profit=0;
    sort(budget,budget+n);
  for(int i=0;i<n;i++){
      
      profit=max(profit,(n-i)*budget[i]);
      
  }
    return profit;
    
    
}


int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
