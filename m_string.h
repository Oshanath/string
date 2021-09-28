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
 * @param occurences maximum number of search results needed
 * @return std::vector<size_t> The container of indices of the needle substring inside the haystack
 */
std::vector<size_t> find_all(const std::string& haystack, const std::string& needle, size_t occurences = -1){

    /**
     * When occurences = -1, since it is a size_t that'll be the largest number that type can hold, according to the rules of
     * 2's complement. In the function we count the found_needles and if the quota is reached (found_needles == occurences)
     * the loop will return the results.
     */

    std::vector<size_t> list;

    size_t i = haystack.find(needle);
    size_t found_needles = 0;

    while(i != std::string::npos && found_needles < occurences){
        list.push_back(i);
        found_needles++;
        i = haystack.find(needle, i + needle.length());
    }

    return list;
} 

/**
 * Find the indices of all occurences of a certain character inside a string
 * 
 * @param haystack The string that needs to be searched
 * @param needle The character to look for inside the haystack
 * @param occurences maximum number of search results needed
 * @return std::vector<size_t> The container of indices of the needle substring inside the haystack
 */

std::vector<size_t> find_all(const std::string& haystack, const char c, size_t occurences = -1){
    std::string char_string;
    char_string.push_back(c);

    return find_all(haystack, std::move(char_string), occurences);
}




}