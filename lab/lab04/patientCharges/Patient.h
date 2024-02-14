// Name: Dylan Harvey
// Date: 2/12/2024
// Class: CPSC 1021
// Lab Name: Lab 4 - Paitent Charges w/ Classes
// File Name: Patient.h
// Desc: 

class Patient {
	private:
		int days = 0;
		double rate = 0.0;
		double services = 0.0;
		double medication = 0.0;
		char patientType = 'I';
		
		bool validateInput(double);
		bool validateInput(int);
	public:
		Patient(int d, double r, double s, double m, char p): days{d}, rate{r}, service{s}, medication{m}, patientType{p} 
            { setDays(days); setRate(rate); setService(service); setMedication(medication); setPatientType(patientType); }
		Patient() = default; // Default Constructor

		void setDays(int);
		void setRate(double);
		void setServices(double);
		void setMedication(double);
		void setMedication(double); 
		void setPatientType(char);

		int getDays();
		double getRate();
		double getServices();
		double getMedication();
		char getPatientType();

		double calcTotalCharges();
};
