/*
Jason Kim
StopWatch class cpp file
*/

#include "StopWatch.hpp"
using std::chrono::high_resolution_clock;

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


