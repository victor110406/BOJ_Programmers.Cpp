#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct student {
    string name;
    int kor;
    int eng;
    int math;
}student;

bool compare(student a, student b) {
    if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) { 
        return a.name < b.name; 
    }
    if (a.kor == b.kor && a.eng == b.eng) { 
        return a.math > b.math;
    }
    if (a.kor == b.kor) { 
        return a.eng < b.eng; 
    }
    return  a.kor > b.kor;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<student> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++) {
        cout << v[i].name << '\n';
    }
    
    return 0;
}