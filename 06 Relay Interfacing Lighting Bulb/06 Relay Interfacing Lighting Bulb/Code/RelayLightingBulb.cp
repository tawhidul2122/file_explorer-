#line 1 "E:/4-2/Interfacing and Microcontroller/MicroController Lab Practice(Bijon)/Relay Interfacing Lighting Bulb/Code/RelayLightingBulb.c"

void main() {

 TRISC=0x00;
 PORTC=0x00;

 while(1){

 portc.f0=1;
 delay_ms(1000);
 portc.f0=0;
 delay_ms(1000);

 }

}
