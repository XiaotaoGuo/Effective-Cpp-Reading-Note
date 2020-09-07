#include <iostream>

class FileSystem {
public:
    FileSystem();
    std::size_t numDisks() const;
private:
    std::size_t m_numDisks = 100;
};

FileSystem& tfs();