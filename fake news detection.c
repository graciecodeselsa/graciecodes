#include <stdio.h>
#include <string.h>

int main()
{
    char text[500];
    int score = 0;

    printf("========================================\n");
    printf("     FAKE NEWS & SCAM DETECTION SYSTEM\n");
    printf("========================================\n");

    printf("\nEnter a news message or text:\n");
    fgets(text, sizeof(text), stdin);

    /* Fake news keywords */
    if (strstr(text, "shocking") != NULL)
        score++;

    if (strstr(text, "secret") != NULL)
        score++;

    if (strstr(text, "miracle") != NULL)
        score++;

    if (strstr(text, "100% true") != NULL)
        score++;

    if (strstr(text, "share immediately") != NULL)
        score++;

    /* Scam keywords */
    if (strstr(text, "urgent") != NULL)
        score++;

    if (strstr(text, "act now") != NULL)
        score++;

    if (strstr(text, "send money") != NULL)
        score++;

    if (strstr(text, "send OTP") != NULL)
        score++;

    if (strstr(text, "share OTP") != NULL)
        score++;

    if (strstr(text, "verify your account") != NULL)
        score++;

    if (strstr(text, "click this link") != NULL)
        score++;

    if (strstr(text, "claim your prize") != NULL)
        score++;

    if (strstr(text, "you have won") != NULL)
        score++;

    if (strstr(text, "free money") != NULL)
        score++;

    if (strstr(text, "password") != NULL)
        score++;

    if (strstr(text, "PIN") != NULL)
        score++;

    printf("\n----------------------------------------\n");
    printf("Detection Result\n");
    printf("----------------------------------------\n");

    printf("Suspicious keyword score = %d\n", score);

    if (score >= 3)
    {
        printf("WARNING: Potentially Suspicious/fake Message!\n");
        printf("Please verify the information before\n");
        printf("clicking links, sharing information, or sending money.\n");
    }
    else if (score >= 1)
    {
        printf("CAUTION: Few suspicious words were detected, this could be a scam.\n");
        printf("Please verify the information before proceeding.\n");
    }
    else
    {
        printf("No suspicious keywords detected.\n");
        printf("Still verify important information using reliable sources.\n");
    }

    return 0;
}