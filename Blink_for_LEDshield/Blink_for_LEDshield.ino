  /*********************************************************************************
     * Project  : Blink for LED shield                                             *
     * Compiler : Arduino 1.0.2                                                    *
     * Board    : Arduino UNO                                                      *
     * Shield   : D.I.Y LED Shield 4x3                                             *
     * Module   :                                                                  *
     *          :                                                                  *
     * Author   : Bavensky :3                                                      *
     * E-Mail   : Aphirak_Sang-ngenchai@hotmail.com                                *
     * Date     : 09/07/2014 [dd/mm/yyyy]                                          *
     *******************************************************************************/
     
  #define LEDPIN2  2
  #define LEDPIN3  3
  #define LEDPIN4  4
  #define LEDPIN5  5
  #define LEDPIN6  6
  #define LEDPIN7  7
  #define LEDPIN8  8
  #define LEDPIN9  9
  #define LEDPIN10  10
  #define LEDPIN11  11
  #define LEDPIN12  12
  #define LEDPIN13  13
  #define DELAYTIME 100
  
  int ledpins[] = {  LEDPIN2, LEDPIN3, LEDPIN4, LEDPIN5, 
                     LEDPIN6, LEDPIN7, LEDPIN8, LEDPIN9,
                     LEDPIN10, LEDPIN11, LEDPIN12, LEDPIN13,  };
                     
  void setup() 
  {
    for(int i=0; i<12; i++)
    {
      pinMode(ledpins[i], OUTPUT);
      delay(2);
    }
  
  }
  
  void loop() 
  {
    for(int i=0; i<12; i++)
    {
      digitalWrite(ledpins[i], HIGH);
      delay(DELAYTIME);
      digitalWrite(ledpins[i], LOW);
      delay(DELAYTIME);
    }
  }
