// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Patient.h
// Desc: Headerfile for Patient class, contains constructors for each type of patient.

class Patient {
	private:
		// Variables (Order matters)
		char patientType = 'I';
		int days = 0;
		double rate = 0.0;
		double services = 0.0;
		double medication = 0.0;

	public:
		// Constructors (order matters)
		Patient(char pt, int d, double r, double s, double m): patientType(pt), days(d), rate(r), services(s), medication(m) { } // Constructor for inpatients
		Patient(char pt, double s, double m): patientType(pt), services(s), medication(m) { } // Constructor for outpatients
		Patient() = default; // Default Constructor

		// Validators
		bool validateInput(double);
		bool validateInput(int);

		// Setters
		void setDays(int);
		void setRate(double);
		void setServices(double);
		void setMedication(double); 
		void setPatientType(char);

		// Getters
		int getDays();
		double getRate();
		double getServices();
		double getMedication();
		char getPatientType();

		double calcTotalCharges();
};
