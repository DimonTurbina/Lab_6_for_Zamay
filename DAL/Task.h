#pragma once
#include "ATask.h"
class Task : public ATask
{
public:
	Task(std::string _Name, int _id, std::string _Text);
	virtual std::string GetName() const override;
	virtual std::string GetText() const override;
	virtual void SetText(std::string Text) override;
	virtual State GetCondition() const override;
	virtual void SetCondition(State Condition) override;
	virtual std::string GetComment(int id) const override;
	virtual std::vector<std::string> GetComments() const override;
	virtual void EditComment(std::string Comment, int id) override;
	virtual void AddCommet(std::string NewCommet) override;
};

