#include<stdio.h>
#include<stdlib.h>
#define limit 5
struct user
{
	int initial;
	int goal;
}u[limit];//�ṹ���� 

void input(struct user *p,int n);
void compare(struct user *p,int n);
int judge(in[],g[],int); 
 
int main()
{
	int level=1,number=0,time=0,cnt;
	input(u,limit+1);
	compare(u,limit);

    int i=0;
	
	//������ ��ҵ�����㷨TT 
	while(level<u[1].initial){
		level++;
		time++;
	}
	number++;//չ�ֵ������й��̼��� 
	printf("%d,%d,%d",level,number,u[1].goal);
	if(u[2].initial<u[1].goal){//�Ƚ����û�2 
		if(judge(u[].initial,u[].goal,1)){//���1����¥ 
			for(i=0;level<;level++,time++){
				
			}
			
		}
	}

	}//<-main������ 

	/*for(i=0;i<limit;i++){
		printf("%d,%d\n",u[i].initial,u[i].goal);	//����������� 
	}*/
void input(struct user *p,int n)//�����û�¥�㺯�� 
{
	int a,b,j;
	for(a=0,b=0;1;p++,b++)
	{
		printf("����������¥��(����0��ʾ����)��\n");
		scanf("%d",&j);
		if(b==6){
			printf("����Ա����ȴ�\n");
			break; 
		}
		else if(j==0) break;	
		else (p->initial)=j;
		printf("������Ŀ��¥�㣺\n");
		scanf("%d",&(p->goal));
	
		}
	return;	
	}

void compare(struct user *p,int n){
	struct user temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i].initial>p[j].initial)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	return;
}
int judge(in[],g[],int){

	if((in[i]-g[i])>0)
	return 0;//0��ʾ��
	else return 1;//1��ʾ�� 
}
