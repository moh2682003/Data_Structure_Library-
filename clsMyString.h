#pragma once
#include "clsMyStack.h"

class clsMyString
{
	string _Value;
	clsMyStack <string> _Stack;
	clsMyStack <string> _RedoStack;

public:

	string getValue()
	{
		return _Value;
	}

	void setValue(string Value)
	{
		_Stack.push(_Value);
		_Value = Value;
	}
	 
	__declspec(property(get = getValue , put = setValue )) string Value;

	
	bool Print()
	{
		if (_Stack.Size() <= 0)
			return false;
		cout << _Stack.Top();
		return true;
	}

	bool Undo()
	{
		if (_Stack.Size() <= 0) return false;

		_RedoStack.push(_Value);
		_Value = _Stack.Top();
		_Stack.pop();
		return true;
	}

	bool Redo()
	{
		if (_RedoStack.Size() <= 0) return false;
		_Stack.push(_Value);
		_Value = _RedoStack.Top();
		_RedoStack.pop();
		return true;
	}

	
};

