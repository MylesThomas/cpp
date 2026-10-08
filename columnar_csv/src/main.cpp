// Columnar CSV Engine
// Goal: load a CSV into column-oriented storage and run aggregations.
// Phase 1: open a file and read it line by line.

#include <iostream>
#include <fstream>   // std::ifstream
#include <string>    // std::string, std::getline

int main(int argc, char* argv[]) {
    // argc = argument count, argv = argument values (argv[0] is the binary name)
    if (argc < 2) {
        std::cerr << "Usage: columnar_csv <path/to/file.csv>\n";
        return 1;
    }

    // ifstream = input file stream. Opens the file at the given path.
    // The file closes automatically when `file` goes out of scope (RAII).
    std::ifstream file(argv[1]);

    if (!file.is_open()) {
        std::cerr << "Error: could not open file: " << argv[1] << "\n";
        return 1;
    }

    std::string line;
    int row_count = 0;

    // getline reads one line at a time into `line`, advancing the stream.
    // Returns false (and exits the loop) when it hits EOF.
    while (std::getline(file, line)) {
        std::cout << line << "\n";
        ++row_count;
    }

    std::cout << "\nRead " << row_count << " rows.\n";
    return 0;
}
