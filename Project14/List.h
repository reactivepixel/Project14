#pragma once
#include <vector>
#include <string>
#include "Task.h"

class List
{
private:
	std::vector<Task> m_Tasks;

	std::string m_Name;

public:
	std::vector<Task> GetTasks();
	std::string GetName();
	void SetTasks(std::vector<Task> Tasks);
	void SetName(std::string Name);
	// methods
};

