#pragma once

#include "Job.h"
#include <thread>
#include <chrono>
#include <unordered_map>
#include <memory>



class JobScheduler
{

private:

	std::unordered_map<std::string, std::shared_ptr<Job>>    d_jobs;

	std::string                                              d_lastErrorMessage;

	int                                                      d_lastRcode;


public:

	JobScheduler():
		d_lastRcode(0)
	{}


	bool addJob(const std::shared_ptr<Job>& jobPtr);
		// add job to d_jobs
		// start a thread that sleeps until execute time and execute()
		// function returns true if succeeds; o.w. false


	static bool calculateTimeToSleep(const std::chrono::high_resolution_clock::time_point& targetTime,
		                             std::chrono::duration<double, std::milli>& durationToSleep);

	
};

