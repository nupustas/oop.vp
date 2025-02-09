#include "manolib.h"

struct Stud
{
    std::string Vardas="a",Pavarde="b";
    std::vector <int> paz;
    double galutinis=2;
    int egz;
    char vm;

};

int main()
{
    vector<Stud> grupe;

    while(true)
    {
        Stud laik;
        cout<<"Input name: "<<endl;
        cin>>laik.Vardas;
        cout<<"Input surname: "<<endl;
        cin>>laik.Pavarde;

        cout<<"Input your hw scores 1-10. After your last one enter 11 "<<endl;
        int paz;
        cin>>paz;
        while(paz>=0 && paz<=10)
        {
            laik.paz.push_back(paz);
            cin>>paz;
        }

        cout<<"Enter exam score: ";
        cin>>laik.egz;

        cout<<"Calculate final score with average or median? (a/m)";
        cin>>laik.vm;
        while(laik.vm!= 'a' && laik.vm!= 'm') 
        {   
            cout<<"Invalid input. Enter a or m"<<endl;
            cin>>laik.vm;
        }


        grupe.push_back(laik);

        cout<<"Enter more students? (y/n)";
        char x;
        cin>>x;
        while(x!= 'y' && x!= 'n') 
        {   
            cout<<"Invalid input. Enter y or n"<<endl;
            cin>>x;
        }
        if(x=='n') break;
        
    }

    for(auto &n :grupe){
        int suma=0;
            for(auto n: n.paz)
            {
            suma=suma+n;}
            if(n.vm=='v'){
                n.galutinis= 0.4*(suma/n.paz.size())+0.6*n.egz;
            }
            else if (n.paz.size()%2==0){
                n.galutinis=0.4*(n.paz[n.paz.size()/2] + n.paz[n.paz.size()/2-1])/2 +0.6*n.egz;
            }
            else{
                n.galutinis=0.4*n.paz[n.paz.size()/2] +0.6*n.egz;
            }
        }

    cout<<std::left<<setw(10)<<"Vardas"<<setw(10)<<"Pavarde"<<setw(10)<<"Galutinis (Vid.)"<<" / "<<"Galutinis (Med.)"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

for(auto n :grupe)
{
    cout<<std::left<<setw(10)<<n.Vardas<<setw(10)<<n.Pavarde<<setw(10);
    if(n.vm == 'a') cout<<std::fixed<<std::setprecision(2)<<n.galutinis<<"         -"<<endl;
    else cout<<" -                "<<std::fixed<<std::setprecision(2)<<n.galutinis<<endl;
}

}
