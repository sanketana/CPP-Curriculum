# Vector and String Manipulation Homework

## Problem Statement: Party Guest List Manager

You are organizing a party and need to create a program to manage your guest list. Create a program that implements the following requirements:

### Requirements:

1. Create a vector of strings to store guest names
2. Implement the following operations:
   - Add 5 guest names to the list
   - Print the guest list in original order
   - Sort the guest list alphabetically
   - Reverse the guest list
   - Remove any guest whose name starts with 'A'
   - Print the final guest list

### Bonus Challenge:
- Create a function that takes a guest name and returns their position in the list
- Add error handling for when a guest name isn't found
- Create a second list of "waitlisted" guests and implement a function to move guests between lists

### Example Output:
```
Original Guest List:
1. John Smith
2. Alice Johnson
3. Bob Wilson
4. Sarah Lee
5. Adam Brown

Alphabetically Sorted:
1. Adam Brown
2. Alice Johnson
3. Bob Wilson
4. John Smith
5. Sarah Lee

Reversed List:
1. Sarah Lee
2. John Smith
3. Bob Wilson
4. Alice Johnson
5. Adam Brown

Final List (after removing names starting with 'A'):
1. Sarah Lee
2. John Smith
3. Bob Wilson
```

### Skills Tested:
- Vector operations
- STL iterators
- String manipulation
- Algorithms (sort, reverse)
- Basic input/output

### Hints:
- Use `vector<string>` for the guest list
- Remember to include necessary headers
- You can use `string.at(0)` to check first letter of names
- STL's `sort()` and `reverse()` functions might be helpful
