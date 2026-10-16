#include <iostream>
#include <string>
#include <vector>

//посмотри структуры, векторы (METANIT), посмотри циклы

using namespace std;
struct Product
{

    int price;
    int count;
    string name;
};

vector<Product> listProd;

int main()
{
    setlocale(0, "");
    Product cafe[5] = 
    {

        { 110, 10, "milk" },
        { 50, 70, "tea" },
        { 200, 10, "sugar" },
        { 300, 10, "coffee" },
          { 300, 10, "coffee" },
    };
    int Money = 1000;
       
    int w = 0;
    int y = 0;

    int w1 = 0;
    int y1 = 0;
    Product milk = { 110, 10, "milk" };


    listProd.push_back({ 110, 10, "milk" });
    listProd.pop_back();

    listProd.size();

    for (Product list : cafe)
    {

        if (w < list.price) { w = list.price; y = list.count; }

        if (w1 == 0) 
        {
            w1 = list.price;
            continue;
        }

        if ( list.price < w1) { w1 = list.price; y1 = list.count; }



    }
    cout << Money / w << endl;
    cout << Money / w1 << endl;















    int size = sizeof(cafe) / sizeof(cafe[0]);

    for (int i = 0; i < size; i++)
    {
        cout << i << " " << cafe[i].name << " " << cafe[i].price << " " << cafe[i].count << endl;
    }
    int x;
    cout << "¬едите id товара: ";
    cin >> x;

    cout << " оличество: ";

    int z;
    cin >> z;
    if (Money < cafe[x].price*z){}
    else
    {
        
        if(cafe[x].count <= 0){ }
        else
        {
            Money -= cafe[x].price * z;
            cafe[x].count -= z;
        }
    }
   


    system("cls");
    
    for (Product var : cafe)
    {
        if (var.count > 0) { cout << "в наличии "; }
        else if (var.count <= 0) { cout << "недоступно "; }

        cout << var.name << " " << var.price << " " << var.count << endl;


    }
    cout << Money << endl; 

    system("pause");

    /*Product milk = { 110, 10, "milk" };
    cout << milk.name << " " << milk.price << " " << milk.count << " ";*/




}
