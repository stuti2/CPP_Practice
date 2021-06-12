# Practice Programs

This section conatins the following programs:

- Generate Parentheses
- Possible words from phone digits
- Rat in a Maze
- Possible Permutations


### Generate Parentheses

This program ([here](Generate_Parentheses.cpp))takes input a number and generates all possbile combinations of parentheses, e.g.

```
./Generate-Parentheses

Input: 3
Output: ((()))
        (()())
        (())()
        ()(())
        ()()()
```

### Possible words from phone digits

Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ], the task is to list all words which are possible by pressing these numbers., e.g.
<br><br>
![image](https://user-images.githubusercontent.com/60356387/121769399-fe70f480-cb80-11eb-999b-810bfaefbe95.png)
<br>
Solution: [here](Possible_words_from_phone_digits.cpp)
```
./Possible-words

Input: 3
       2 3 4
Output: adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi 
```

### Rat in a Maze

This program ([here](Rat_in_Maze.cpp)) takes input an array and determines the path to exit of maze, e.g.

```
./Rat-in-Maze

Input: 5
       1 0 1 0 1
       1 1 1 1 1
       0 1 0 1 0
       1 0 0 1 1
       1 1 1 0 1
Output: 1 0 0 0 0 
        1 1 1 1 0 
        0 0 0 1 0 
        0 0 0 1 1 
        0 0 0 0 1 
```
### Possible Permutations

This program ([here](Permutations.cpp)) determines all the possible permutations of an array, e.g.

```
./Possible-Permutations

Input: 3
       A B C
Output: ABC
        ACB
        BAC
        BCA     
        CBA
        CAB
```
