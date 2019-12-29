#include <stdio.h>
int main()
{
    int n = 10;
    int i, j,minimum,maximum,tem,pos=-1, flag=0;

    int a[10] = {2,5,6,8,7,9,1,4,3,10};


    //ANS TO THE Q NO: 01

    for(i=0; i<n; i++)
    {
        minimum =a[i];
        flag=0;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<minimum)
            {
                minimum = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0)
        {
            minimum = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=minimum;
        a[pos]=tem;
    }

    // ANS TO THE Q NO: 02

    for(i=n-1; i>0; i--)
    {
        minimum = a[i];
        flag=0;
        for(j=0; j<i-1; j++)
        {
            if(a[j]<minimum)
            {
                minimum = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0)
        {
            minimum = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=minimum;
        a[pos]=tem;
    }


    //ANS TO THE Q NO:03

    for(i=n-1; i>0; i--)
    {
        maximum = a[i];
        flag=0;
        for(j=0; j<i-1; j++)
        {
            if(a[j]>maximum)
            {
                maximum =a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0)
        {
            maximum =a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=maximum;
        a[pos]=tem;
    }

    //ANS TO THE Q NO:04

    for(i=0; i<n; i++)
    {
        maximum = a[i];
        flag=0;
        for(j=i+1; j<n; j++)
        {
            if(a[j]>maximum)
            {
                maximum = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0)
        {
            maximum = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=maximum;
        a[pos]=tem;
    }


    return 0;

}
