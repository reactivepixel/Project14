#include "List.h"

std::vector<Task> List::GetTasks() { return m_Tasks; }
std::string List::GetName() { return m_Name; }
void List::SetTasks(std::vector<Task> Tasks){m_Tasks = Tasks;}
void List::SetName(std::string Name) { m_Name = Name; }
#include "List.h"


void List::Delete(size_t index) {
	m_Tasks.erase(m_Tasks.begin() + index);
}

void List::View() const {
	for (size_t i = 0; i < m_Tasks.size(); i++)
	{
		std::cout << m_Tasks[i];
	}
}
