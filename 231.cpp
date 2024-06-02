// OOPs concept
#include<iosttream>
using namespace std;
 
 class Hero
 {
    private:
    int health;

    public:
    char level;

    int gethealthh(){
        return health;
    }
    char getlevel(){
        return level;
    }
    Hero (int health){ //parametrized constructor
        this->health=health;
    }
    Hero (int health,char level){
        this -> level=level;
        this -> health=health;
    }
    void print(){
        cout<<level<<endl;
    }
    void setlevel(char ch){
    level=ch;
    }
    
    //copy constructor
    Hero(hero& temp){
        this->health=temp.health;
        this->level=temp.level
    }

 };
 int main()
 {
    Hero Ramesh;
 }