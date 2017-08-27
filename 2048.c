#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define u 72
#define d 80
#define l 75
#define r 77
int a[9][9];
int i,j,n;
int judge = 0,score = 0;

int main()
{
	void build1();
	void build2();
	void rando();
	int move();
	FILE *fp;
	int s;
	if((fp=fopen("F:\\fenshu.txt","r"))==NULL)
	{
		printf("文件打开错误\n");
		return -1;
	}
	fscanf(fp,"%d",&s);
	fclose(fp);
	build1();
	rando();
	rando();
	build2();
	while(1)
	{
		while(move())
		{
			rando();
			system("cls");
			build2();
			
			if(n!=25)
			{
				printf("历史最高分: %d\n",s); 
				printf("你的分数：%d\n",score);
			}
			else
			{
				printf("游戏结束，你的当前分数为%d,历史最高分数为%d\n",score,s);
				if(score>=s)
				{
					printf("恭喜你打破历史记录！将载入史册！\n");
					if((fp=fopen("F:\\fenshu.txt","w"))==NULL)
					{
						printf("在保存你的成绩时发生了未知错误！\n");
						return -1;
					}
					fprintf(fp,"%d",score);
					fclose(fp);
				}
				getch();
				return 0;
			}
			
		}
	} 		
}
void build1()
{
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(i%2==0&&j%2==0)
				a[i][j]=0;
			else if(i%2==0&&j%2==1)
				a[i][j]=-1;
			else if(i%2==1&&j%2==0)
				a[i][j]=1;
		}
} 
void build2()
{
	n=0;
	for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				switch(a[i][j])
				{
					case 0:
							n++;
							printf("    ");break;
					case -1:
							printf("--  ");break;
					case 1:
							printf("|   ");break;
					case 2:
							printf("2   ");break;
					case 4:
							printf("4   ");break;
					case 8:
							printf("8   ");break;
					case 16:
							printf("16  ");break;
					case 32:
							printf("32  ");break;
					case 64:
							printf("64  ");break;
					case 128:
							printf("128 ");break;
					case 256:
							printf("256 ");break;
					case 512:
							printf("512 ");break;
					case 1024:
							printf("1024");break;
					case 2048:
							printf("2048");break;
				}
				
			}
			printf("\n");}
}
void rando()
{
	srand(time(0));
	do
	{
		i=rand()%9;
		j=rand()%9;
	}while(i*j%2==0||a[i][j]!=0);
	a[i][j]=2;
}
int move()
{
	void up();
	void down();
	void left();
	void right();
	char c=getch();
	judge=0;
	switch(c)
	{
		case u:
  			up();break;
		case d:
				down();break;
		case l:
				left();break;
		case r:
				right();break;
		default:
				break;
	}
	return judge;
}
void addsame(int *a,int *b);
void up()
{
	for(i=1;i<8;i+=2)
	{
		for(j=0;j<3;j++)
		{
		addsame(&a[7][i],&a[5][i]);
		addsame(&a[5][i],&a[3][i]);
		addsame(&a[3][i],&a[1][i]);
		}
	}
}
void down()
{
	for(i=1;i<8;i+=2)
	{
		for(j=0;j<3;j++)
		{
		addsame(&a[1][i],&a[3][i]);
		addsame(&a[3][i],&a[5][i]);
		addsame(&a[5][i],&a[7][i]);
		}
	}
}
void left()
{
	for(i=1;i<8;i+=2)
	{
		for(j=0;j<3;j++)
		{
		addsame(&a[i][7],&a[i][5]);
		addsame(&a[i][5],&a[i][3]);
		addsame(&a[i][3],&a[i][1]);
		}
	}
}
void right()
{
	for(i=1;i<8;i+=2)
	{
		for(j=0;j<3;j++)
		{
		addsame(&a[i][1],&a[i][3]);
		addsame(&a[i][3],&a[i][5]);
		addsame(&a[i][5],&a[i][7]);
		}
	}
}
void addsame(int *a,int *b)
{
	if(*a!=0&&*a==*b)
	{
		score+=*a;
		*a=0;
		*b=*b*2;
		judge=1;
	}
	else if(*a!=0&&*b==0)
	{
		*b=*a;
		*a=0;
		judge=1;
	}
}