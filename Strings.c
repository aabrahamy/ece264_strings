#include <stdio.h>
#include <string.h>


//Returns 1 if password length is at least 5 characters, otherwise 0
int is_long_enough(const char *password)
{
    if (strlen(password) >= 5) {
        return 1;
    }
    
    return 0;
}

//Returns 1 if password does NOT contain a space, otherwise 0
int has_no_space(const char *password)
{
    if (strcspn(password, " ") == strlen(password)) {
        return 1;
    }
    
    return 0;
}

int main(void)
{
    const char *tests[] = {
        "abc",
        "abcde",
        "pass word",
        "nospace",
        "long enough"
    };

    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++) {
        printf("Testing \"%s\"\n", tests[i]);
        printf("  Length >= 5: %d\n", is_long_enough(tests[i]));
        printf("  No spaces: %d\n\n", has_no_space(tests[i]));
    }

    return 0;
}
