#line 1 "Marlin.ino"
                 

  
                                               
                                                      

                                                                     
                                                                     
                                                                  
                                    

                                                                
                                                               
                                                              
                                             

                                                                  
                                                                      
   

  
                                                     
                                       
                                      

                                                                 
                                                               
   

                                                                                                                    
                                                                                                                      

#include "Configuration.h"
#include "pins.h"

#ifdef ULTRA_LCD
  #if defined(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif defined(LCD_I2C_TYPE_MCP23017) || defined(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif defined(DOGLCD)
    #include <U8glib.h>                                                                             
  #else
    #include <LiquidCrystal.h>                             
  #endif
#endif

#if defined(DIGIPOTSS_PIN) && DIGIPOTSS_PIN > -1
#include <SPI.h>
#endif

#if defined(DIGIPOT_I2C)
  #include <Wire.h>
#endif
#line 1 "Marlin.ino"
                 

  
                                               
                                                      

                                                                     
                                                                     
                                                                  
                                    

                                                                
                                                               
                                                              
                                             

                                                                  
                                                                      
   

  
                                                     
                                       
                                      

                                                                 
                                                               
   

                                                                                                                    
                                                                                                                      

#include "Configuration.h"
#include "pins.h"

#ifdef ULTRA_LCD
  #if defined(LCD_I2C_TYPE_PCF8575)
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
  #elif defined(LCD_I2C_TYPE_MCP23017) || defined(LCD_I2C_TYPE_MCP23008)
    #include <Wire.h>
    #include <LiquidTWI2.h>
  #elif defined(DOGLCD)
    #include <U8glib.h>                                                                             
  #else
    #include <LiquidCrystal.h>                             
  #endif
#endif

#if defined(DIGIPOTSS_PIN) && DIGIPOTSS_PIN > -1
#include <SPI.h>
#endif

#if defined(DIGIPOT_I2C)
  #include <Wire.h>
#endif

#include "Arduino.h"
#line 115
