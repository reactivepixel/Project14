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
