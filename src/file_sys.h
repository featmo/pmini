#include <filesystem>
#include <vector>
namespace fsys = std::filesystem;

namespace file_sys{
    //void create_project(std::string &abs_path, std::string &file_name)
    int create_dir(fsys::path dir_path);
    void create_subdir(fsys::path dir_path);
    void create_project(fsys::path abs_path, fsys::path file_name);
    
}
