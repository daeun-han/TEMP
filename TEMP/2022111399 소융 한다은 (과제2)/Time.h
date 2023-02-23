class Time
{
public:
	Time();
	Time(int);
	int getHour();
	int getMinute();
	int getSecond();
	void setTime(int);

private:
	int hour;
	int minute;
	int second;
};

