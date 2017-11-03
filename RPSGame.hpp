/*********************************************************************
 * Author: Noah Buchen, Alexandra Henley, Elliott Lapinel, Patrick
 * Rice, and Samantha Tone
 * Date: 10/25/2017
 * Description: Header file for the RPSGame class
*********************************************************************/
#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "tool.hpp"

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rock.hpp"
#include "Paper.hpp"
#include "Scissors.hpp"

class RPSGame{

public:
	RPSGame();
	void playGame();
	void assignToolUser();
	void assignToolComp();
	void printResults();

private:
	Tool* compTool;
	Tool* userTool;
	int rounds;
	string inputStr;
	char rpseInput;
	char ynInput;
	char yn[2] = {'y','n'};
	char rpse[4] = {'r','p','s','e'};
	vector<char> userHistory;
	char compChoice;
	char gameWinner;

	int hWins;
	int cWins;
	int ties;

	char rock = 'r';
	char paper = 'p';
	char scissor = 's';
	int rCount;
	int pCount;
	int sCount;
	char last;
	char current;
	int randVal;
	int userStrength;
	int compStrength;
	int width;
};

#endif
