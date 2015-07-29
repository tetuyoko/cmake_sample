//
//  main.h
//  example
//
//  Created by tetuyoko on 2015/07/29.
//  Copyright (c) 2015年 tetuyoko. All rights reserved.
//

#ifndef example_main_h
#define example_main_h

#include <string.h>

class Hito
{
    char name[40];
    int age;
public:
    enum ReadResults {
        // 成功です。
        kReadResult_Success = 0,
    };

    Hito();
    Hito(char* ss);
    Hito(int tosi);
    Hito(char *ss, int tosi);
    void setname(char* ss) { strcpy(name,ss); }
    void setage(int tosi) { age=(tosi<0) ? 0: tosi; }
    char* getname() { return name; }
    int getage() { return age; }
    void disp();
};


#endif
