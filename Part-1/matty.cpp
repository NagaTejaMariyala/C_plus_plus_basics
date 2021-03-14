
#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int nr,nc,i,x,y;

    float a[100],t,element;

    printf("Give size");
    scanf("%d %d",&nr,&nc);

    printf("Give elements");
    for (i=0;i<nr*nc;i++)
        scanf("%f",&a[i]);

    printf("Give coordinates");
    scanf("%d %d",&x,&y);

    t=a[nc*(x-1)+y-1];
    printf("[%d,%d]=%f",x,y,t);

    printf("\nGive element");
    scanf("%f",&element);

    printf("Locations ");
    for (i=0;i<nr*nc;i++)
        if (element == a[i])
        {
            x=i/nc+1;y=i%nc+1;
            printf("[%d,%d]",x,y);
        }
	return 0;
}

