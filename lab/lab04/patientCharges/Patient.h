// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Patient.h
// Desc: 

class Patient {
	private:
		int days;
		double rate;
		double service;
		double medication;
		char patientType;
		bool validateInput(double);
		bool validateInput(int);
	public:
		Patient(): days(0), rate(0.0), service(0.0), medication(0.0), patientType('I'){}
		Patient(int d, double r, double s, double m, char p): days(d), rate(r), service(s), medication(m), patientType(p) 
            { setDays(d); setRate(r); setService(s); setMedication(m); setPatientType(p); }
		void setDays(int);
		void setRate(double);
		void setService(double);
		void setMedication(double);
		void setMedication(double); 
		void setPatientType(char);
		int getDays();
		double getRate();
		double getService();
		double getMedication();
		char getPatientType();
		double calcTotalCharges();
};
