#include "config.h"
config: :config(){
    type=new Type();
}

String config: :getType(){
    return type->getType();
}

void config: :setType(){
    type->setType();
}

class config{
    Type type;
    config(){
        type=new Type();
    }

    void setType(char* value){
        type->setType();

    }
    String getType{
        type->getType();   
        return type;
    }
};
