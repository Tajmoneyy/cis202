#include<iostream>
#include<iomanip>
#include "Mountain.cpp"
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


int main()
{
    Mountain mountains[7];
    mountains[0] =  Mountain("Chimborazo", "Ecudador", 20549);
    mountains[1] =  Mountain("Matterhorn", "Switzeland", 14692);
    mountains[2] =  Mountain("Olympus", "Geece", 9573);
    mountains[3] =  Mountain("Everest", "Nepal", 290929);
    mountains[4] =  Mountain("Adirondacks", "United States", 5344);
    mountains[5] =  Mountain("Blue Ridge", "United States", 6684);
    mountains[6] =  Mountain("Zugpitze", "Switzerland", 9719);
    printf("%-20s%-20s%10s%20s\n", "Mountain Name","Country","Elevation (ft)", "Elevation (mts)");
    cout<<"----------------------------------------------------------------------------"<<endl;
    for (Mountain mountain : mountains)
    {
        cout<<setw(13)<<mountain.getName()<<setw(14)<<mountain.getCountry()<<setw(20)<<mountain.getElevation()<<setw(20)<<mountain.toMeters(mountain.getElevation())<<endl;
    }
    int smallest = minElevation(mountains); //index of the smallest mountain
    cout<<("\nMountain with smallest elevation:");
    cout<<"Name: "<<mountains[smallest].getName();
    cout<<"Country: "<<mountains[smallest].getCountry();
    cout<<"Elevation (ft): "<<mountains[smallest].getElevation();
}