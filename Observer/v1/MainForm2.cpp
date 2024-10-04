#include <string>
#include <iostream>
using std::string;
using std::cout;

// 以下几个类的具体实现不重要
class Form{

};

class TextBox{
public:
	string getText(){
		// ...
		return "";
	}
};

class ProgressBar{
public:
	void setValue(float value){
		// ...
	}
};

class FileSplitter{
public:
	FileSplitter(string filePath, int number){
		// ...
	}

	void split(){
		// ...
	}

	void addIProgress(IProgress* p){
		// ...
	}

	void removeIProgress(IProgress* p){
		// ...
	}
};

class IProgress{

};


// 一个主的继承类，其他都是接口
class MainForm : public Form, public IProgress
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;

	ProgressBar* progressBar;

public:
	void Button1_Click(){

		string filePath = txtFilePath->getText();
		int number = atoi(txtFileNumber->getText().c_str());

		ConsoleNotifier cn;

		FileSplitter splitter(filePath, number);

		// 观察者 自己决定 是否订阅通知
		splitter.addIProgress(this); //订阅通知
		splitter.addIProgress(&cn); //订阅通知

		// 目标对象 内部发送通知 
		// 通知观察者 的update 
		// 目标对象对具体实现一无所知
		splitter.split();

		splitter.removeIProgress(this);

	}

	virtual void DoProgress(float value){
		progressBar->setValue(value);
	}
};

class ConsoleNotifier : public IProgress {
public:
	virtual void DoProgress(float value){
		cout << ".";
	}
};

