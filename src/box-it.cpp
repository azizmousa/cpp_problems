#include <iostream>
#include <sstream>
using namespace std;

class Box{
    private:
        int l, b, h;
    public:
        Box();
        Box(int const l, int const b, const int h);
        Box(const Box& box);

        int getLength()const;
        int getBreadth()const;
        int getHeight()const;
        long long CalculateVolume()const;

        bool operator< (const Box &box) const;

        friend ostream& operator<<(ostream &out, const Box& b);
};

Box::Box(){
    this->l = 0;
    this->b = 0;
    this->h = 0;
}

Box::Box(const int l, const int b, const int h){
    this->l = l;
    this->b = b;
    this->h = h;
}

Box::Box(const Box& box){
    this->l = box.l;
    this->b = box.b;
    this->h = box.h;
}

int Box::getLength()const{
    return this->l;
}

int Box::getHeight() const {
    return this->h;
}

int Box::getBreadth() const {
    return this->b;
}

long long Box::CalculateVolume() const {
    long long x = (long long)this->l * this->b * this->h;
    return x;
}


bool Box::operator<(const Box &box) const{
    bool firCon = this->l < box.l;
    bool secCon = (this->b <box.b) && (this->l == box.l);
    bool thiCon = (this->h < box.h) && (this->b == box.b) && (this->l == box.l);
    if(firCon || secCon || thiCon)
        return true;
    
    return false;
}

ostream& operator<<(ostream &out, const Box& b){
    out << b.l << " " << b.b << " " << b.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}