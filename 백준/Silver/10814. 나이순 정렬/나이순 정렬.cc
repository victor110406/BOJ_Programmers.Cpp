#include<iostream>
#include<algorithm>

using namespace std;

typedef struct student {
    int age;
    char name[101];
}student;

bool compare(student a, student b) {
    return a.age < b.age;
}
int main() {
    int N;
    cin >> N;
    student* member = (student*)malloc(sizeof(student) * N);
    for (int i = 0; i < N; i++) {
        cin >> member[i].age >> member[i].name;
    }

    stable_sort(member, member + N, compare);
    for (int i = 0; i < N; i++)
        cout << member[i].age << " " << member[i].name << "\n";

    free(member);

    return 0;
}