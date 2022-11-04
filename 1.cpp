#include <iostream>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#include <string>
#include <stack>

using namespace std;
//1406 backjun 스택의 모든함수  비고의 1인걸 이용한 
int main() {
	fast;
	stack<char> A, B;
	string Dan;
	cin >> Dan;
	for (int i = 0; i < Dan.size(); i++) A.push(Dan[i]);
	int Su;
	cin >> Su;
	char Edit;
	while (Su--) {
		cin >> Edit;
		if (Edit == 'L') {
			if (!A.empty()) {
				B.push(A.top());
				A.pop();
			}
		}
		else if (Edit == 'D') {
			if (!B.empty()) {
				A.push(B.top());
				B.pop();
			}
		}
		else if (Edit == 'B') {
			if (!A.empty()) A.pop();
		}
		else {
			char word;
			cin >> word;
			A.push(word);
		}
	}
	while (!A.empty()) {
		B.push(A.top());
		A.pop();
	}
	while (!B.empty()) {
		cout << B.top();
		B.pop();
	}
}
//scanf식으로 바꾸려다가 실패한 
//char Dan[1000000] = {};
//int main() {
//	stack<char> A, B;
//	scanf_s("%s\n", Dan);
//	for (int i = 0; Dan[i] != '\0'; i++) {
//		A.push(Dan[i]);
//	}
//	int Su;
//	scanf_s("%d\n", &Su);
//	char Edit[3];
//	while (Su--) {
//		scanf_s("%[^\n]s", Edit);
//		if (Edit[0] == 'L') {
//			if (!A.empty()) {
//				B.push(A.top());
//				A.pop();
//			}
//		}
//		else if (Edit[0] == 'D') {
//			if (!B.empty()) {
//				A.push(B.top());
//				B.pop();
//			}
//		}
//		else if (Edit[0] == 'B') {
//			if (!A.empty()) A.pop();
//		}
//		else A.push(Edit[2]);
//	}
//	string st1 = "", st2 = "";
//	while(!A.empty()){
//		st1 = A.top();
//		A.pop();
//		st2 = st1 + st2;
//	}
//	while(!B.empty()) {
//		st2 += B.top();
//		B.pop();
//	}
//	printf("%s", st2);
//}
//구현은 되었지만 시간초과가 난 케이스
//int main() {
//	string A;
//	int Su;
//	cin >> A >> Su;
//	int Cusor = A.size();
//	char Edit;
//	while (Su--) {
//		string B = "", C = "";
//		cin >> Edit;
//		if (Edit == 'L') {
//			if (Cusor != 0)
//				Cusor--;
//		}
//		else if (Edit == 'D') {
//			if (Cusor + 1 <= A.size())
//				Cusor++;
//		}
//		else if (Edit == 'B') {
//			if (Cusor != 0) {
//				B = A.substr(0, Cusor);
//				C = A.substr(Cusor, A.size());
//				B.resize(B.size() - 1);
//				A = B + C;
//				Cusor--;
//			}
//		}
//		else {
//			char E;
//			cin >> E;
//			B = A.substr(0, Cusor);
//			C = A.substr(Cusor, A.size());
//			B += E;
//			A = B + C;
//			Cusor++;
//		}
//	}
//	cout << A;
//}
