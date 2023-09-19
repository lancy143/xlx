/*输入格式：每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，所有的系数都是整数。
第一行一定是最高幂，最后一行一定是0次幂。
注意第一行和最后一行之间不一定按照幂次降低顺序排列；
如果某个幂次的系数为0，就不出现在输入数据中了；
0次幂的系数为0时还是会出现在输入数据中。*/
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
 	for(int maxid=0;i>0;i++){/*疑问：i>0作为判断条件*/ 
 		if(a[i]>a[maxid])
 		maxid=i;
	 }
	 return maxid; 
 }
 
   /*	for(i=0,j=0;i<=2&&j<=2;i++,j++){
	printf("%d,%d",power[i],factor[j]);	
	printf("\n") ;
