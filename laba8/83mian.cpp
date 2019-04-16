#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue <string> avtomoika;  // создание очереди
  int k=0;
  cout << "vvedite kol-vo chelovek" << endl;
  cin>>k;
  cout << "vvedite imena ludei v ocheredi ot pervogo k poslednemy" << endl;
  for (int i = 0; i < k; i++) {
    string s;
    cin >> s;
    avtomoika.push(s);  // добавляем в очередь элементы
  }
  int minuti,wait;
  cout << "vvedite vremia moiki car" << endl;
  cin>>minuti;
  cout << "vvedite vremia ozidania" << endl;
  cin>>wait;
  int itog=1;
  itog=minuti*k;
  for (int i =wait;i>0;i-=minuti){
      if (wait-minuti>=0)  avtomoika.pop();  // удаляем элемент из очереди
  }
  if(itog<wait) cout << "Pusto";
  else  cout << "V ocheredi perviy " << avtomoika.front() << endl;

  return 0;
}
