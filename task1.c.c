#include<stdio.h>
int main() {
	int sum,pin,digit;
	sum= 0;
	printf("Enter 4 digit pin :");
	scanf("%d", &pin);
	for(int i =0;i<4;i++){
			sum=pin%10;
            digit=digit+sum;
            pin=pin/10;
    }if(sum>10){
		printf("strong pin");
	}
    else
    {
		printf("weak pin");
     }
}

		
	

	
	

