#include "stdafx.h"
#include "JobScheduler.h"
#include <sstream>





bool JobScheduler::addJob(const std::shared_ptr<Job>& jobPtr)
{
	if (d_jobs.find(jobPtr->uniqueId) == d_jobs.cend()) {
		// d_jobs already has this unique id
		std::stringstream ss;
		ss << "There is already a job with uniqueId = " << jobPtr->uniqueId
		   << ", cannot add this job!";
		d_lastErrorMessage = ss.str();
		d_lastRcode = -1;
		return false;
	}

	// insert job into d_jobs
	d_jobs[jobPtr->uniqueId] = jobPtr;

	// calculate time to sleep


}




bool JobScheduler::
calculateTimeToSleep(const std::chrono::high_resolution_clock::time_point& targetTime,
	                 std::chrono::duration<double, std::milli>& durationToSleep)
{
	std::chrono::high_resolution_clock::time_point now = std::chrono::high_resolution_clock::now();

	if (targetTime < now) {

	}
}