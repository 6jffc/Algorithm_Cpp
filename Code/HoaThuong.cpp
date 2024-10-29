#include <string>
#include <cctype> // for std::isalpha and std::toupper

std::string convertToAltCaps(const std::string& str) {
    std::string result = str; // Make a copy of the input string
    
    bool toUpper = false; // Initialize a flag to switch between upper and lower case
    
    // Iterate through each character in the string
    for (size_t i = 0; i < result.length(); ++i) {
        // Check if the character is an alphabet letter
        if (std::isalpha(result[i])) {
            // Convert the character to uppercase or lowercase based on the flag
            if (toUpper)
                result[i] = std::toupper(result[i]); // Convert to uppercase
            else
                result[i] = std::tolower(result[i]); // Convert to lowercase
                
            // Toggle the flag to switch between uppercase and lowercase for the next character
            toUpper = !toUpper;
        }
    }
    
    // Return the modified string with alternating cases
    return result;
}
