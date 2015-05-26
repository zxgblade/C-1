/* */
#include <stdio.h>
main()
{
	int a=5,b,c,i=10;
	b=a++;
	c=++b;

	printf("a = %d, b = %d, c = %d\n",a,b,c);       /* 6,6,6 */
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);     /* 10,10,11*/
	printf("%d\n",++i); // 13
	printf("%d\n",--i); // 12
	printf("%d\n",i++); //12
	printf("%d\n",i--); //12
	printf("%d\n",-i++); //这种考运算符的优先级，显示负号，然后是自增，所以是 -12，结果i变为-11
	printf("%d\n",-i--); // 11，最后i为10
	getchar();
}
