/*#include<at89x51.h>
unsigned char a[] ={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
int count=0;
int flag =0;
char tem1 =10; 
char tem2 =10;
void display(int);
void delay(int);

void main(){
	EA =1;  // ngat tong 
	IT0=0; // ngat theo muc 
	EX0=1; // ngat INT0
	//IT1=0; // ngat muc
	//EX1=1; // ngat INT1
	TMOD = 0x11; 
  ET0=1; // phat sinh ngat
  TH0=0x5C; //Thiet lap gia tri khoi dau la 3CB0 (He 16)
  TL0=0xB0; //Tuong duong 15536 he 10
  TF0=0; //Xoa co tran timer 0
  TR0=0; //Khoi dong timer 0
	while(1){	
	 
		display(count);

	}
}

void ngat() interrupt 1{
        TH0=0x00; //Thiet lap gia tri khoi dau la 3CB0 (He 16)
        TL0=0x00; //Tuong duong 15536 he 10
	TR0 =0; 
	TF0=0; //Xoa co tran timer 0
        while(P3_2==0);
        count++;
	if(count>9)count=0;
}

void ngat1() interrupt 0{
 TR0 =1;
}
void delay(int time){
	int i;
	for(i=0; i<time*1000;i++){
	}
}
void display(int n){
	P0=a[n]; 
}
*/