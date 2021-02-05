/*
StopWatch class hpp file
*/
#include<chrono>

class StopWatch
{
public:
	StopWatch();

	void start();
	void stop();
	double seconds();
	double milliSeconds();
private:
	std::chrono::high_resolution_clock::time_point _startTime;
	std::chrono::high_resolution_clock::time_point _endTime;
};

