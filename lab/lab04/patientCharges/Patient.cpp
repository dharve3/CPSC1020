// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Paitent.cpp
// Desc: 

bool validateInput(double v) {
	if (v>=0) {
		return true;
	} else {
		return false;
	}
}
bool validateInput(int v) {
        if (v>=0) {
                return true;
        } else {
                return false;
        }
}

void setDays(int d) {
	if (validateInput(d)) {
		days=d;
	} else {
		days=0;
	}
}
void setRate(double r) {
	if (validateInput(r)){
		rate=r;
	} else {
		rate=0.0;
	}
}
void setService(double s) {
	if (validateInput(s)) {
		service=s;
	} else {
		service=0.0;
	}
}
void setMedication(double m) {
        if (validateInput(m)) {
                medication=m;
        } else {
                medication=0.0;
        }
}
void setPatientType(char p) {
        if (p=='O' || p=='I') {
		patientType=p;
	} else {
		patientType='I';
	}
}
double calcTotalCharges() {
      	double sum;
	if (patientType=='I') {
		sum=days*rate+service+medication;
		return sum;
	} else {
		sum=service+medication;
		return sum;
	}
}


