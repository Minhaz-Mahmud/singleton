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