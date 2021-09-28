#pragma once

#include <string>
#include <vector>
#include <iostream>

namespace string{

/**
 * Find the indices of all occurences of a certain substring inside a string
 * 
 * @param haystack The string that needs to be searched
 * @param needle The substring to look for inside the haystack
 * @return std::vector<size_t> The container of indices of the needle substring inside the haystack
 */
std::vector<size_t> find_all(const std::string& haystack, const std::string& needle){

    std::vector<size_t> list;

    size_t i = haystack.find(needle);

    while(i != std::string::npos){
        list.push_back(i);
        i = haystack.find(needle, i + needle.length());
    }

    return list;
} 

/**
 * Find the indices of all occurences of a certain character inside a string
 * 
 * @param haystack The string that needs to be searched
 * @param needle The character to look for inside the haystack
 * @return std::vector<size_t> The container of indices of the needle substring inside the haystack
 */

std::vector<size_t> find_all(const std::string& haystack, const char c){
    std::string char_string;
    char_string.push_back(c);

    return find_all(haystack, std::move(char_string));
}




}