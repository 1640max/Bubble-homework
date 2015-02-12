#include <malloc.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
 
int main()
{
	/*size of array*/
    int n,*a;
    scanf("%d",&n);
 
    a=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
 
    for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
    if (a[j]<a[i])
	{
		int t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
 
    for(int i=0; i<n; ++i)
    printf("%d ",a[i]);
 
    getch();
}
