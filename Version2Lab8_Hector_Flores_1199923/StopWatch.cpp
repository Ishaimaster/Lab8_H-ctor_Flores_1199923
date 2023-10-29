#include "StopWatch.h"

using namespace std;

void StopWatch::start()
{
	start_time = chrono::steady_clock::now();
}

void StopWatch::stop()
{
	end_time = chrono::steady_clock::now();
}

double StopWatch::elapsed_time()
{
	chrono::duration<double, milli> elapsed_ms = end_time - start_time;
	return elapsed_ms.count();

}