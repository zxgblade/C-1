#include <stdio.h>
main()
{
	int i,j,n;
	long sum=0,temp=0;

	printf("Please input a number to n:\n");
	scanf("%d",&n);
	if(n<1)
	{
		printf("The n must no less than 1!\n");
		scanf("%d",&n); //继续读入下一个数字
		//return;
	}

	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=i;j++)
			temp+=j;
		sum+=temp;/* 搞不懂这是什么设计目的*/
	}
	printf("The sum of the sequence(%d) is %d\n",n,sum);
	getchar();
	getchar();
}
