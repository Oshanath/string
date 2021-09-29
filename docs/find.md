# Find functions
Provide a way to search inside strings, search and replace strings. 
Can search for both strings and characters as well as using regex.

All find functions have a haystack parameter and a needle parameter. The find functions find the needles in the haystack.

### Parameters
Haystack should be a string. (std::string or a c-string)
Needle can be a char or a string

### Optional parameters (Only some functions accept these)
size_t occurences - The maximum number of results that the function should find. All results after are ignored.

### Return types
std::vector<size_t> - The std::vector containing all results. (No results = empty container)
size_t - A single result. Usually an index. If the search yields no results, the function will return std::string::npos

[1. find_all()](https://github.com/Oshanath/string/blob/main/docs/find.md#find-all)<br>
[2. find_first()](https://github.com/Oshanath/string/blob/main/docs/find.md#2-find-first)<br>
[3. find_last()](https://github.com/Oshanath/string/blob/main/docs/find.md#3-find-last)

### 1. Find all
Find all needles in the haystack
```
std::vector<size_t> find_all(haystack, needle, occurences = 1);
```
#### Example
```
std::string str = "Henllo thenren my namen is enlenphant";

// Searching for all occurences of the substring "en" inside this string
std::vector<size_t> list = string::find_all(str, "en");

// Searching for the first 3 occurences of the character 'e' inside this string
char c = 'e';
std::vector<size_t> list2 = string::find_all(str, c, 3);
```
### 2. Find first
Find the first needle in the haystack.

```
size_t find_first(haystack, needle);
```
#### Example
```
std::string sample = "Henllo my namen is enlenphant";
    
//Find the index where "ll" appears in sample
size_t index_of_ll = string::find_first(sample, "ll");

//Find the index where the character 'e' appears in sample
size_t index_of_e = string::find_first(sample, 'e');
```

### 3. Find last
Find the last needle in the haystack.

```
size_t find_last(haystack, needle);
```
#### Example
```
std::string sample = "Henllo my namen is enlenphant";
    
//Find the index where "ll" appears in sample for the last time
size_t index_of_ll = string::find_last(sample, "ln");

//Find the index where the character 'e' appears in sample for the last time
size_t index_of_e = string::find_last(sample, 'e');
```
