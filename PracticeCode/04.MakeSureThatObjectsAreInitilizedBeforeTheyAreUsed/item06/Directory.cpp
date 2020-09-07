#include "Directory.hpp"
#include "FileSystem.hpp"

Directory::Directory() {
    std::size_t disks = tfs().numDisks();
    std::cout << "Directory constructed!" << std::endl;
}
Directory& tempDir() {
    static Directory td;
    return td;
}