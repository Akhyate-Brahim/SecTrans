//
//  base64 encoding and decoding with C++.
//  Version: 2.rc.09 (release candidate)
//

#ifndef BASE64_H_C0CE2A47_D10E_42C9_A27C_C883944E704A
#define BASE64_H_C0CE2A47_D10E_42C9_A27C_C883944E704A
#include <vector>
#include <string>

std::string base64_encode     (std::string const& s, bool url = false);
std::string base64_encode_pem (std::string const& s);
std::string base64_encode_mime(std::string const& s);

std::string base64_decode(std::string const& s, bool remove_linebreaks = false);
std::string base64_encode(unsigned char const*, size_t len, bool url = false);
char* stringToMutableCString(const std::string& str);
std::string toHexString(const std::vector<unsigned char>& data);

#endif /* BASE64_H_C0CE2A47_D10E_42C9_A27C_C883944E704A */