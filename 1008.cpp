#include <cstdio>

int main(void){
int n;
scanf("%d",&n);
if(n==0) {printf("%d",0);return 0;}
int pre=0;
int cur;
int r=0;
for(int i=0;i<n;i++){
	scanf("%d",&cur);
	r=r+5;
	if(cur>pre) r=r+6*(cur-pre);
	else if(cur<pre) r=r+4*(pre-cur);
	pre=cur;
}
printf("%d",r);

return 0;
}