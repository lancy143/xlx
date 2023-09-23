#include<stdio.h>
#include<stdlib.h>
#define limit 5
struct user
{
	int initial;
	int goal;
}u[limit];//结构定义 

void input(struct user *p,int n);
void compare(struct user *p,int n);
int judge(in[],g[],int); 
 
int main()
{
	int level=1,number=0,time=0,cnt;
	input(u,limit+1);
	compare(u,limit);

    int i=0;
	
	//？？？ 作业调度算法TT 
	while(level<u[1].initial){
		level++;
		time++;
	}
	number++;//展现电梯运行过程即可 
	printf("%d,%d,%d",level,number,u[1].goal);
	if(u[2].initial<u[1].goal){//先接上用户2 
		if(judge(u[].initial,u[].goal,1)){//如果1是上楼 
			for(i=0;level<;level++,time++){
				
			}
			
		}
	}

	}//<-main的括号 

	/*for(i=0;i<limit;i++){
		printf("%d,%d\n",u[i].initial,u[i].goal);	//测试输出函数 
	}*/
void input(struct user *p,int n)//输入用户楼层函数 
{
	int a,b,j;
	for(a=0,b=0;1;p++,b++)
	{
		printf("请输入所在楼层(输入0表示结束)：\n");
		scanf("%d",&j);
		if(b==6){
			printf("已满员，请等待\n");
			break; 
		}
		else if(j==0) break;	
		else (p->initial)=j;
		printf("请输入目标楼层：\n");
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
	return 0;//0表示下
	else return 1;//1表示上 
}
