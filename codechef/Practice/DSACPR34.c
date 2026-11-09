// Problem: DSACPR34
// Platform: codechef
// Language: START
    FUNCTION f(a)
        IF a = 0
            RETURN 9
        ELSE
            RETURN f(a - 1)
        END IF
    END FUNCTION

    Print f(N)
END
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/tiet-ucs301-dsa-c-2026/PSDOFK04/problems/DSACPR34
// Solved on: 2026-11-09T17:32:04.434Z

// source not captured automatically - copy it from the editor and use Manual Push