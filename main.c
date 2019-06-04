/******************************************************************************* 
* : TUSUR 
* File : main.c 
* Compiler : IAR for ARM 
* Version : 6.30.1.3142 
* Last modified : 03.06.2019 
* 
* Author : Anna Dykhova 
* Support mail : dyhovaanna7@gmail.com 
* 
* Target MCU : MCU: MDR1986 
* Description : Swap tetrads in bits
* 
********************************************************************************/ 

void main(void)
{ 
  int byte[8] = {1,1,1,1,0,0,0,0}; 
  int size    = sizeof(byte)/(sizeof(int)*2); 

  int first[4], second[4]; 

  for (int i = 0; i < size*2; ++i) 
  {
    if (i < size) 
      first[i] = byte[i];

    else 
      second[i-size] = byte[i]; 
  }

  for (int i = 0; i < size*2; ++i) 
  {
    if (i < size) 
      byte[i] = second[i]; 
    else 
      byte[i] = first[i-size]; 
  }

  printf(byte); 
}