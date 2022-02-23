#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main(){
	system("color 0D");
	bool prime=true;
	const int s=4;
	int mat[s][s],i,j;
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			cout<<"Enter element of "<<i+1<<" row "<<j+1<<" column: ";
			cin>>mat[i][j];
		}
	}
	system("cls");
	
	for(i=0;i<s;i++){	
		for(j=0;j<s;j++){
			if(mat[i][j]!=mat[j][i])
			prime=false;
			break;
		}
	}
	if(prime==false){
		cout<<"Matrix is not Symmetric";
	}
	else{
		cout<<"Matrix is Symmetric";
	}

	return 0;
}
