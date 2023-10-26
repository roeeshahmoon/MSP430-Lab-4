#ifndef _bsp_h_
#define _bsp_h_

#include  <msp430g2553.h>      
// #include  <msp430xG46x.h>  // MSP430x4xx

#define debounceVal     250

// LEDs abstraction
#define LEDsArrPortOut  &P1OUT
#define LEDsArrPortDir  &P1DIR
#define LEDsArrPortSel  &P1SEL

// PushButtons abstraction
#define PBsArrPortIN  &P2IN
#define PBsArrPortSel  &P2SEL
#define PBsArrPortDir  &P2DIR


#define PBsArrIntPend  &P2IFG
#define PBsArrIntEn   &P2IE
#define PBsArrIntEdgeSel  &P2IES


// Switches abstraction , not relevent for this code
#define SWsArrPort &P2IN
#define SWsArrPortDir &P2DIR
#define SWsArrPortSel &P2SEL
#define SWmask



#endif



