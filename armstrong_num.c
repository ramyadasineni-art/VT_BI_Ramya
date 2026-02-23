#include<stdio.h>
#include<math.h>
int main()
{
        int num,res=0,temp1,temp2,cnt=0,d,digit;
        printf("enter the number\n");
        scanf("%d",&num);
        temp1=num;
        temp2=num;
        while(temp1>0)
        {
                digit=temp1%10;
                cnt++;
                temp1/=10;
        }
        while(num>0)
        {
                d=num%10;
                res=res+pow(d,cnt);
                num/=10;
        }
        if(res==temp2)
        {
                printf("armstrong number\n");
                return 0;
        }
        else
        {
                printf("not a armstrong number\n");
                return 0;
        }
}

