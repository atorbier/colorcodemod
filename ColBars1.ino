/*

                         Open Source
             Modding some local oled shield code      
             ++++++++++Just For Kicks++++++++++
                            R2R0
*/

const byte REG_SOFTRES = 0x01; //Software Reset
const byte REG_DDISP_ON_OFF = 0x02; //Display ON/OFF SET
const byte REG_DSTBY_ON_OFF = 0x03; //Stanby Mode Set
const byte REG_DFRAME = 0x04; //Set Frame Frequence
const byte REG_WriteDirection = 0x05; //Sets GRAM Writing Direction
const byte REG_ScanDirection = 0x06; //Row Scan Direction
const byte REG_DispSize = 0x07; //Display Size Set
const byte REG_IF_Bus_Sel = 0x08; //Interface bus Select
const byte REG_Data_Masking = 0x09; //Masking Data
const byte REG_MBOXSize = 0x0A; //Data Reading/Writing Box
const byte REG_DISPStart = 0x0B; //Display Start Address
const byte REG_DataWrite = 0x0C; //Reading/Write Dot matrix Display Data
const byte REG_READREG = 0x0D; //Read Register Status
const byte REG_DotCurrent = 0x0E; //Set Dot Marix Current Level
const byte REG_DotPeakCurrent = 0x0F; //Set Dot Marix Peak Current Level
const byte REG_PreC_Width = 0x1C; //Sets Precharge pulse width
const byte REG_PeakWidth = 0x1D; //Set Peak Pulse Width
const byte REG_PeakDelay = 0x1E; //Sets Peak Pulse Delay(0u~63u)
const byte REG_Row_Scan = 0x1F; //Set Row Scan Operation
const byte REG_IF_SEL = 0x2D; //Set Interface Mode
const byte REG_RGB_IF_CTRL = 0x2E; //RGB I/F Control
const byte REG_RGB_IF_POL = 0x2F; //Set RGB I/F Polarity
const byte REG_VCC_R_SEL = 0x30; //Set Internal Regulator for Row Scan
const byte REG_XTALK_Mode = 0x31; //Set XTALK Condition Setting
const byte REG_XTALK_EN = 0x32; //Set XTALK Enable
const byte REG_AGING_EN = 0x35; //Set AGING Mode
const byte REG_Gamma_Tune = 0x3A; //Set Gamma Correction Table Set
const byte REG_Gamma_Initial = 0x3B; //Set Gamma Correction Table Initialize
 
const byte A0B = 5;
const byte CSB = 4;
const byte WRB = 3;
const byte RES = 2;
 
byte RED;
byte GREEN;
byte BLUE;
 
unsigned int Y, X;
 

 
void setup() {
  Serial.begin(9600);
  DDRC = ~0x00;    //D0-D7 output
  pinMode(A0B, OUTPUT);
  pinMode(CSB, OUTPUT);
  pinMode(WRB, OUTPUT);
  pinMode(RES, OUTPUT);
 
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  //    WRITE_COMMAND(0x01); // Display ON/OFF SET
  //    while(1);
  init_OLED();
 
}
void loop() {
  while(1) {
    // WHITE
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<128; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }      
    }      
    // YELLOW
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<112; X++) {
        // red      
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }      
    }      
    // CYAN
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<96; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }      
    }
    // GREEN
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<80; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }      
    }      
    // MAGENTA
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<64; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }      
    }      
    // RED
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<48; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }      
    }
    // BLUE
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<32; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }      
    }      
    // BLACK
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<16; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }      
    } 
    delay (3000);
    // RED
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<128; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }      
    }      
    // GREEN
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<85.4; X++) {
        // bred
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue     
        WRITE_DATA(0);
      }      
    }      
    // BLUE
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<42.6; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }
    }    
   delay (3000);
    
   // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<128; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<126; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // yellow line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<124; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<122; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<120; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<118; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<116; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<114; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<112; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<110; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<108; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<106; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<104; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<102; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<100; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<98; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<96; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<94; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<92; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<90; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<88; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<86; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<84; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<82; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<80; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<78; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<76; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<74;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<72; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<70; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<68; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<66; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<64; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<62;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<60; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<58; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<56; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<54; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<52; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<50;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<48; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<46; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<44; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<42; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<40; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<38;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // yellow line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<36; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<34; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // cyan line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<32; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<30; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // green line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<28; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<26;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // magenta line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<24; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<22; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // red line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<20; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<18; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // blue line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<16; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
      }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<14;X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // white line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<12; X++) {
        // red
        WRITE_DATA(255);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<10; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
       }}
      // yellow line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<8; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(255);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<6; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
        }}
      // cyan line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<4; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(255);
        // blue      
        WRITE_DATA(0);
       }}
      // black line
    // reset screen to receive data
    WRITE_COMMAND(REG_DISPStart);
    WRITE_DATA(0x00);
    WRITE_COMMAND(REG_DataWrite);
    for(Y=0; Y<160; Y++) {
      for(X=0; X<2; X++) {
        // red
        WRITE_DATA(0);
        // green      
        WRITE_DATA(0);
        // blue      
        WRITE_DATA(0);
  }}
  delay(3000);  
  }}        
    void init_OLED() {
  WRITE_COMMAND(REG_SOFTRES); // Software Reset
 
  //    WRITE_COMMAND(REG_DDISP_ON_OFF); // Display ON/OFF SET
  //    WRITE_DATA(0x00); // Display OFF
 
  WRITE_COMMAND(REG_DSTBY_ON_OFF);
  WRITE_DATA(0x00);
 
  WRITE_COMMAND(REG_DFRAME);
  //    WRITE_DATA(0x00);        //60Hz
  //    WRITE_DATA(0x01);        //75Hz
  WRITE_DATA(0x02);        //90Hz
  //    WRITE_DATA(0x03);        //105Hz
  //    WRITE_DATA(0x04);        //120Hz
  //    WRITE_DATA(0x05);        //135Hz
  //    WRITE_DATA(0x06);        //150Hz
 
  WRITE_COMMAND(REG_WriteDirection);
  //    WRITE_DATA(0x00);        //RGB
  WRITE_DATA(0x02);        //BGR
 
  WRITE_COMMAND(REG_ScanDirection);
  //    WRITE_DATA(0x00);        //
  WRITE_DATA(0x01);        //
 
  WRITE_COMMAND(REG_IF_Bus_Sel);
  WRITE_DATA(0x00);        //6bit interface bus
  //    WRITE_DATA(0x01);        //8bit interface bus
  //    WRITE_DATA(0x02);        //9bit interface bus
  //    WRITE_DATA(0x03);        //16bit interface bus
  //    WRITE_DATA(0x04);        //18bit interface bus
 
  //    WRITE_COMMAND(REG_PeakDelay);
  //    WRITE_DATA(0x00);
 
  WRITE_COMMAND(REG_PeakWidth);
  WRITE_DATA(0x03);
  WRITE_DATA(0x0F);
  WRITE_DATA(0x05);
 
  WRITE_COMMAND(REG_DotCurrent);
  WRITE_DATA(0x08);
  WRITE_DATA(0x0B);
  WRITE_DATA(0x02);
  WRITE_DATA(0x09);
  WRITE_DATA(0x0A);
  WRITE_DATA(0x0D);
 
  //    WRITE_COMMAND(REG_PreC_Width);
  //    WRITE_DATA(0x02);
 
  WRITE_COMMAND(REG_DDISP_ON_OFF); // Display ON/OFF SET
  WRITE_DATA(0x01); // Display OFF
}
 
void WRITE_COMMAND(unsigned char db_data)
{
  digitalWrite(A0B, HIGH);  //command
  PORTC = ~db_data;
  digitalWrite(CSB, HIGH);
  digitalWrite(WRB, HIGH);
  digitalWrite(WRB, LOW);
  digitalWrite(CSB, LOW);
}
 
void WRITE_DATA(unsigned char db_data)
{
  digitalWrite(A0B, LOW);  //parameter
  PORTC = ~db_data;
  digitalWrite(CSB, HIGH);
  digitalWrite(WRB, HIGH);
  digitalWrite(WRB, LOW);
  digitalWrite(CSB, LOW);
}
