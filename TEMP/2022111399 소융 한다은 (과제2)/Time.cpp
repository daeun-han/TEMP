#include "Time.h"
#include <ctime>
using namespace std;

Time::Time()
{
	int totalSeconds = time(0);
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = (totalHours + 9) % 24;
}

Time::Time(int elapseTime)
{
	int totalSeconds = elapseTime;
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = (totalHours + 9) % 24;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::setTime(int elapseTime)
{
	int totalSeconds = elapseTime;
	second = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	minute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	hour = (totalHours + 9) % 24;
}