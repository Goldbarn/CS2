//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        18 Oct 2024
// Author:      Rowan Ess
//
// Description: Class implementation for a log entry.
//
//
 
#include "string.hpp"
#include "logentry.hpp"
#include <iostream>
#include <vector>

void Date::init(const String& d, const String& m, const String& y) {
    day = d;
    month = m;
    year = y;
}

void Time::init(const String& h, const String& m, const String& s) {
    hour = h;
    minute = m;
    second = s;
}

// REQUIRES: A String in correct format
// ENSURES: A properly formatted LogEntry based on that data
LogEntry::LogEntry(const String& line) {

    std::vector<String> logEntryParts = line.split(' ');

    if (logEntryParts.size() == 10) {

        host = logEntryParts[0];

        date.init(logEntryParts[3].substr(1, 2), logEntryParts[3].substr(4, 6), logEntryParts[3].substr(8, 11));

        time.init(logEntryParts[3].substr(13, 14), logEntryParts[3].substr(16, 17), logEntryParts[3].substr(19, 20));

        request = logEntryParts[5] + ' ' + logEntryParts[6] + ' ' + logEntryParts[7];

        status = logEntryParts[8];

        if (logEntryParts[9] == '-') { number_of_bytes = 0; }
        else { 
            int result = 0;
            int power = 1;
            for (int i = 0; i < logEntryParts[9].length(); ++i) {
                int temp = logEntryParts[9][logEntryParts[9].length() - i - 1] - int('0');
                result += temp * power;
                power *= 10;
            }
            number_of_bytes = result;
        }
    }
}

// REQUIRES: a bunch of strings in a text file
// ENSURES: they are sorted into a bunch of logentry classes
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    while (!in.eof()) {
        char temp[300];
        in.getline(temp, 300);
        if (in.eof()) { break; } 
        String tempora(temp);
        LogEntry shrimp(tempora);
        result.push_back(shrimp);
    }
    return result;
}

std::ostream& operator<<(std::ostream& out, const LogEntry& loggy) {
    out << "- Host: " << loggy.host << '\n' << "- Date: " << loggy.date << '\n' << "- Time: " << loggy.time << '\n' << "- Request: " << loggy.request << '\n' << "- Status: " << loggy.status << '\n' << "- Size: " << loggy.number_of_bytes << '\n';
    return out;
}

std::ostream& operator<<(std::ostream& out, const Date& datey) {
    out << datey.day << '/' << datey.month << '/' << datey.year;
    return out;
}

std::ostream& operator<<(std::ostream& out, const Time& timey) {
    out << timey.hour << ':' << timey.minute << ':' << timey.second;
    return out;
}

// REQUIRES: Properly formatted vector logentry 
// ENSURES: they are all printed out
void output_all(std::ostream& out, const std::vector<LogEntry>& vecky) {

    for (int i = 0; i < int(vecky.size()); ++i) {
        out << "Log Entry " << i + 1 << ':' << '\n' << vecky[i] << '\n';
    }
    
}

// REQUIRES:properly formatted logentries in a vector
// ENSURES:host is ouputted
void by_host(std::ostream& out, const std::vector<LogEntry>& vecky) {

    for (int i = 0; i < int(vecky.size()); ++i) {
        out << i + 1 << " : " << vecky[i].getHost() << '\n';
    }

}

// REQUIRES:properly formatted logentries in a vector
// ENSURES:total bytes are returned
int byte_count(const std::vector<LogEntry>& vecky) {
    int byteCount = 0;
    for (int i = 0; i < int(vecky.size()); ++i) {
        byteCount += vecky[i].getBytes();
    }
    return byteCount;
}

