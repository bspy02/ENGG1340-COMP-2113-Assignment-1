#include <iostream> 
using namespace std;
 
double bigger (double a,double b){if(a>b){return a;} return b;}
double smaller(double a,double b){if(a<b){return a;} return b;}

void RectangleBB(double &xmin, double &xmax, double &ymin, double &ymax)
{
    double x,y,h,w; cin >> x >> y >> w >> h;
    xmax = bigger (x+w/2,xmax); 
    ymax = bigger (y+h/2,ymax);
    xmin = smaller(x-w/2,xmin); 
    ymin = smaller(y-h/2,ymin);
}
void CircleBB(double &xmin, double &xmax, double &ymin, double &ymax)
{
    double x,y,r; cin >> x >> y >> r;
    xmax = bigger (x+r,xmax); 
    ymax = bigger (y+r,ymax);
    xmin = smaller(x-r,xmin); 
    ymin = smaller(y-r,ymin);
}
void PointSetBB(double &xmin, double &xmax, double &ymin, double &ymax)
{
    double n,x,y;cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        xmax = bigger (x,xmax); 
        ymax = bigger (y,ymax);
        xmin = smaller(x,xmin); 
        ymin = smaller(y,ymin);
    }
}
int main()
{
    char type;
    double xmin, xmax , ymin , ymax;
    int time = 0;
    cin >> type;
    if     (type == 'R')
    {
        double x,y,h,w; cin >> x >> y >> w >> h;
        xmax = x+w/2; 
        ymax = y+h/2;
        xmin = x-w/2; 
        ymin = y-h/2;
    }
    else if(type == 'C')
    {
        double x,y,r; cin >> x >> y >> r;
        xmax = x+r; 
        ymax = y+r;
        xmin = x-r; 
        ymin = y-r;
    }
    else if(type == 'P')
    {
        double n,x,y;cin >> n;
        cin >> x >> y;
        xmax = x; 
        ymax = y;
        xmin = x; 
        ymin = y;
        for(int i = 1; i < n; i++)
        {
            cin >> x >> y;
            xmax = bigger (x,xmax); 
            ymax = bigger (y,ymax);
            xmin = smaller(x,xmin); 
            ymin = smaller(y,ymin);
        }
    }
    while(type != '#'){
        cin >> type;
        if     (type == 'R'){RectangleBB(xmin, xmax, ymin, ymax);}
        else if(type == 'C'){CircleBB   (xmin, xmax, ymin, ymax);}
        else if(type == 'P'){PointSetBB (xmin, xmax, ymin, ymax);}
        time = time+1;
    }
    cout<< (xmin + xmax)/2 <<' '<< (ymin + ymax)/2<<' '<< xmax - xmin<<' ' << ymax - ymin <<endl;
}
