#include "List.h"

std::vector<Task> List::GetTasks() { return m_Tasks; }
std::string List::GetName() { return m_Name; }
void List::SetTasks(std::vector<Task> Tasks){m_Tasks = Tasks;}
void List::SetName(std::string Name) { m_Name = Name; }