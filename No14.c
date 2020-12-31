#include <math.h>
#include <stdio.h>

int main() {
    int m,d;
    scanf("%d %d",&m,&d);
    switch (m){
    	case 01:
    		if((21<=d)&&(d<=31)){
    			printf("Aquarius");
			}
			else printf("Capricorn");
			break;
    	case 02:
    		if((19<=d)&&(d<=28)){
    			printf("Pisces");
			}
			else printf("Aquarius");
			break;
    	case 03:
    		if((21<=d)&&(d<=31)){
    			printf("Aries");
			}
			else printf("Pisces");
			break;
    	case 04:
    		if((21<=d)&&(d<=30)){
    			printf("Taurus");
			}
			else printf("Aries");
			break;
    	case 05:
    		if((22<=d)&&(d<=31)){
    			printf("Gemini");
			}
			else printf("Taurus");
			break;
    	case 06:
    		if((22<=d)&&(d<=30)){
    			printf("Cancer");
			}
			else printf("Gemini");
			break;
    	case 07:
    		if((23<=d)&&(d<=31)){
    			printf("Leo");
			}
			else printf("Cancer");
			break;
    	case 8:
    		if((24<=d)&&(d<=31)){
    			printf("Virgo");
			}
			else printf("Leo");
			break;
    	case 9:
    		if((24<=d)&&(d<=30)){
    			printf("Libra");
			}
			else printf("Virgo");
			break;
    	case 10:
    		if((24<=d)&&(d<=31)){
    			printf("Libra");
			}
			else printf("Virgo");
			break;
    	case 11:
    		if((23<=d)&&(d<=30)){
    			printf("Sagittarius");
			}
			else printf("Libra");
			break;
    	case 12:
    		if((22<=d)&&(d<=31)){
    			printf("Capricorn");
			}
			else printf("Sagittarius");
			break;
	}
	return 0;    
}
