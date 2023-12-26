#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
	char fikstur[31][2];
	char takimlar[]={' ','A','B','C','D','E','F'};
	char deneme[2];
	int skor1,skor2,i,p,s=1,bl=0,d,z,pp,a,x,n=1,m,k,l,u,v;
	int a_puan=0,b_puan=0,c_puan=0,d_puan=0,e_puan=0,f_puan=0;
	int a_averaj=0,b_averaj=0,c_averaj=0,d_averaj=0,e_averaj=0,f_averaj=0;
	fikstur[0][0]=' ';
	fikstur[0][1]=' ';
	printf("The league is preparing... \n");
	srand(time(NULL));
	for(i=0;i<5;i++){
		bl=0;
		for(d=1;d<=3;d++){
			bl=0;
			p = rand() % 6 + 1;
			deneme[0]=takimlar[p];
			pp = rand() % 6 + 1;
			deneme[1]=takimlar[pp];
			for(z=1;z<=15;z++){
				if(fikstur[z][0] == deneme[0] && fikstur[z][1] == deneme[1]  || fikstur[z][0] == deneme[1] && fikstur[z][1]== deneme[0] || deneme [0] == deneme[1]){
					bl=1;
					break;
					}
						}
				if(bl==1){
					d--;
					continue;
				}
				else{
				fikstur[s][0]=deneme[0];
				fikstur[s][1]=deneme[1];
				s++;
				
				}
				
				
				}
		
		}
	for(x=16;x<=30;x++){
		fikstur[x][0]=fikstur[n][1];
		fikstur[x][1]=fikstur[n][0];
		n++;
	}
	/*for(a=1;a<=30;a++){
		printf("%c",fikstur[a][0]);
		printf("%c ",fikstur[a][1]);
	}*/
	printf("\n\n");
	
	for(m=1;m<30;m++){
		skor1 = rand() % 5;
		skor2 = rand() % 5;
		if(skor1>skor2){
			if(fikstur[m][0]=='A'){
				a_puan += 3;
				a_averaj += skor1-skor2; }
			if(fikstur[m][0]=='B'){
				b_puan += 3;
				b_averaj += skor1-skor2; }
			if(fikstur[m][0]=='C'){
				c_puan += 3;
				c_averaj += skor1-skor2; }
			if(fikstur[m][0]=='D'){
				d_puan += 3;
				d_averaj += skor1-skor2; }
			if(fikstur[m][0]=='E'){
				e_puan += 3;
				e_averaj += skor1-skor2; }
			if(fikstur[m][0]=='F'){
				f_puan += 3;
				f_averaj += skor1-skor2; }
			if(fikstur[m][1]=='A'){
				
				a_averaj += skor2-skor1; }
			if(fikstur[m][1]=='B'){
		
				b_averaj += skor2-skor1; }
			if(fikstur[m][1]=='C'){
			
				c_averaj += skor2-skor1; }
			if(fikstur[m][1]=='D'){
				
				d_averaj += skor2-skor1; }
			if(fikstur[m][1]=='E'){
			
				e_averaj += skor2-skor1; }
			if(fikstur[m][1]=='F'){
			
				f_averaj += skor2-skor1; }
		}
		if(skor1<skor2){
			if(fikstur[m][1]=='A'){
				a_puan += 3;
				a_averaj += skor2-skor1; }
			if(fikstur[m][1]=='B'){
				b_puan += 3;
				b_averaj += skor2-skor1; }
			if(fikstur[m][1]=='C'){
				c_puan += 3;
				c_averaj += skor2-skor1; }
			if(fikstur[m][1]=='D'){
				d_puan += 3;
				d_averaj += skor2-skor1; }
			if(fikstur[m][1]=='E'){
				e_puan += 3;
				e_averaj += skor2-skor1; }
			if(fikstur[m][1]=='F'){
				f_puan += 3;
				f_averaj += skor2-skor1; }
			if(fikstur[m][0]=='A'){
			
				a_averaj += skor1-skor2; }
			if(fikstur[m][0]=='B'){
				
				b_averaj += skor1-skor2; }
			if(fikstur[m][0]=='C'){
			
				c_averaj += skor1-skor2; }
			if(fikstur[m][0]=='D'){
			
				d_averaj += skor1-skor2; }
			if(fikstur[m][0]=='E'){
			
				e_averaj += skor1-skor2; }
			if(fikstur[m][0]=='F'){
			
				f_averaj += skor1-skor2; }
		}
		if(skor1==skor2){
			if(fikstur[m][0]=='A'){
				a_puan += 1;
				a_averaj += skor1-skor2; }
			if(fikstur[m][0]=='B'){
				b_puan += 1;
				b_averaj += skor1-skor2; }
			if(fikstur[m][0]=='C'){
				c_puan += 1;
				c_averaj += skor1-skor2; }
			if(fikstur[m][0]=='D'){
				d_puan += 1;
				d_averaj += skor1-skor2; }
			if(fikstur[m][0]=='E'){
				e_puan += 1;
				e_averaj += skor1-skor2; }
			if(fikstur[m][0]=='F'){
				f_puan += 1;
				f_averaj += skor1-skor2; }
			if(fikstur[m][1]=='A'){
				a_puan += 1;
				a_averaj += skor2-skor1; }
			if(fikstur[m][1]=='B'){
				b_puan += 1;
				b_averaj += skor2-skor1; }
			if(fikstur[m][1]=='C'){
				c_puan += 1;
				c_averaj += skor2-skor1; }
			if(fikstur[m][1]=='D'){
				d_puan += 1;
				d_averaj += skor2-skor1; }
			if(fikstur[m][1]=='E'){
				e_puan += 1;
				e_averaj += skor2-skor1; }
			if(fikstur[m][1]=='F'){
				f_puan += 1;
				f_averaj += skor2-skor1; }
			
		}
		
	}
	//printf("A puan =%d,B puan =%d,C puan =%d,D puan =%d,E puan =%d,F puan =%d \n\n",a_puan,b_puan,c_puan,d_puan,e_puan,f_puan);
	//printf("A averaj=%d,B averaj=%d,C averaj=%d,D averaj=%d,E averaj=%d,F averaj=%d \n\n",a_averaj,b_averaj,c_averaj,d_averaj,e_averaj,f_averaj);
	int lig[6][2]={a_puan,a_averaj,b_puan,b_averaj,c_puan,c_averaj,d_puan,d_averaj,e_puan,e_averaj,f_puan,f_averaj};
	for(k=1;k<=5;k++){
		for(l=0;l<=5;l++){
			if(lig[l][0]<lig[k][0]){
				u=lig[l][0];
				lig[l][0]=lig[k][0];
				lig[k][0] = u;
				v=lig[l][1];
				lig[l][1]=lig[k][1];
				lig[k][1] = v;
			}
			if(lig[l][0]==lig[k][0]){
				if(lig[l][1]<lig[k][1]){
					u=lig[l][0];
					lig[l][0]=lig[k][0];
					lig[k][0] = u;
					v=lig[l][1];
					lig[l][1]=lig[k][1];
					lig[k][1] = v;
				}
			}
			
		}
	}
	//printf("%d-%d %d-%d %d-%d %d-%d %d-%d %d-%d \n\n\n\n\n\n\n",lig[0][0],lig[0][1],lig[1][0],lig[1][1],lig[2][0],lig[2][1],lig[3][0],lig[3][1],lig[4][0],lig[4][1],lig[5][0],lig[5][1]);
	
	char ligsiralama[6];
	int y;
	for(y=0;y<=5;y++){
		if(a_puan==lig[y][0] && lig[y][1]==a_averaj){
			ligsiralama[y]='A';
		}
		if(b_puan==lig[y][0] && lig[y][1]==b_averaj){
			ligsiralama[y]='B';
		}
		if(c_puan==lig[y][0] && lig[y][1]==c_averaj){
			ligsiralama[y]='C';
		}
		if(d_puan==lig[y][0] && lig[y][1]==d_averaj){
			ligsiralama[y]='D';
		}
		if(e_puan==lig[y][0] && lig[y][1]==e_averaj){
			ligsiralama[y]='E';
		}
		if(f_puan==lig[y][0] && lig[y][1]==f_averaj){
			ligsiralama[y]='F';
		}
	}
	
	printf("1.%c\n\n2.%c\n\n3.%c\n\n4.%c\n\n5.%c\n\n6.%c\n\n",ligsiralama[0],ligsiralama[1],ligsiralama[2],ligsiralama[3],ligsiralama[4],ligsiralama[5]);
	
	
	
	
	
	
	
	
	return 0;}
