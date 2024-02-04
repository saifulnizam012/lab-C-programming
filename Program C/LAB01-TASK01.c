// Muna Syahmina binti Ma'som
// A180535

#include <stdio.h>

int main()
{
    float Temp; // allow Temp value with decimal points
    
    printf("Enter temperature reading in centigrade:\n");
    scanf("%f",&Temp); // scan the value that user enter
            
			if(Temp<0)                          
				printf("Freezing weather");     
			else if(Temp<11)                    
				printf("Very Cold weather");
			else if(Temp<21)                    
				printf("Cold weather");
			else if(Temp<31)                
				printf("Normal in Temp");   
			else if(Temp<41)                
				printf("Its Hot");
			else                                
				printf("Its Very Hot");
}