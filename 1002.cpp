#include <cstdio>
using namespace std;
int main(void)
{
  int k1,k2;
  float a1[10],a2[1001],ar[20];
  int n1[10],n2[10],nr[20];
  float r[1001];
  
  for(int i=0;i<=1000;i++) r[i]=0; 
  
  scanf("%d",&k1);
  for(int i=0;i<k1;i++) {
	scanf("%d %f",&n1[i],&a1[i]);
	r[n1[i]]=a1[i];
  }
  
  scanf("%d",&k2);
  for(int i=0;i<k2;i++) {
	scanf("%d %f",&n2[i],&a2[i]);
	r[n2[i]]+=a2[i];
  }
  
  int m=(n1[0]>=n2[0])?n1[0]:n2[0];
  
  int c=0;
  for(int i=m;i>=0;i--){
	  if(r[i]-0.0<-0.00001 || r[i]-0.0>0.00001) {
		ar[c]=r[i];
		nr[c]=i;
		c++;
	  }
   }
  
  printf("%d",c);
  for(int i=0;i<c;i++){
    printf(" %d %.1f",nr[i],ar[i]);
  }
  
  return 0;
}