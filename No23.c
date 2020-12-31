#include <stdio.h>
#include <string.h>
int main()
{
    char num[1000];
    int i=0;
    while(scanf("%s",num)!=EOF)
    {
        if(num[0]=='0' && num[1]=='\0')
            break;
        int first=0,second=0,n=strlen(num);
        for(i=0; i<n; i++)
        {
            if( i%2 == 0 )
                first += (num[i]-48);
            else
                second += (num[i]-48);
        }
        if((first-second)%11 == 0)
            printf("%s ぇ案计畉 11 计\n",num);
        else
            printf("%s ぇ案计畉ぃ琌 11 计\n",num);
    }
    return 0;
}
