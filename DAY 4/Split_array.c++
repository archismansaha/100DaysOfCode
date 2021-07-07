#include <iostream>

using namespace std;





bool splitArrayHelper(int* array, int end, int start, int leftsum, int rightsum){ 
    if (start == end) 
        return leftsum == rightsum; 
    
    if (array[start] % 5 == 0) {
        leftsum += array[start]; 
    }
    else if (array[start] % 3 == 0 ) 
     {
            rightsum += array[start]; 
     }
     else{
        return splitArrayHelper(array, end, start + 1, leftsum + array[start], rightsum) 
           || splitArrayHelper(array, end, start + 1, leftsum, rightsum + array[start]); 
     }
    return splitArrayHelper(array, end, start + 1, leftsum, rightsum); 
} 
bool splitArray(int *input, int size) {
    
    return splitArrayHelper(input,size,0,0,0);
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
