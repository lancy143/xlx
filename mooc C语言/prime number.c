#include<stdio.h>
int main()
{
	int x,i,prime=1,j=1,result=0,n,m,count=0;
	scanf("%d,%d",&n,&m);
	for(x=2;count<m;x++){//count<m,��ֹ����֮���ٽ���һ��ѭ�� 
		for(i=2;x>i;i++){
			j=1;//����j�����ж��Ƿ�Ϊ���� 
		    if(x%i==0){
		    	j=0;
		    	break;}
			}
			if(j){
			count++;
		    prime=x;
		    	 if(count>=n){
		           result+=prime;
	     }}
		    }
	printf("%d",result);
	return 0;
 } 
