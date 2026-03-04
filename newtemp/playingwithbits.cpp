#include <bits/stdc++.h>
using namespace std;
void print_binary(int n){
	for(int i=31;i>=0;i--){
		cout<<((n&(1<<i))?1:0);
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	print_binary(n);
//	if(n&(1<<3)) cout<<"3rd bit set"<<endl;
//	else cout<<"3rd bit unset"<<endl;


//	print_binary((n^(1<<3)));   // toggle bit
//	print_binary(n|(1<<3));    // set bit
//  print_binary(n&(~(1<<3)));   // unset bit

//	cout<<(n>>1); // divided by 2(floor),  deletes the last bit (value halves)
//	cout<<(n<<1); // multiplied by 2,   appends 0 bit to last (value doubles)

//	cout<<char('A'|(1<<5));  // converting uppercase to lowercase(setting 5th bit)
//	cout<<char('f'&(~(1<<5))); // converting lowercase to uppercase(unsetting 5th bit)
//	cout<<char(1<<5); // it is binary of ascii of space
//	cout<<char('F'|' '); // thats why you can also use this (not works with lc->uc) 


	//clear/unset k LSB in 1 operation:
//	we need a binary whose k values are zero and all other values are 1:- 11111000
//	we know all powers of 2 have a pattern of 100, 1000, 10000
//  subtracting 1 from them gives us 1000->0111, 100->011
//  so we make a number which has 1 in k+1 position  1000, so 0001000-1=0000111~=11111000
	
//	int k=4;
//	print_binary(n&(~int((pow(2,4)-1)))); // pow returns double
//	print_binary(n&(~((1<<(k+1))-1)));  // can also do in this way (keep track of precedence of operators)

	// setting k LSB in 1 operation 
//	u need 00001111 then do or with number, can be made just power of 2 and -1
	
	
	// for MSB, you need to clear all msb till k
	// 10011001 = 00001001 if k=3
	// u need a number like 00001111, so make 1 left shift by k+1, 10000-1=01111
//	int k=3;
//	print_binary(n&((1<<(k+1))-1));
	
	
	
	// generating subsets of an array
//	vector <int> arr(n);
//	for(int i=0;i<n;i++) cin>>arr[i];
//	for(int mask=0;mask<(1<<n);mask++){ //1<<n is 2 pow n
//		for(int i=0;i<n;i++){
//			if(mask & (1<<i)){
//				cout<<arr[i]<<" ";
//			}
//		}
//		cout<<endl;
//	}

}