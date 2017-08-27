#include<string.h>
int main ()
{ 
	void paixu(char a[][10],int b[10]);
	void input(char a[][10],int b[10]);
	void chazhao(char a[][10],int shuzi,int b[10]);
	char a[10][10];
	int b[10];
	int shuzi;
    input(a,b);
	paixu(a,b);
    scanf("%d",&shuzi);
	chazhao(a,shuzi,b);
	return 0;
}
void input(char a[][10],int b[10])
{
	int i;
	for (i=0;i<10;i++)
	{
	scanf("%s%d",&a[i],&b[i]);
	}
}		
void paixu(char a[][10],int b[10])
{	int i,j;
	int t;
	char c[10];
	for(j=0;j<10;j++)
	{
		for(i=0;i<10-j;i++)
			if(b[i]>b[i+1])
			{	t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
		        strcpy(c,a[i]);
		        strcpy(a[i],a[i+1]);
		        strcpy(a[i+1],c);
			} 
	}


    for (i=0;i<10;i++)
		printf("%5d %s\n",b[i],a[i]);
}
void chazhao(char a[][10],int shuzi,int b[10])
{
    int low=0,high=9;
    int flag =1;
    if(shuzi>=b[0]&&shuzi<=b[9])
    {
	    while (flag==1&&low<=high)
		 {   
		  	int mid = (low+high)/2;
		 	if (shuzi==b[mid])
			 	{
			 	 flag=0;
			 	}
			 else if (shuzi>b[mid])
			 	low=mid+1;
		 	 else 
			 	high=mid-1;
		 }
    }
    if (flag)
}
