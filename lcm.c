unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return 0;
	if (a * b > 2147483647)
		return (0);
	return (a*b);
}
// #include <stdio.h>
// int main (){
// 	printf("%u", (unsigned int)(-1));
// }