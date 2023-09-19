/*level1-1 三个楼层号A B C（取值1~10）来表示第A层有人等候电梯到
第B层以及电梯此时所在的层数C，请给出必要的输出信息以展示电梯运行过程。
必要的输出信息应显示：电梯经过关键的楼层时显示电梯已经运行的时间以及电梯内的人数（当电梯
内的乘客要在此楼层出电梯时，则电梯内的人数不包含该乘客；当电梯外的乘客要在此楼层进电梯
时，则电梯内的人数包含该乘客）*/

#include<stdio.h>
int main()
{
	int A,B,C,level,time=0,number=0;
	scanf("%d %d %d",&A,&B,&C);
	level=C;
	
	while(level!=A){
		if(level==A||level==B||level==C){
		printf("%d %d %d\n",level,time,number);
		}
		if(A>C) level++;
		else level--;
		time++;
	}
	if(A==level) number++;
	for(;level!=B;time++){
		if(level==A||level==B){
		printf("%d %d %d\n",level,time,number);
		}
		if(level>B) level--;
		else level++;
	}
	if(level==B){
	number--;}
	printf("%d %d %d\n",level,time,number);
	return 0;
}
	
