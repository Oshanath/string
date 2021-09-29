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
std::vector<size_t> find_all(
    const std::string& haystack, 
    const std::string& needle, 
    size_t occurences = -1
){

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

std::vector<size_t> find_all(
    const std::string& haystack, 
    const char needle, 
    size_t occurences = -1
){

    /**
     * Convert the character into a string and call find_all() string specialization. 
     */

    std::string char_string;
    char_string.push_back(needle);
    
    return find_all(haystack, std::move(char_string), occurences);
}

/**
 * Find the first occurence of a given substring needle inside a string haystack.
 * 
 * @param haystack The string to search in
 * @param needle The string to search for
 * @return size_t The index of the first needle if the needle exists, std::string::npos otherwise
 */
size_t find_first(
    const std::string& haystack,
    const std::string& needle
){
    return haystack.find(needle);
}

/**
 * Find the first occurence of a given character needle inside a string haystack.
 * 
 * @param haystack The string to search in
 * @param needle The character to search for
 * @return size_t The index of the first needle if the needle exists, std::string::npos otherwise
 */
size_t find_first(
    const std::string& haystack,
    const char needle
){
    return haystack.find(needle);
}

/**
 * Find the last occurence of a given substring needle inside a string haystack.
 * 
 * @param haystack The string to search in
 * @param needle The string to search for
 * @return size_t The index of the last needle if the needle exists, std::string::npos otherwise
 */
size_t find_last(
    const std::string& haystack,
    const std::string& needle
){
    return haystack.rfind(needle);
}

/**
 * Find the last occurence of a given character needle inside a string haystack.
 * 
 * @param haystack The string to search in
 * @param needle The character to search for
 * @return size_t The index of the last needle if the needle exists, std::string::npos otherwise
 */
size_t find_last(
    const std::string& haystack,
    const char needle
){
    return haystack.rfind(needle);
}



}