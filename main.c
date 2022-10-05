#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int score=0,a=0,b=0;

	
	
	while(a>b){
	
	
	
	printf("½Ð¿é¤J¦¨ÁZ¡G");
	
	scanf("%d",& score);
	
	
	
	if(score>100)
	{
		a=1;
	}
	else
	   b=1;

}

	
	
	switch(score/10) { 
        case 10: 
	    case 9: 
            printf("A");
           
		    break;
            
        case 8: 
        
           printf("B");
		   
		   break;
        case 7: 
        
            printf("C");
            
			break;
        case 6: 
        
            printf("D");
            
			break;
			
       default: printf("E");
	
	
	 
	
        						
    } 
	

	

	
	
	
	
	
	
	
	
	
	return 0;
}
