//tcs 3
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="aaaaEEGccCCCxEEf", output[100];
    int i,j,top=-1,len;
scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i] == str[j])//a==a
            {
                continue;
            }
            break;//a==b
        }
        output[++top]=str[i];//output[0]=a;
i = j-1;
    }
    output[++top] = '\0';
len = strlen(output);
    for(i=0;i<len/2;i++)
    {
        char temp = output[i];
        output[i] = output[len-1-i];
        output[len-1-i] = temp;
    }
printf("%s",output);
}
