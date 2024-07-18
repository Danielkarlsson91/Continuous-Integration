#ifndef GREETING_H
#define GREETING_H

#include<string>
#include<cctype>
#include<algorithm>
#include<sstream>
#include<vector>

bool is_upper(const std::string &name)
{
    for(char c : name)
    {
        if(islower(c))
        {   
            return false;
        }
    }
    return true;
}

std::string purge_non_alpha(const std::string &input)
{
    std::string result = "";
    for(char c : input)
    {
        if(isalpha(c) || isspace(c))
        {
            result += c;
        }
    }
    return result;
}

const std::string &greet(const std::string &name)
{
    std::string is_name = purge_non_alpha(name);
    static std::string greeting;
    std::istringstream iss(is_name);
    std::vector<std::string> nameList;
    std::string names;
    std::vector<std::string> name_list_shout;

    while(iss >> names)
    {
        if(is_upper(names))
        {
            name_list_shout.push_back(names);
        }
        else
        {
            nameList.push_back(names);
        }
    }
    
    if(nameList.size() > 0)
    {
        if(nameList.size() == 1)
        {
            greeting = "Hello, " + nameList[0];
        }
        else if(nameList.size() == 2)
        {
            greeting = "Hello, " + nameList[0] + " and " + nameList[1] + ".";
        }
        else
        {
            greeting = "Hello, ";
            for(size_t i = 0; i < nameList.size() - 1; i++)
            {
                greeting += nameList[i] + ", ";
            }  
            greeting += "and " + nameList.back() + ".";
        }
    } 

    if(nameList.size() > 0)
    {
        
        if(name_list_shout.size() > 0)
        {
            if(name_list_shout.size() == 1)
            {
                greeting += " AND HELLO " + name_list_shout[0] + "!";
            }
            else if(name_list_shout.size() == 2)
            {
                greeting += " AND HELLO " + name_list_shout[0] + " AND " + name_list_shout[1] + "!";
            }
            else
            {
                greeting += " AND HELLO ";
                for(size_t i = 0; i < name_list_shout.size() - 1; i++)
                {
                    greeting += name_list_shout[i] + ", ";
                }  
                greeting += "AND " + name_list_shout.back() + "!";
            }
        }             
        
    }
    else
    {
        if(name_list_shout.size() > 0)
        {
            if(name_list_shout.size() == 1)
            {
                greeting = "HELLO " + name_list_shout[0] + "!";
            }
            else if(name_list_shout.size() == 2)
            {
                greeting = "HELLO " + name_list_shout[0] + " AND " + name_list_shout[1] + "!";
            }
            else
            {
                greeting = "HELLO ";
                for(size_t i = 0; i < name_list_shout.size() - 1; i++)
                {
                    greeting += name_list_shout[i] + ", ";
                }  
                greeting += "AND " + name_list_shout.back() + "!";
            }
        }       
    }


    if(nameList.size() == 0 && name_list_shout.size() == 0)
    {
        greeting = "Hello, my friend.";
    }


    return greeting; 
}

#endif