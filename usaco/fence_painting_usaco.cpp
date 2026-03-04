<<<<<<< HEAD
	#include "bits/stdc++.h"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fio(name) freopen(name ".in","r",stdin);freopen(name ".out","w",stdout)
using namespace std;

int main() {
    fio("paint");
    IO;
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << min((max(b, d) - min(a, c)), (b - a + d - c)) << endl;
    
    return 0;
}
=======
	#include "bits/stdc++.h"
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fio(name) freopen(name ".in","r",stdin);freopen(name ".out","w",stdout)
using namespace std;

int main() {
    fio("paint");
    IO;
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << min((max(b, d) - min(a, c)), (b - a + d - c)) << endl;
    
    return 0;
}
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
