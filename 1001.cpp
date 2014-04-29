#include <cstdio>
using namespace std;
int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  int c=a+b;
  char r[100];
  char t;
  int i=0;
  r[0]='\n';
  int j=1;
  bool flag=(c<0)?true:false;
  if(c<0) c=-c;
  while(c>=10){
	  t=(c%10)+'0';
      c=c/10;
      if(i % 3==0 && i) r[j++]=',';
	  r[j++]=t;
	  i++;
  }
  if(i % 3==0 && i) r[j++]=',';
  t=c+'0';
  r[j++]=t;
  if(flag) r[j++]='-';
  for(i=j-1;i>=0;i--) printf("%c",r[i]);
  return 0;
}