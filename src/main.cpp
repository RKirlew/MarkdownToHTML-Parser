#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cerrno>
#include <cstring>
int main() {
    std::ifstream infile("input.md");
    std::string line;
    std::vector<std::string> html{
		"<html> <head>Markdown Parser</head><body>"
	};
    if(infile){
		
	    while (std::getline(infile, line)) {  
	        line.erase(0, line.find_first_not_of(" \t"));
	
	        if (line.rfind("# ", 0) == 0) {
	            
	            std::string content = line.substr(2); 
	            html.push_back("<h1>" + content + "</h1>");
	        } 
			else if (line.rfind("## ", 0) == 0) {
	            
	            std::string content = line.substr(2); 
	            html.push_back("<h2>" + content + "</h2>");
	        } 
			else {
	            html.push_back("<p>" + line + "</p>");
	        }
	    }
	 	html.push_back("</body></html>");
	    for (const auto& tags : html) {
	        std::cout << tags << "\n";
	    }
	}else{
		std::cerr << "File could not be opened!\n"; // Report error
     	std::cerr << "Error code: " << std::strerror(errno); // Get some info as to why
	}
   
    return 0;
}
