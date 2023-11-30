#pragma once

#include <vector>

class Pokemon;

class Party
{
    public:
        Party();
        ~Party();

        void addMember(Pokemon* member);


    private:
        std::vector<Pokemon*> partyMembers;

};