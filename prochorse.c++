#include<iostream>
#include<string>
#include<random>

int NUM_HORSES = 5;
int TRACK_LENGTH =15;

 void advance(int horseNum, int* horses);
 void printLane(int horseNum, int* horses);
 bool isWinner(int horseNum, int* horses);

int main(){
	int horses[] = {0,0,0,0,0};
	bool keepGoing = true;

	while (keepGoing){
		for (int i : horses){
			advance(horses[i]);
			printLane(horses[i]);
			if (isWinner(horse[i])){
				keepGoing = false;
			}
		
		}
	std::cin;
	}


return 0;
}

 void advance(int horseNum, int* horses){
	for(int i:horses){
		std::random_device rd;
		std::uniform_int_distribution<int> dist(0, 1);
		coin = dist(rd);
		horses[i] + coin;
	}
}


void printLane(int horseNum, int* horses){
	for(int i = 0; i < rangeTRACK_LENGTH; i++){
		if (horseNum[i] == TRACK_LENGTH){
			std::cout<<horses<<std::endl;
		else{
			std::cout<<"."<<std::endl;
		}
		}	
}

bool isWinner(int horseNum, int* horses){
	bool result = false;

	if (horseNum == TRACK_LENGTH){
		result = true;
		std::cout<<horseNum, "won"<< std::endl;
	}
	return result;
}

