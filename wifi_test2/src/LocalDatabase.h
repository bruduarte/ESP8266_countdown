/*This class deals with the database of the timtable of the public transportation*/

#include <iostream>
#include <string.h>
#include <FS.h>
#include <LittleFS.h>

#define MAXSTOPS        5         //maximum number of stops
#define MAXLINES        3         //maximum number of lines to work with
#define MAXTIMEPERLINE  (60/5)*10 //maximum number of times the line stops at a station in a day, assuming every 5min.
#define DBSIZE   MAXSTOPS*MAXLINES*MAXTIMEPERLINE // maximum size of the database!


//database entry
struct timetableEntry
{
    char     lineID [4];
    char     hour [2];
    char     min [2];      
    char     stopName [10]; //name of the stop
    char     walkTime [2]; //time it takes from your location to the stop

};

class LocalDatabase
{
private:
    struct timetableEntry timetable[DBSIZE];
    String  line;
public:
    LocalDatabase();
    ~LocalDatabase();
    void loadTimetable(const char* filename);
    // void saveTimetable();
    void printDatabase(const char* filename);
};


