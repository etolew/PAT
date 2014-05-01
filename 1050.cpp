#include<iostream>
#include<string.h>
using namespace std;

int main(void){
	string s1,s2,sr;
	getline(cin,s1);
	getline(cin,s2);
	sr="";
	int a[256];
	memset(a,0,sizeof(a));
	for(int i=0;i<s2.size();i++){
		a[(s2[i]-'a')+97]=1;
	}
	for(int i=0;i<s1.size();i++){
		if(a[(s1[i]-'a')+97]==0) sr=sr+s1[i]; 
	}
	cout<<sr<<endl;
	
	return 0;
}