/*
 * str.c
 *
 *  Created on: 29.04.2024
 *      Author: Mo'men
 */
#include<stdio.h>

struct Scomplex
{
	double m_r;
	double m_i;
};
struct Scomplex readcomplex(char name[])
{
	struct Scomplex c;
	printf("Enter %s complex value ",name);
	fflush(stdin);fflush(stdout);
	scanf("%lf %lf",&c.m_r,&c.m_i);

	return c;
}
struct Scomplex addcomplex(struct Scomplex a,struct Scomplex b)
{
	struct Scomplex d;
	d.m_r=a.m_r + b.m_r;
	d.m_i=a.m_i+b.m_i;

	return d;
}
void printcomplex(char name[],struct Scomplex e)
{
	printf("%s = %lf +j (%lf)",name,e.m_r,e.m_i);
}
int main()
{
	struct Scomplex x,y,z;
	x = readcomplex("x");
	y = readcomplex("y");
	z = addcomplex(x,y);
	printcomplex("z",z);

	return 0;
}
