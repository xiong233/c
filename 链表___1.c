#include <stdio.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *pnext;
};

struct node *create();
void print(struct node *phead);

int main()
{
	struct node *phead = NULL;
	phead = create();
	print(phead);
}

// 创建链表
struct node *create()
{
	int i, len, x;
	printf("输入个数");
	scanf("%d", &len);
	struct node *phead = (struct node *)malloc(sizeof(struct node));
	struct node *p1 = phead;

	p1->pnext = NULL;
	for (i = 0; i < len; ++i)
	{
		struct node *p2 = (struct node *)malloc(sizeof(struct node));
		printf("输入第%d个数", i + 1);
		scanf("%d", &x);
		p2->data = x;
		p1->pnext = p2;
		p2->pnext = NULL;
		p1 = p2;
	}
	return phead;
}

// 输出链表
void print(struct node *phead)
{
	struct node *p = phead->pnext;
	while (NULL != p)
	{
		printf("%d\n", p->data);
		p = p->pnext;
	}

}