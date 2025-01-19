#include <iostream>
#include <string>
using namespace std;

static int Tendency(int v1, int v2, int v3, int v4) {
	return 2 * v1 + v2 - v3 - 2 * v4;
}

static int getIfPlus(int v) {
	return v > 0 ? v : 0;
}

static int Capacity(int v1, int v2, int v3, int v4) {
	return getIfPlus(v1) + getIfPlus(v2) + getIfPlus(v3) + getIfPlus(v4);
}

int main() {
	int Fi, Fe, Ti, Te, Si, Se, Ni, Ne;
	cout << "Fiは? ";
	cin >> Fi;
	cout << "Feは? ";
	cin >> Fe;
	cout << "Tiは? ";
	cin >> Ti;
	cout << "Teは? ";
	cin >> Te;
	cout << "Siは? ";
	cin >> Si;
	cout << "Seは? ";
	cin >> Se;
	cout << "Niは? ";
	cin >> Ni;
	cout << "Neは? ";
	cin >> Ne;

	int tendency = Tendency(Fi, Ne, Si, Te);
	int capacity = Capacity(Fi, Ne, Si, Te);
	int spare = Capacity(Fe, Ni, Se, Ti);
	int tendencyMax = tendency;
	string mbti = "INFP(仲介者)";
	cout << "INFP(仲介者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ne, Fi, Te, Si);
	capacity = Capacity(Ne, Fi, Te, Si);
	spare = Capacity(Ni, Fe, Ti, Se);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ENFP(運動家)" : "ENFP(運動家)";
		tendencyMax = tendency;
	}
	cout << "ENFP(運動家)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ni, Fe, Ti, Se);
	capacity = Capacity(Ni, Fe, Ti, Se);
	spare = Capacity(Ne, Fi, Te, Si);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|INFJ(提唱者)" : "INFJ(提唱者)";
		tendencyMax = tendency;
	}
	cout << "INFJ(提唱者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Fe, Ni, Se, Ti);
	capacity = Capacity(Fe, Ni, Se, Ti);
	spare = Capacity(Fi, Ne, Si, Te);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ENFJ(主人公)" : "ENFJ(主人公)";
		tendencyMax = tendency;
	}
	cout << "ENFJ(主人公)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ti, Ne, Si, Fe);
	capacity = Capacity(Ti, Ne, Si, Fe);
	spare = Capacity(Te, Ni, Se, Fi);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|INTP(研究者)" : "INTP(研究者)";
		tendencyMax = tendency;
	}
	cout << "INTP(研究者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ne, Ti, Fe, Si);
	capacity = Capacity(Ne, Ti, Fe, Si);
	spare = Capacity(Ni, Te, Fi, Se);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ENTP(討論者)" : "ENTP(討論者)";
		tendencyMax = tendency;
	}
	cout << "ENTP(討論者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ni, Te, Fi, Se);
	capacity = Capacity(Ni, Te, Fi, Se);
	spare = Capacity(Ne, Ti, Fe, Si);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|INTJ(建築家)" : "INTJ(建築家)";
		tendencyMax = tendency;
	}
	cout << "INTJ(建築家)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Te, Ni, Se, Fi);
	capacity = Capacity(Te, Ni, Se, Fi);
	spare = Capacity(Ti, Ne, Si, Fe);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ENTJ(指揮官)" : "ENTJ(指揮官)";
		tendencyMax = tendency;
	}
	cout << "ENTJ(指揮官)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Fi, Se, Ni, Te);
	capacity = Capacity(Fi, Se, Ni, Te);
	spare = Capacity(Fe, Si, Ne, Ti);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ISFP(冒険家)" : "ISFP(冒険家)";
		tendencyMax = tendency;
	}
	cout << "ISFP(冒険家)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Se, Fi, Te, Ni);
	capacity = Capacity(Se, Fi, Te, Ni);
	spare = Capacity(Si, Fe, Ti, Ne);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ESFP(パリピ)" : "ESFP(パリピ)";
		tendencyMax = tendency;
	}
	cout << "ESFP(パリピ)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Si, Fe, Ti, Ne);
	capacity = Capacity(Si, Fe, Ti, Ne);
	spare = Capacity(Se, Fi, Te, Ni);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ISFJ(擁護者)" : "ISFJ(擁護者)";
		tendencyMax = tendency;
	}
	cout << "ISFJ(擁護者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Fe, Si, Ne, Ti);
	capacity = Capacity(Fe, Si, Ne, Ti);
	spare = Capacity(Fi, Se, Ni, Te);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ESFJ(領事)" : "ESFJ(領事)";
		tendencyMax = tendency;
	}
	cout << "ESFJ(領事)　傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Ti, Se, Ni, Fe);
	capacity = Capacity(Ti, Se, Ni, Fe);
	spare = Capacity(Te, Si, Ne, Fi);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ISTP(巨匠)" : "ISTP(巨匠)";
		tendencyMax = tendency;
	}
	cout << "ISTP(巨匠)　傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Se, Ti, Fe, Ni);
	capacity = Capacity(Se, Ti, Fe, Ni);
	spare = Capacity(Si, Te, Fi, Ne);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ESTP(起業家)" : "ESTP(起業家)";
		tendencyMax = tendency;
	}
	cout << "ESTP(起業家)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Si, Te, Fi, Ne);
	capacity = Capacity(Si, Te, Fi, Ne);
	spare = Capacity(Se, Ti, Fe, Ni);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ISTJ(管理者)" : "ISTJ(管理者)";
		tendencyMax = tendency;
	}
	cout << "ISTJ(管理者)傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	tendency = Tendency(Te, Si, Ne, Fi);
	capacity = Capacity(Te, Si, Ne, Fi);
	spare = Capacity(Ti, Se, Ni, Fe);
	if(tendency >= tendencyMax) {
		mbti = tendency == tendencyMax ? mbti + "|ESTJ(幹事)" : "ESTJ(幹事)";
		tendencyMax = tendency;
	}
	cout << "ESTJ(幹事)　傾向: " << tendency << "	陽: " << capacity << "	陰: " << spare << endl;

	string ppjj = "";
	if(Se < 0 && Ne < 0) { ppjj += "X"; }
	else if(Se > Ne) { ppjj += "S"; }
	else if(Se < Ne) { ppjj += "N"; }
	else { ppjj += "P"; }
	if(Si < 0 && Ni < 0) { ppjj += "X"; }
	else if(Si > Ni) { ppjj += "S"; }
	else if(Si < Ni) { ppjj += "N"; }
	else { ppjj += "P"; }
	if(Fi < 0 && Ti < 0) { ppjj += "X"; }
	else if(Fi > Ti) { ppjj += "F"; }
	else if(Fi < Ti) { ppjj += "T"; }
	else { ppjj += "J"; }
	if(Fe < 0 && Te < 0) { ppjj += "X"; }
	else if(Fe > Te) { ppjj += "F"; }
	else if(Fe < Te) { ppjj += "T"; }
	else { ppjj += "J"; }
	cout << "あなたのPPJJ-MBTIは " << ppjj << "-" << mbti << " です。" << endl;
	return 0;
}
