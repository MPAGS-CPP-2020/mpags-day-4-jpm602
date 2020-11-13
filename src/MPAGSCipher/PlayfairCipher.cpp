// Standard library includes
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Our project headers
#include "PlayfairCipher.hpp"

PlayfairCipher::PlayfairCipher(const std::string& key)
{
    this->setKey(key);
}

void PlayfairCipher::setKey(const std::string& key)
{
    // Store the original key
    key_ = key;

    // Append the alphabet
    key_ += alphabet_;

    // Make sure the key is upper case
    std::transform(key_.begin(), key_.end(), key_.begin(), ::toupper);

    // Remove non-alpha characters

    // Change J->I

    // Remove duplicated letters

    // Store the coords of each letter

    // Store the playfair cipher key map
}

std::string PlayfairCipher::applyCipher(
    const std::string& inputText,
    const CipherMode cipherMode
)
{
    // Change J->I

    // If repeated chars in a digraph add an X or Q if XX

    // If the size of input is odd, add a trailing Z

    // Loop over the input in digraphs
    
    //  - Find the coords in the grid for each digraph

    //  - Apply the rules to these coords to get 'new' coords

    //  - Find the letter associated with the new coords

    // Return the text
    return inputText;
}