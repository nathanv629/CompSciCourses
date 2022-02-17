/*
	BCJ
	El-haghassan, Bilal (MW 11:10)
	Van, Nathan (MW 11:10)
	Bui, Catherine (MW 11:10)
	Luna, Julian (MW 11:10)
	Kim, Juyeon (MW 11:10)

	May 03, 2020

	CS A250
	Project 1 - Part A
*/

#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "CharacterType.h"

const int NUM_OF_KINGDOMS = 7;	// this is the capacity of the array
const std::string KINGDOMS[] = {
	"The North",
	"The Vale",
	"The Stormlands",
	"The Reach",
	"The Westerlands",
	"The Iron Islands",
	"Dorne"
};

class CandidateType : public CharacterType
{
public:
	// Default constructor
	// Copy constructor
	CandidateType();
	CandidateType(const CandidateType& other);

	// Copy assignment operator
	CandidateType& operator=(const CandidateType& other);

	// updateVotesByKingdom
	void updateVotesByKingdom(int index, int newVotes);

	// getTotalVotes
	// getVotesByKingdom
	int getTotalVotes() const;
	int getVotesByKingdom(int index) const;

	// printCandidateInfo
	// printCandidateTotalVotes
	void printCandidateInfo() const;
	void printCandidateTotalVotes() const;

	// Destructor
	~CandidateType();

private:
	int totalVotes;
	int numOfKingdoms;
	int* kingdomVotes;
};

#endif
