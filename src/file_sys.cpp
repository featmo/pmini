#include "file_sys.h"
 /**creates necassary folders for **/
int file_sys::create_dir(fsys::path dir_path){
    if(fsys::exists(dir_path)) {
        printf("directory exists\n");
    }
    else{

        if(fsys::create_directory(dir_path)){
            create_subdir(dir_path);
            printf("successfully created folder %s\n", dir_path.string().c_str() ); //print successful and directory path      
            return 0;
            }
        else{
            printf("error creating folder %s\n", dir_path.string().c_str() );
            return 1;
            }

    }
    return 0;
    
}
void file_sys::create_subdir(fsys::path dir_path){   
    std::vector<std::string> sub_folders {"prj/", "assets/", "docs/", "finals/" }; //string vector containg subfolders
    for(int i = 0; i < sub_folders.size();i++){
        //iterate accross creating subfolders
        std::string path = dir_path.string(); //
        path.append(sub_folders[i]);
        fsys::create_directory(path);
    }

    std::string project_folder = "prj/";
    std::string assets_folder = "assets"; 
    std::string documents_folder = "docs";
    std::string finals_folder = "finals";  
}

/****concatenate path TODO: I'm pretty sure this method can be achieved with filesystem path****/

void file_sys::create_project(fsys::path abs_path, fsys::path file_name) {
    std::string path = abs_path.string().append("/");
    path += file_name.string().append("/"); //new full path
    create_dir(path); //path path to create directory fucntion
    //printf("%s", path.c_str());
}

