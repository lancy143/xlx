/*�����ʽ��ÿ�������������֣���һ����ʾ�ݴΣ��ڶ�����ʾ���ݴε�ϵ�������е�ϵ������������
��һ��һ��������ݣ����һ��һ����0���ݡ�
ע���һ�к����һ��֮�䲻һ�������ݴν���˳�����У�
���ĳ���ݴε�ϵ��Ϊ0���Ͳ������������������ˣ�
0���ݵ�ϵ��Ϊ0ʱ���ǻ���������������С�*/
#include<stdio.h>
int max(int,int);
int main()
{
	int i,j;
	int power[i],factor[i];
	for(i=0,j=0;;i++,j++){
	    scanf("%d %d",&power[i],&factor[i]);
	    int maxid=max(power,len);
	    int t=power[maxid];
	    a[maxid]=a[i];
	    a[i]=t;
	    
	    
    }

}
		
     
    return 0;
 }
 int max(int a[];int len){
 	int i;
 	for(int maxid=0;i>0;i++){/*���ʣ�i>0��Ϊ�ж�����*/ 
 		if(a[i]>a[maxid])
 		maxid=i;
	 }
	 return maxid; 
 }
 
   /*	for(i=0,j=0;i<=2&&j<=2;i++,j++){
	printf("%d,%d",power[i],factor[j]);	
	printf("\n") ;
