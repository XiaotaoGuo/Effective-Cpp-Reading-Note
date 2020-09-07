#include "Directory.hpp"
#include "FileSystem.hpp"

Directory::Directory() {
    std::size_t disks = tfs.numDisks();
    std::cout << "Directory constructed!" << std::endl;
}

// tfs might not be iniatilized when tdr is initialized
extern Directory tdr = Directory();