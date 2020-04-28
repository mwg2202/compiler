#include <string>
class token {
    public:
        std::string type, value;
        token(std::string type, std::string value){
            this->type = type;
            this->value = value;
            this->repr = "[" + type + ":" + value + "]" 
        }
}

