#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)
#define TX_232        PIN_C6
#define RX_232        PIN_C7
#use RS232(BAUD=9600, XMIT=PIN_C6, RCV=PIN_C7, BITS=8,PARITY=N, STOP=1,UART1)
#use fast_io(c)
#INCLUDE <stdlib.h>
char op[30] ={};
int resultado;
int i;
#int_RDA
void serial(){
if(kbhit()){
   for(i=0;i<30;i++){
   do{
   op[i] = getch();
   printf("%c",op[i]);
   }while(op[i]=!13);
   }
   
   /*do{
   op1[i]= getch();
   i++;
   }while(op1[i-1]>96 || op1[i-1]<123);
   do{
   op2[j]= getch();
   if(op2[j] == 48){
   printf("Error");
   }else{
   j++;
   }
   }while(op2[j-1]>47 || op2[j-1]<58);*/
   }
}
void main (void){
   setup_oscillator(OSC_16MHZ);
   enable_interrupts(global);
   enable_interrupts(int_rda);
   
   while(true){
   for(i=0;i<30;i++){
   if(op[i]>47 || op[i]<58){
   resultado= atof(op);
   }
   }

   }
}
