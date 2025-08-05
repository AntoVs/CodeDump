import java.util.Scanner;

class Bankaccount {
	int accountNumber;
	String accountName;
	float accountBalance;

	Bankaccount(int accNum, String accName, float accBal){
		accountNumber = accNum;
		accountName = accName;
		accountBalance = accBal;
	}
	
	void deposit(float amount){
		accountBalance += amount;
	}
	
	void withdraw(float amount){
		if (accountBalance > 0 && accountBalance >= amount)
			accountBalance -= amount;
		else
			System.out.println("insufficient balance");
	}

	void balance(){
		System.out.println("Account Balance : " + accountBalance );
	}

	void display() {
		System.out.println("Account Number : " + accountNumber);
		System.out.println("Account Name : " + accountName);
		System.out.println("Account Balance : " + accountBalance);
	}

	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		
		Bankaccount acc1 = new Bankaccount(1, "user", 0);
		System.out.print("Enter Account Number: ");
	        int num = scanner.nextInt();
	        scanner.nextLine();


		System.out.print("Enter Account Holder Name: ");
	        String name = scanner.nextLine();

		System.out.print("Enter Account Balance: ");
	        float bal = scanner.nextFloat();

        	Bankaccount acc2 = new Bankaccount(num, name, bal);

		System.out.println("\n--- Account 1 ---");
		acc1.display();

		System.out.println("\n--- Account 2 ---");
	        acc2.display();

		System.out.println("\nChoose Operation:");
        	System.out.println("1. Deposit");
        	System.out.println("2. Withdraw");
        	int choice = scanner.nextInt();

        	System.out.println("Enter the amount: ");
        	float amount = scanner.nextFloat();

        	System.out.println("Which account (1 or 2): ");
        	int accChoice = scanner.nextInt();

		if (choice == 1) {
			if (accChoice == 1) {
        		        acc1.deposit(amount);
        		        acc1.display();
			} 
			else {
                		acc2.deposit(amount);
               			acc2.display();
            		}
        	} 
		else if (choice == 2) {
            		if (accChoice == 1) {
                		acc1.withdraw(amount);
                		acc1.display();
            		}
			else {
                		acc2.withdraw(amount);
                		acc2.display();
            		}
		} 
		else
            		System.out.println("Invalid choice.");
        scanner.close();

	}
}
