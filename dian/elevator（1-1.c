/*level1-1 ����¥���A B C��ȡֵ1~10������ʾ��A�����˵Ⱥ���ݵ�
��B���Լ����ݴ�ʱ���ڵĲ���C���������Ҫ�������Ϣ��չʾ�������й��̡�
��Ҫ�������ϢӦ��ʾ�����ݾ����ؼ���¥��ʱ��ʾ�����Ѿ����е�ʱ���Լ������ڵ�������������
�ڵĳ˿�Ҫ�ڴ�¥�������ʱ��������ڵ������������ó˿ͣ���������ĳ˿�Ҫ�ڴ�¥�������
ʱ��������ڵ����������ó˿ͣ�*/

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
	
