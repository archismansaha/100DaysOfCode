#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    while(input[count]!='\0'){
        count++;
    }
    return count;
}



bool checksequenece(char large[] , char*small) {
 if(length(large)==0){
     if(length(small)==0){
         return true;
     }
     else{
         return false;
     }
     
 }
    
    bool check;
    if(large[0]==small[0]){
        check=checksequenece(large+1,small+1);
    }
    else{
        check=checksequenece(large+1,small);
    }
    
    
    
    

}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
