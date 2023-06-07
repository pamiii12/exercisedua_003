#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x;
public:
    bidangDatar() {
        x = 0;
    }
    virtual void input() {}
    virtual float Luas(int a) { return 0; }
    virtual float Keliling(int a) { return 0; }
    void setX(int a) {
        this->x = a;
    }
    int getX() {
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int r;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> r;
        setX(r);
    }
    float Luas(int r) {
        return 3.14 * r * r;
    }
    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        int s;
        cout << "Masukkan sisi bujursangkar: ";
        cin >> s;
        setX(s);
    }
    float Luas(int s) {
        return s * s;
    }
    float Keliling(int s) {
        return 4 * s; 
    }
};

int main() {
    bidangDatar* obj;

    Lingkaran lingkaran;
    Bujursangkar bujursangkar;

    obj = &lingkaran;
    obj->input();
    int r = obj->getX();
    cout << "Luas lingkaran: " << obj->Luas(r) << endl;
    cout << "Keliling lingkaran: " << obj->Keliling(r) << endl;

    obj = &bujursangkar;
    obj->input();
    int s = obj->getX();
    cout << "Luas bujursangkar: " << obj->Luas(s) << endl;
    cout << "Keliling bujursangkar: " << obj->Keliling(s) << endl;

    return 0;
}
