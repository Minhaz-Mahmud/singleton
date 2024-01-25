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
    shapefactory(){}
public:
 
    
    static shapefactory* getinstance()
    {
        if(instance==nullptr) {
           instance=new shapefactory();
        }

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

shapefactory* shapefactory::instance=nullptr;

int main()
{
   
   shapefactory* shapefactory1 = shapefactory::getinstance();

    shape *shape1 = shapefactory1->getshape("rectangle");
    shape1->draw();

    shape *shape2 = shapefactory1->getshape("square");
    shape2->draw();

}