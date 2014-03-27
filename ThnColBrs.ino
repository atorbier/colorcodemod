/*

                         Open Source
             Modding some local oled shield code      
             ++++++++++Just For Kicks++++++++++
                            R2R0
*/
    const byte REG_SOFTRES = 0x01; //Software Reset ***bit 01
    const byte REG_DDISP_ON_OFF = 0x02; //Display ON/OFF SET ***bit 02
    const byte REG_DSTBY_ON_OFF = 0x03; //Stanby Mode Set ***bit 03
    const byte REG_DFRAME = 0x04; //Set Frame Frequence ***bit 04
    const byte REG_WriteDirection = 0x05; //Sets GRAM Writing Direction ***bit 05
    const byte REG_ScanDirection = 0x06; //Row Scan Direction ***bit 06
    const byte REG_DispSize = 0x07; //Display Size Set ***bit 07
    const byte REG_IF_Bus_Sel = 0x08; //Interface bus Select ***bit 08
    const byte REG_Data_Masking = 0x09; //Masking Data ***bit 09
    const byte REG_MBOXSize = 0x0A; //Data Reading/Writing Box ***bit 010
    const byte REG_DISPStart = 0x0B; //Display Start Address ***bit 011
    const byte REG_DataWrite = 0x0C; //Reading/Write Dot Matrix Display Data ***bit 012
    const byte REG_READREG = 0x0D; //Read Register Status ***bit 013
    const byte REG_DotCurrent = 0x0E; //Set Dot Matrix Current Level ***bit 014
    const byte REG_DotPeakCurrent = 0x0F; //Set Dot Matrix Peak Current Level ***bit 015
    const byte REG_PreC_Width = 0x1C; //Sets Precharge pulse width ***bit 028
    const byte REG_PeakWidth = 0x1D; //Set Peak Pulse Width ***bit 029
    const byte REG_PeakDelay = 0x1E; //Sets Peak Pulse Delay(0u~63u) ***bit 030
    const byte REG_Row_Scan = 0x1F; //Set Row Scan Operation ***bit 031
    const byte REG_IF_SEL = 0x2D; //Set Interface Mode ***bit 045
    const byte REG_RGB_IF_CTRL = 0x2E; //RGB I/F Control ***bit 046
    const byte REG_RGB_IF_POL = 0x2F; //Set RGB I/F Polarity ***bit 047
    const byte REG_VCC_R_SEL = 0x30; //Set Internal Regulator for Row Scan ***bit 048
    const byte REG_XTALK_Mode = 0x31; //Set XTALK Condition Setting ***bit 049
    const byte REG_XTALK_EN = 0x32; //Set XTALK Enable ***bit 050
    const byte REG_AGING_EN = 0x35; //Set AGING Mode ***bit 053
    const byte REG_Gamma_Tune = 0x3A; //Set Gamma Correction Table Set ***bit 058
    const byte REG_Gamma_Initial = 0x3B; //Set Gamma Correction Table Initialize ***bit 059
    const byte A0B = 5; //A0B pin 13 LD7222 'ADDRESS' (L:COMMAND H:PARAMETER)
    const byte CSB = 4; //CSB pin 12 LD7222 'CHIP SELECT' (ACTIVE:LOW)
    const byte WRB = 3; //WRB pin 10 LD7222 'WRITE' (ACTIVE:LOW)(C80 I/F) 
    const byte RES = 2; //RSTB pin 09 LD7222 'RESET' (ACTIVE:LOW)
    byte RED;
    byte GREEN;
    byte BLUE;
    unsigned int Y, X;    
    void setup() {    
    DDRC = ~0x00;    //D0-D7 output
    pinMode(A0B, OUTPUT);
    pinMode(CSB, OUTPUT);
    pinMode(WRB, OUTPUT);
    pinMode(RES, OUTPUT);   
    init_OLED();   
    }
    void loop() {
    while(1) { 
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
      // white line
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
  delay(5000);  
  }}        
  void init_OLED() {
  WRITE_COMMAND(REG_SOFTRES); // Software Reset
  WRITE_COMMAND(REG_DSTBY_ON_OFF); // Display ON/OFF SET
  WRITE_DATA(0x00); // Display OFF
  WRITE_COMMAND(REG_DFRAME);
  WRITE_DATA(0x02); //90Hz(00/60,01/75,03/105,04/120,05/135,06/150)
  WRITE_COMMAND(REG_WriteDirection);
  WRITE_DATA(0x04); //top-bottom  
  WRITE_COMMAND(REG_ScanDirection);
  WRITE_DATA(0x01);
  WRITE_COMMAND(REG_IF_Bus_Sel);
  WRITE_DATA(0x00); //6bit int/bus(01/8,02/9,03/16,04/18)
  WRITE_COMMAND(REG_PeakWidth);
  WRITE_DATA(0x03); //03
  WRITE_DATA(0x0F); //0F
  WRITE_DATA(0x05); //05
  WRITE_COMMAND(REG_DotCurrent);
  WRITE_DATA(0x08); //08
  WRITE_DATA(0x0B); //0B
  WRITE_DATA(0x02); //02
  WRITE_DATA(0x09); //09
  WRITE_DATA(0x0A); //0A
  WRITE_DATA(0x0D); //0D
  WRITE_COMMAND(REG_DDISP_ON_OFF); // Display ON/OFF SET
  WRITE_DATA(0x01); // Display OFF
  }
  void WRITE_COMMAND(unsigned char db_data)
  {
  digitalWrite(A0B, HIGH);  //address=command
  PORTC = ~db_data;
  digitalWrite(CSB, HIGH);  //chip select
  digitalWrite(WRB, HIGH);  //write
  digitalWrite(WRB, LOW);   //write
  digitalWrite(CSB, LOW);   //chip select
  }
  void WRITE_DATA(unsigned char db_data)
  {
  digitalWrite(A0B, LOW);  //address=parameter
  PORTC = ~db_data;
  digitalWrite(CSB, HIGH); //chip select
  digitalWrite(WRB, HIGH); //write
  digitalWrite(WRB, LOW);  //write
  digitalWrite(CSB, LOW);  //chip select
  }
