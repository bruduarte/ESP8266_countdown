#include "LocalDatabase.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>



class Countdown
{
private:
    /* data */
public:
    Countdown(/* args */);
    ~Countdown();

    void displayFormatting(char* char_in, char* char_out, int maxSize); //function to format the characters to be displayed, limits size!
    void serialDisplayCountdown(String time, int hour, int min, int sec, timetableEntry *timetable);
    void displayCountdown(Adafruit_SSD1306 &display,String time, int hour, int min, int sec, timetableEntry *timetable); 
};





