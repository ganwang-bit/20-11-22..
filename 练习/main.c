//#include<stdio.h>
//int mian()
//{
//    return 0;
//}
#include<stdio.h>
void paixu(int* a,int* b,int* c);
int main()
{
    int*p1,*p2,*p3;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	paixu(p1,p2,p3);
	printf("p1-->%d ",*p1);
	printf("p2-->%d ",*p2);
	printf("p3-->%d \n",*p3);
	printf("%d %d %d ",*p1,*p2,*p3);
	return 0;
}
void paixu(int* a,int* b,int* c)
{
	int t;
	if(*a<*b)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
	if(*b<*c)
	{
		t=*b;
		*b=*c;
		*c=t;
	}
    if(*a<*b)
    {
        t=*a;
		*a=*b;
		*b=t;
    }
}

//#include<stdio.h>
//int main()
//{
//    int z,a;
//    for(int x=100;x<1000;x++)
//    {
//        z=x;
//        int y=0;
//        while(z>0)
//        {
//            a=z%10;
//            y =y+a*a*a;
//            z=z/10;
//        }
//        if(y==x)
//            printf("%d ",x);
//    }
//    return 0;
//}
//*#include<stdio.h>
//int main()
//{
//    int x,y,a,b,c;
//    for(x=100;x<1000;x++)
//    {
//        a=x%10;
//        b=x/10%10;
//        c=x/100%10;
//        y = c*100+b*10+a;
//        if(y==x)
//            printf("%d ",x);
//    }
//    return 0;
//}*/
