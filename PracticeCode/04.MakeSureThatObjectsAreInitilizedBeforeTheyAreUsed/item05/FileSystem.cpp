#include "FileSystem.hpp"

FileSystem::FileSystem() { 
    std::cout << "FileSystem constructed!" << std::endl;
}

std::size_t FileSystem::numDisks() const { return m_numDisks; }

extern FileSystem tfs = FileSystem();