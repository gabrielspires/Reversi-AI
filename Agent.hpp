#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include <vector>

using namespace std;

class Agent
{
private:
    /* data */
public:
    Agent(/* args */);
    ~Agent();

    string MakeMove(vector< vector<int> > board);

};

Agent::Agent(/* args */)
{
}

Agent::~Agent()
{
}

string Agent::MakeMove(vector< vector<int> > board)
{
    string move = "A0";
    
    return move;
}

#endif