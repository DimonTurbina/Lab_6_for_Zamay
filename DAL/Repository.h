#pragma once
#include <vector>
#include <map>
#include "Staff.h"

template <class T>
class Repository
{
private:
	std::map<int, T*> Entities;
public:
	
	Repository() {};

	int GetId(T* Obj) {
		return Obj->GetId();
	}
	std::map<int, T*> GetAll() {
		return Entities;
	};
	void Add(T* Obj) {
		int Key = Obj->GetId();
		/*if (Entities.find(Key) != Entities.cend())
			return;*/
		Entities.emplace(Key, Obj);
	};
	void Delete(T* Obj) {
		int Key = Obj->GetId();
		if (Entities.find(Key) == Entities.cend())
			return;
		Entities.erase(Key);
	};
	void DeleteById(int id) {
		if (Entities.find(id) == Entities.cend())
			return;
		Entities.erase(id);
	};
	T* Get(int id) {
		return Entities.find(id)->second;
	}
};

