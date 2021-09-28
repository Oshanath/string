# Find functions
Provide a way to search inside strings, search and replace strings. 
Can search for both strings and characters as well as using regex.

[1. find_all()](https://github.com/Oshanath/string/blob/main/docs/find.md#find-all)

### 1. Find all
use the string::find_all() function to find all, or a number of occurences of a particular substring or a character inside a string.
It will return a vector of indices of the occurences.
#### Declaration
```
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
    size_t occurences = -1)
std::vector<size_t> find_all(const std::string& haystack, const char c, size_t occurences = -1);

std::vector<size_t> find_all(
    const std::string& haystack, 
    const char c, 
    size_t occurences = -1);
```
#### Example
```
std::string a = "Henllo thenren my namen is enlenphant";

// Searching for all occurences of the substring "en" inside this string
std::string str = "en";
std::vector<size_t> list = string::find_all(a, str);

// Searching for the first 3 occurences of the character 'e' inside this string
char c = 'e';
std::vector<size_t> list = string::find_all(a, c, 3);
```
