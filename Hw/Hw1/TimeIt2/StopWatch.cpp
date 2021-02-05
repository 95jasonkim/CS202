/*
Jason Kim
StopWatch class cpp file
*/

#include "StopWatch.hpp"
using std::chrono::high_resolution_clock;
using std::chrono::duration;
using std::chrono::duration_cast;


StopWatch::StopWatch():_startTime(high_resolution_clock::now())
{}

void StopWatch::start()
{
	_startTime = high_resolution_clock::now();
}

void StopWatch::stop()
{
	_endTime = high_resolution_clock::now();
}

double StopWatch::seconds()
{
	duration<double> time = duration_cast<duration<double>>(_endTime - _startTime);
	return time.count();
}

double StopWatch::milliSeconds()
{
	duration<double> time = duration_cast<duration<double>>(_endTime - _startTime);
	return time.count() * 1000;
}