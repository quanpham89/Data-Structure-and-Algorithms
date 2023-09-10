#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
void reversedString(string s){
	string newString = "";
	for(int i = s.length()-1; i>=0;i--){
		newString += s[i];
	}
	cout<<newString;
}

void sort(int n){
	int a[100];
	for (int i = 0;i< n;i++){
		cin>>a[i];
	}
	for(int i =0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]> a[j]){
				int temp =  a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout<<" "<<a[i];
	}
}

void sum(int n){
	int a[100];
	for (int i = 0;i< n;i++){
		cin>>a[i];
	}
	for(int i =0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]> a[j]){
				int temp =  a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout<<" "<<a[i];
	}
	int maxNumber,minNumber;
	minNumber = a[0];
	maxNumber = a[n-1];
	int result;
	cout<<endl<<"result: "<<minNumber + maxNumber;
}

void divisor(int a, int b){
	int bigger,result;
	if(a> b){
		bigger = a;
	}else{
		bigger = b;
	}
	for(int i = bigger;i>=0;i--){
		if(a % i == 0 && b% i == 0){
			result = i;
			break;
		}
	}
	cout<<result;
}

class Point {
public:
    double x;
    double y;
};

class Line {
public:
    double a;
    double b;
    double y_ = 0;
    // Constructor method take input as two point
    Line(Point p1, Point p2);
};

Line::Line(Point p1, Point p2) {
    double D = p1.x - p2.x;
    double Dx = p1.y - p2.y;
    double Dy = p1.x*p2.y - p2.x*p1.y;
    if (D == 0 && Dx) a = 1, b = 0, y_ = p1.x; // Special case with the line x = m
    else if (D == 0 && Dx == 0) {
        cout <<"2 points are identical";
        exit(0);
    }
    else {
        a = Dx/D;
        b = Dy/D;
    }
}
int main(){
//	bai 3

//cout<<"bai 3"<<endl;
//int a, b, result;
//cin>>a>>b;
//divisor(a, b);
//cout<<endl;

//bai 1
//cout<<"bai 1"<<endl;
//string s;
//getline(cin, s);
//reversedString(s);
//cout<<endl;

//bai4
//cout<<"bai 4"<<endl;
//int n;
//cin>>n;
//sort(n);
//cout<<endl;

//bai 5
//cout<<"bai 5"<<endl;
//int n =5;
//sum(n);
//cout<<endl;

//bai2
Point A, B, C, D;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> D.x >> D.y;
    Line AB(A, B);
    Line CD(C, D);

    if (AB.y_ && CD.y_) {
        if (AB.y_ == CD.y_) cout << "MANY";
        else cout << "NO";
    }
    else if (AB.y_) cout << AB.y_ << " " << CD.a*AB.y_ + CD.b;
    else if (CD.y_) cout << CD.y_ << " " << AB.a*CD.y_ + AB.b;
    else {
        double d = CD.a - AB.a;
        double dx = AB.b - CD.b;
        double dy = CD.a*AB.b - AB.a*CD.b;
        if (d == 0 && dx && dy ) cout << "NO";
        else if (d == 0 && (dx == 0 || dy == 0)) cout <<"MANY";
        else {
            cout << dx/d << " " << dy/d;
        }
    }


	return 0;
}
