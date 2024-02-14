// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Patient.h
// Desc: 

class Patient {
	private:
		char patientType = 'I';
		int days = 0;
		double rate = 0.0;
		double services = 0.0;
		double medication = 0.0;

	public:
		Patient(char pt, int d, double r, double s, double m): patientType(pt), days(d), rate(r), services(s), medication(m) { } // Constructor for inpatients
		Patient(char pt, double s, double m): patientType(pt), services(s), medication(m) { } // Constructor for outpatients
		Patient() = default; // Default Constructor

		bool validateInput(double);
		bool validateInput(int);

		void setDays(int);
		void setRate(double);
		void setServices(double);
		void setMedication(double); 
		void setPatientType(char);

		int getDays();
		double getRate();
		double getServices();
		double getMedication();
		char getPatientType();

		double calcTotalCharges();
};
