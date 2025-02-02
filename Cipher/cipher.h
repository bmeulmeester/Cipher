// Define the ASCII values for the lower case letters 'a' and 'z'
#define MIN_LOWER_CIPHER_DECIMAL 97
#define MIN_UPPER_CIPHER_DECIMAL 65
#define ALPHABET_RANGE 26

// Define the alphabet and the keys for the cipher
static const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
static const char upperAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

static const char *keys[] = {"Dwarvish",
                             "Elvish",
                             "Giant",
                             "Gnomish",
                             "Goblin",
                             "Halfling",
                             "Orc",
                             "Abyssal",
                             "Celestial",
                             "Draconic",
                             "DeepSpeech",
                             "Infernal",
                             "Primordial",
                             "Sylvan",
                             "Undercommon",
                             "Druidic"};

typedef struct
{
    const char *username;
    int availableKeys[16];
} User;

User users[] = {
    {"428", {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0}}, // Admin
    {"Uhbk", {14, 0}},                                                   // User 1
    {"Bndc", {1, 2, 4, 6, 7, 0}},                                        // User 2
    {"Rjtxoy", {4, 11, 15, 0}},                                          // User 3
    {"Iwnb", {1, 4, 5, 6, 0}},                                           // User 4
    {"Nrpap", {1, 4, 5, 6, 0}},                                          // User 5
};

// Function prototypes
bool authenticateUser(const char *username);
char *TranslateMessage(char *msg, int length, int option, const char *key);
char ShiftChar(char c, int amount, char dir, const char *currentAlphabet);
int isKeyAvailableForUser(const char *username, int keyIndex);
