#include<bits/stdc++.h>
using namespace std;

class shape{
    
public:
 virtual void draw()=0;
};

class rectangle : public shape{
    public:
    void draw()
    {
        cout<<"inside Rectangle"<<endl;
    }
};

class square: public shape{
    public:
    void draw()
    {
        cout<<"inside square"<<endl;
    }
};


class shapefactory{
    static shapefactory *instance;
    shapefactory* shapefactory::instance=nullptr;

    shapefactory(){}
public:
    
    static shapefactory* getinstance()
    {
      return instance;  
    }

    shape* getshape(string shapetype)
    {

      if(shapetype=="rectangle")
      {
          return new rectangle();
      }
      else if(shapetype=="square")
      {
          return new square();
      }
      else return nullptr;
    }
};