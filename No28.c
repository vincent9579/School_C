#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int num,mo[4],guess[4],A=0,B=0,i,j,k,h,num2;
    printf("enter password(¤£¥i­«½Æ):");
    scanf("%d",&num2);
  	mo[3] =num2/1000;
    mo[2] =(num2/100)%10;
    mo[1] =(num2/10)%10;
    mo[0] = num2%10;
    
    for(h=0;h<99;h++){
    printf("make a guess! :");
    scanf("%d",&num);
	guess[3] =num/1000;
    guess[2] =(num/100)%10;
    guess[1] =(num/10)%10;
    guess[0] = num%10;
    A=B=0;
        for(j=0;j<4;j++){
            for( k=0;k<4;k++ ){
                if( mo[j] == guess[k] ){
                    if( j == k ){
                        A++;
                    } else {
                        B++;
                    }
                }
            }
        }
        if( guess[3]==0&&guess[2]==0&&guess[1]==0&&guess[0]==0){
           	printf("congrats!");
            break;
        } else {
            printf("%dA   %dB\n",A,B);
        }
    }

    

    system("PAUSE");
}
