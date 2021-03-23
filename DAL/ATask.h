#pragma once
#include "AEntity.h"
#include <string>
#include <vector>
enum class State
{
	Open,
	Active,
	Resolved
};

class ATask : public AEntity
{
protected:
	//AStaff* CurrentStuff;
	std::string Name;
	std::string Text;
	State CurrentState;

public:
	std::vector<std::string> Comments;
	//virtual void SetStaff(AStaff* Staff) = 0;
	virtual std::string GetName() const = 0;
	virtual std::string GetText() const = 0;
	virtual void SetText(std::string Text) = 0;
	virtual State GetCondition() const = 0;
	virtual void SetCondition(State Condition) = 0;
	virtual std::string GetComment(int id) const = 0;
	virtual std::vector<std::string> GetComments() const = 0;
	virtual void EditComment(std::string Comment, int id) = 0;
	virtual void AddCommet(std::string NewCommet) = 0;
};

