#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int converter(char main_num[] ,int cho){
	int len,i,num=0,temp,deg;
	len = strlen(main_num);
	temp = 1;
	if(cho == 1){
		for(i=0;i<len;i++){
			if(main_num[i] == '1'){
				num += pow(2,i);
				}
			else{
			num +=0;
			}
		}
	}
	else if(cho == 2){
		for(i=0;i<len;i++){
			deg = pow(5,len - i -1);
			temp = main_num[i] - '0';
			if(main_num[i] != '0' ){
				num += temp*deg;
			}
			else{
				num +=0;
			}
			
		}
	}
	else if(cho == 3){
		for(i=0;i<len;i++){
			deg = pow(8,len - i -1);
			if(main_num[i] != '0' ){
				temp = main_num[i] - '0';
				num += temp*deg;
			}
			else{
				num +=0;
			}
	
		}
	}
	else if(cho == 4){
		for(i=0;i<len;i++){
			deg = pow(10,len - i -1);
			if(main_num[i] != '0' ){
				temp = main_num[i] - '0';
				num += temp*deg;
			}
			else{
				num +=0;
			}
			
		}
	}
	else if(cho == 5){
		for(i=0;i<len;i++){
			deg = pow(16,len - i -1);
			if(main_num[i] != '0' && main_num[i] - '0'<10){
				temp = main_num[i] - '0';
				num += temp*deg;
			}
			else if(main_num[i] - '0'>9){
				temp = main_num[i] - 55;
				num += temp*deg;
			}
			else{
				num +=0;
			}
			
		}
	}
	else{
		printf("Make a valid choice");
	}
	return num;
	
}

void cal(int num){ 
	int i,temp=1,cou=0,deg;
	printf("Decimal---> %d \n",num);
	printf("Binary---> ");
	temp = num;
	while(num>=pow(2,cou)){
		cou++;
	}
	cou -=1;
	for(i=0;i<=cou;i++){
		deg = pow(2,cou-i);
		if(temp>=deg){
			printf("%d ",temp/deg);
			temp = temp % deg;
		}
		else{
			printf("0 ");
		}
	}
	printf("\nQuinary---> ");
	temp = num;
	cou=0;
	while(num>=pow(5,cou)){
		cou++;
	}
	cou -=1;
	temp = num;
	for(i=0;i<=cou;i++){
		deg = pow(5,cou-i);
		if(temp>=deg){
			printf("%d ",temp/deg);
			temp = temp%deg;
		}
		else{
			printf("0 ");
		}
	}
	printf("\nOctal---> ");
	cou=0;
	while(num>=pow(8,cou)){
		cou++;
	}
	cou -=1;
	temp = num;
	for(i=0;i<=cou;i++){
		deg = pow(8,cou-i);
		if(temp>=deg){
			printf("%d ",temp/deg);
			temp = temp%deg;
		}
		else{
			printf("0 ");
		}
	}
	printf("\nHexadecimal---> ");
	cou=0;
	while(num>=pow(16,cou)){
		cou++;
	}
	cou -=1;
	temp = num;
	for(i=0;i<=cou;i++){
		deg = pow(16,cou-i);
		if(temp>=deg){
			if(temp/deg>9){
				if(temp/deg==10){
					printf("A ");
				}
				if(temp/deg==11){
					printf("B ");
				}
				if(temp/deg==12){
					printf("C ");
				}
				if(temp/deg==13){
					printf("D ");
				}
				if(temp/deg==14){
					printf("E ");
				}
				if(temp/deg==15){
					printf("F ");
				}
			}
			else{
				printf("%d ",temp/deg);
			}
			temp = temp%deg;
		}
		else{
			printf("0 ");
		}
	}
	
}



int main(void){
	int num,cho,sayi;
	char main_num[100];
	printf("What system are you writing in ?\n 1-Binary \n 2-Quinary \n 3-Octal \n 4-Decimal \n 5-Hexadecimal \n ");
	scanf("%d",&cho);
	printf("Enter number: ");
	scanf("%s",main_num);
	num = converter(main_num,cho);

	cal(num);
	
	
	return 0;}
