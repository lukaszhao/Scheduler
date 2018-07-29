#pragma once

#include <string>

class Job
{

private:

	std::string     d_jobUniqueId;
	std::string     d_jobName;
	
	bool            d_isNotExecuted;
	bool            d_isEnabled;
	bool            d_isRepeatingJob;

public:
	Job();
	~Job();
};

