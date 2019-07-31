#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

//------------------------------------CLASS_DEFINE----------------------------------------------------------------------------------------------------
class Record{
	public:
		virtual void add() = 0;
		virtual void print() = 0;
		virtual void remove() = 0;
};

class Fruit;

class Fruit : public Record{
	private:
		string name;
		int weight, price;
	
	public:		
		void add();
		void print();
		void remove();
		
		Fruit(){ 
			name = "";
			weight = 0;
			price = 0;
		}
};

//----------------------------------FREE_FUNCTIONS---------------------------------------------------------------------------------------------------

std::string toString(int valInt){
	std::ostringstream putStr;
	putStr << valInt;
	return putStr.str();
}

/*
	Foo to clean an int input.
*/
void Read(string U, int &T){
			
	while (true){
		
		cout << U << "";
		cin >> T;
		
		if (cin.peek() == '\n' and T>0){
			cin.get();
			break;
			system("cls");
		}
		else{
			system("cls");
			cout << "Wrong! Value must be a number and >0!" << endl;
			cout<<""<<endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
}

void removeSpaces(std::string& str){
    for (std::string::iterator it = str.begin(); it != str.end(); it++){   
        std::string::iterator begin = it;
        while (it != str.end() && ::isspace(*it) )it++;
        if (it - begin > 0)
            it = str.erase(begin + 1, it) - 1;
    }
}

bool checkFile(char* filePathName){
	
	ifstream file;
	file.open(filePathName);
	if (!file){
		cout << "File not open! Wrong directory or it does not exist. \n\n"; 
		return false;
	}
	else{
		cout << "File is open! All GOOD! =) \n\n";
		return true;
	}
	file.close();
}

void parseRecord(string record){
	
	while(!EOF){
		
		//			
	}
}

/*
	To search a record:
	Take params. Check file. 
	Open
	
*/
void searchRecord(char* filePathName, string name, string weight, string price){
	
	bool check = checkFile(filePathName);
	
	while(true){

		if(check == false) break;
		else{
			
		}
	}
}


//----------------------------------CLASS_METHODS_REALIZE--------------------------------------------------------------------------------------


/*  
	When add first check values for correct input. 
	Then form a resulting string into a record variable.
	Then check a file. If it exists - open. Else create and open.
	Then search a file. If same record found - toInt(weight and price). Else add to the end.
	Then close a file.
*/
void Fruit :: add(){
	string record;	//resulting value to write to file
	
	while(true){
		cout << "Please enter a fruit name: " << endl;
		cin >> name;
		//
		cout << "Input name: " << name << endl;
		removeSpaces(name);
		cout << "Output name" << name << endl;
		//
		if(name.length() <= 1 or name == "" or name == " "){
			cout << "Wrong input! Enter a correct name! It can not be built by spaces or be empty or be just a single letter." << endl;
			system("cls");
		}
		else break;	
	}
	
	Read("Enter a fruit weight: ", weight);
	Read("Enter a fruit price: ", price);
	
	record = name + " " + toString(weight) + " " + toString(price);	//compile a result value
	
	ifstream file;
	file.open("/fruits.txt");
	
	file.close();
}

/*
	To print fruits: 
	First open a file. If it do not exist - create.
	Search for every record by EOS. Count every record. If empty - alert. Else print every record in console.
	When searching then count total weight of fruits (detail to int variable between two spaces: toInt("  <weight> ")).
	At the same time search and count total price (detail to int variable between space and EOS: toInt(" <price>\n")).
	Then print underline total count of fruits, their weight and price. CLose file. Then dance cuz you did it =)
*/
void Fruit :: print(){
	
}

/*
	To remove fruit from list: 
	First check existing of file. If it is - open. Else alert.
	When open - search a fruit name. If there is no such so alert. 
	When found - delete it from from \n to \n. Then alert that delete is done.
	Close file.
*/
void Fruit :: remove(){
	
}
//------------------------------------MAIN_BLOCK-----------------------------------------------------------------------------------------------------

int main(){
	
	int key1, key2;
	char command[255];
	vector <string> input;
	string into, result;
	
	cout << "Commands list: " << endl;
	cout << "add <fruit_name> <weight> <price>" << endl;
	cout << "remove <fruit_name> <weight> <price>" << endl;
	cout << "print" << endl;
	cout << "exit\n" << endl;
	
	//for( ; ; ){
	while(true){
	
		cout << "Enter command: " << endl;
		
		getline(cin, input);
		cout << input;
		
		
		
		
		
//		gets(command);
//		cout << "Command is: " << command << "\n" << endl;
//		
//		string str_command = string(command);
//		input.push_back(str_command);
//		//cout << "vector: "<< input << endl;
//		//cout << "1st word: "<< input[1] << endl;
//		
//		if(str_command == "exit") {
//			cout << "Exit done! Goodbuy!" << endl << endl; 
//			break;
//		}
//		
//		else if(str_command == "print"){
//			cout << "PRINT" << endl << endl;
//		}
//		
//		else if (input[0] == "add"){
//			cout << "TI PIDOR" << endl;
//			//run = false;
//		}
//		
		
		/*cout<<""<<endl;
		cout<<"Select action:"<<endl;
		cout<<"1. Add fruits"<<endl;
		cout<<"2. Print fruits"<<endl;
		cout<<"3. Remove fruits"<<endl;
		cout<<"7. Exit programm"<<endl;
		
		while(true){
	
					cin>>key1;
					cout<<""<<endl;
			
					if(cin.peek()=='\n'){
						cin.get();
						break;
					}
					else{
						cout<<"Wrong input! Select a correct action."<<endl;
						cin.clear();	
					while(cin.get()!='\n'){}
					}
				}
	
		switch(key1){
			case 1: //checkFile("fruits.txt");
					break; 
					
			case 2: 
					break;
										
			case 3: 
					break;
			
			case 7: exit(1);
			
			default:cout<<"Wrong! Select a correct action."<<endl; break;
		}*/
	}
	
}
	
