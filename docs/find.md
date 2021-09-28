# Find functions
Provide a way to search inside strings, search and replace strings. 
Can search for both strings and characters as well as using regex.

[1. find_all()](https://github.com/Oshanath/string/blob/main/docs/find.md#find-all)

### Find all
use the string::find_all() function to find all occurences of a particular substring or a character inside a string.
It will return a vector of indices of the occurences.

```
std::string a = "Henllo thenren my namen is enlenphant";

// Searching for the substring "en" inside this string
std::string str = "en";
std::vector<size_t> list = string::find_all(a, str);

// Searching for the character 'e' inside this string
char c = 'e';
std::vector<size_t> list = string::find_all(a, c);
```
