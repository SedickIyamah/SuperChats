#include "message.h"
#include <ctime>
#include <chrono>


Message::Message(){
    string text = "XXX";
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%m-%d-%Y %H:%M:%S",timeinfo);
    std::string str(buffer);
    string timeStamp = str;
}

string message::GetObfuscation()
{
//    obfuscationCode = n;
    return obfuscationCode;
}

/*bool message::ValidateObfuscation(string n)
{
    bool is_valid = false;
    if(obfuscationCode == n)
    {
        is_valid = true;
    }
    return is_valid;
}*/

void message::setText(string message)
{
    text = message;
    return;
}
void message::PrintInfo()
{
    cout << timeStamp << endl;
    cout << text << endl;
    return;
}

void message::SetTimeStamp()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%m-%d-%Y %H:%M:%S",timeinfo);
    std::string str(buffer);
    timeStamp = str;
    return;
}

string message::ToString()
{
    string info = text + " | " + timeStamp;
    return info;
}
