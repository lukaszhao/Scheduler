#pragma once

#include <string>
#include <functional>
#include <chrono>

class Job
{

public:

	std::string              uniqueId;
	std::string              name;
	
	bool                     hasBeenExecuted;
	bool                     isEnabled;
	bool                     isRepeatingJob;

	std::function<void()>    execute;
	std::chrono::system_clock::time_point   scheduledTime;

	Job() = delete;

	~Job() {}

	Job(const std::string& jobUniqueId,
		const std::string& jobName,
		bool jobIsEnabled,
		bool jobIsRepeatable,
		const std::function<void()> jobExecuteFunction,
		const std::chrono::system_clock::time_point& jobTime):
			uniqueId(jobUniqueId),
		    name(jobName),
		    hasBeenExecuted(false),
		    isEnabled(jobIsEnabled),
		    isRepeatingJob(jobIsRepeatable),
		    execute(jobExecuteFunction),
		    scheduledTime(jobTime)
	{

	}


};

