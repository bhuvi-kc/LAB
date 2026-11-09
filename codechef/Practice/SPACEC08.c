// Problem: SPACEC08
// Platform: codechef
// Language: START
    Set a = 0
    Set b = 1
    Set c
    Set i
    Set num

    Read num

    Print a, b

    FOR i = 2 TO num - 1
        Set c = a + b
        Print c
        Set a = b
        Set b = c
    END FOR
END
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK05/problems/SPACEC08
// Solved on: 2026-11-09T18:11:58.232Z

// source not captured automatically - copy it from the editor and use Manual Push