#include "Manager.h"
#include "GraphMethod.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

Manager::Manager()	
{
	graph = nullptr;	
	fout.open("log.txt", ios::app);
	load = 0;	//Anything is not loaded
}

Manager::~Manager()
{
	if(load)	//if graph is loaded, delete graph
		delete graph;	
	if(fout.is_open())	//if fout is opened, close file
		fout.close();	//close log.txt File
}

void Manager::run(const char* command_txt){
	ifstream fin;	//Command File Input File Stream
	fin.open(command_txt, ios_base::in);//File open with read mode
		
	if(!fin) { //If command File cannot be read, Print error
		fout<<"command file open error"<<endl;
		return;	//Return
	}
	
	fin.close();
	return;
}

bool Manager::LOAD(const char* filename)
{
	
}

bool Manager::PRINT()	
{

}

bool Manager::mBFS(char option, int vertex)	
{
	
}

bool Manager::mDFS(char option, int vertex)	
{
	
}

bool Manager::mDIJKSTRA(char option, int vertex)	
{
	
}

bool Manager::mKRUSKAL()
{
 	
}

bool Manager::mBELLMANFORD(char option, int s_vertex, int e_vertex) 
{
	
}

bool Manager::mFLOYD(char option)
{
	
}

bool Manager::mKwoonWoon(int vertex) {
	
}

void Manager::printErrorCode(int n)
{
	fout<<"========ERROR======="<<endl;
	fout<<n<<endl;
	fout<<"===================="<<endl << endl;
}


