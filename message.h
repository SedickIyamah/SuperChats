#ifndef MESSAGE_H
#define MESSAGE_H

#include <stdio.h>
#include <iostream>

using namespace std;

class Message{
    public: 
        Message();
        Message(string n){};
//        void SpellCheck(string text);
        string GetObfuscation();
//        bool ValdiateObfuscation(string n);
//        string AutoReply();
        string GetTimeStamp();
        void setText(string message);
        void PrintInfo();
        void SetTimeStamp();
        string ToString();

    private: 
        string timeStamp;           //May not need Hour and min time stamps
/*        string timeStampHour;
        string timeStampMin;*/
        string text; 
        string obfuscationCode;
};

#endif
