#include<iostream>
#include<string>
#include<fstream>
#include"IO.hpp"
#include<string>
#include<sstream>


class ReadEnv{


    public:
    std::string getenv(){

        std::string env_path=".env";


        IO io(env_path);

        std::fstream f_stream=io.getFileStream();



        std::stringstream buffer;

        buffer<<f_stream.rdbuf();//returns *streambuf involved in read()/write() sys calls


        std::string content=buffer.str();


        return content;



    }


};
