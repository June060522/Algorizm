#include <iostream>

using namespace std;

#define DIGIT_ZERO   " * * *\n"  \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     "\n"        \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"

#define DIGIT_ONE    "\n"        \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     "\n"        \
                     "      *\n" \
                     "      *\n" \
                     "      *\n"

#define DIGIT_TWO    " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     " * * *\n"  \
                     "*\n"       \
                     "*\n"       \
                     "*\n"       \
                     " * * *\n"

#define DIGIT_THREE  " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     " * * *\n"

#define DIGIT_FOUR   "\n"        \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n"

#define DIGIT_FIVE   " * * *\n"  \
                     "*\n"       \
                     "*\n"       \
                     "*\n"       \
                     " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     " * * *\n"

#define DIGIT_SIX    " * * *\n"  \
                     "*\n"       \
                     "*\n"       \
                     "*\n"       \
                     " * * *\n"  \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"

#define DIGIT_SEVEN  " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     "\n"        \
                     "      *\n" \
                     "      *\n" \
                     "      *\n"

#define DIGIT_EIGHT  " * * *\n"  \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"  \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"

#define DIGIT_NINE   " * * *\n"  \
                     "*     *\n" \
                     "*     *\n" \
                     "*     *\n" \
                     " * * *\n"  \
                     "      *\n" \
                     "      *\n" \
                     "      *\n" \
                     " * * *\n"

const char* DIGITS[] = {
    DIGIT_ZERO,
    DIGIT_ONE,
    DIGIT_TWO,
    DIGIT_THREE,
    DIGIT_FOUR,
    DIGIT_FIVE,
    DIGIT_SIX,
    DIGIT_SEVEN,
    DIGIT_EIGHT,
    DIGIT_NINE
};

int main()
{
    int num = 0;
    cin >> num;
    cout << DIGITS[num];
}