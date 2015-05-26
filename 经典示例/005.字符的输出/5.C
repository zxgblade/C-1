/* */
#include <stdio.h>
main()
{
	char ch,nch;	/* */
	int count;	/* */
	int k;		/* */

	printf("Please input a string with a # in the end.\n");
	scanf("%c",&ch);	/* */
	while(ch != '#')	/* */
	{
		if(ch >= '0' && ch <= '9')  /* 对于数字的处理*/
		{
			/* 如果是数字和字符的结合，则将数字转换为相应个数的字符*/
			count = ch-'0'+1;	/* 求出要打印的字符的个数*/
			scanf("%c",&nch);	/* 下一个要打印的字符*/
			for(k=0;k<count;k++)	/* 打印对应个数的字符*/
				printf("%c",nch);
		}
		else
			printf("%c",ch);	/* 如果是字符，则直接打印*/
		printf(" ");			/* 然后空格间隔*/
		scanf("%c",&ch);		/* 读取下一个字符*/
	}
	printf("#\n");				/* 打印最后的结束字符，然后换行*/
}

