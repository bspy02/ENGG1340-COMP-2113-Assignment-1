#include <iostream> 
using namespace std;
 
double bigger (double a,double b, int time){if(time == 0) return a;if(a>b){return a;} return b;}
double smaller(double a,double b, int time){if(time == 0) return a;if(a<b){return a;} return b;}

void RectangleBB(double &xmin, double &xmax, double &ymin, double &ymax,int time)
{
    double x,y,h,w; cin >> x >> y >> w >> h;
    xmax = bigger (x+w/2,xmax, time); 
    ymax = bigger (y+h/2,ymax, time);
    xmin = smaller(x-w/2,xmin, time); 
    ymin = smaller(y-h/2,ymin, time);
}
void CircleBB(double &xmin, double &xmax, double &ymin, double &ymax,int time)
{
    double x,y,r; cin >> x >> y >> r;
    xmax = bigger (x+r,xmax, time); 
    ymax = bigger (y+r,ymax, time);
    xmin = smaller(x-r,xmin, time); 
    ymin = smaller(y-r,ymin, time);
}
void PointSetBB(double &xmin, double &xmax, double &ymin, double &ymax,int &time)
{
    double n,x,y;cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        xmax = bigger (x,xmax, time); 
        ymax = bigger (y,ymax, time);
        xmin = smaller(x,xmin, time); 
        ymin = smaller(y,ymin, time);
        time += 1;
    }
}
int main()
{
    char type;
    double xmin, xmax , ymin , ymax;
    int time = 0;
    while(type != '#'){
        cin >> type;
        if     (type == 'R'){RectangleBB(xmin, xmax, ymin, ymax,time);}
        else if(type == 'C'){CircleBB   (xmin, xmax, ymin, ymax,time);}
        else if(type == 'P'){PointSetBB (xmin, xmax, ymin, ymax,time);}
        time = time+1;
    }
    cout<< (xmin + xmax)/2 <<' '<< (ymin + ymax)/2<<' '<< xmax - xmin<<' ' << ymax - ymin <<endl;
}