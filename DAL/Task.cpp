#include "Task.h"


Task::Task(std::string _Name, int _id, std::string _Text)
{
	this->Name = _Name;
	this->id = _id;
	this->Text = _Text;
}


std::string Task::GetName() const
{
	return Name;
}

std::string Task::GetText() const
{
	return Text;
}

void Task::SetText(std::string Text)
{
	this->Text = Text;
}

State Task::GetCondition() const
{
	return CurrentState;
}

void Task::SetCondition(State Condition)
{
	CurrentState = Condition;
}

std::string Task::GetComment(int id) const
{
	return Comments[id];
}

std::vector<std::string> Task::GetComments() const
{
	return Comments;
}

void Task::EditComment(std::string Comment, int id)
{
	Comments[id] = Comment;
}

void Task::AddCommet(std::string NewCommet)
{
	Comments.push_back(NewCommet);
}
