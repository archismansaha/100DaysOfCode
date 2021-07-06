#include <iostream>
using namespace std;

int findUnique(int *arr, int n) {
    // Write your code here
    
    int ans=arr[0];
    for(int i=1;i<n;i++){
        
        ans=ans^arr[i];  // XOR give 0 if same elemnts or return the elemnt like 3^3=0 but 3^6^3^6^8=8 , XOR has asocciativity
                        // complexity o(n)
        
    }
    return ans;
    
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}












