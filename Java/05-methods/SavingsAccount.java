public class SavingsAccount {

  int balance;

  public SavingsAccount(int initialBalance){
    balance = initialBalance;
  }

  //Check balance:
  public void checkBalance() {
    System.out.println("Hello!");
    System.out.println("Your balance is " +  balance);
  }

  //Deposit:
  public void deposit(int amountToDeposit) {
    int afterDeposit = balance + amountToDeposit;
    balance = afterDeposit;
    System.out.println("You just deposited "+ amountToDeposit);
  }


  //Withdrawing:
  public int withdraw(int amountToWithdraw) {
    int afterWithdraw = balance - amountToWithdraw;
    balance = afterWithdraw;
    System.out.println("You just withdrew " + amountToWithdraw);
    return amountToWithdraw;
  }


  public static void main(String[] args){
    SavingsAccount savings = new SavingsAccount(2000);

    //Check balance:
    savings.checkBalance();

    //Withdrawl:
    savings.withdraw(600);

    //Check balance:
    savings.checkBalance();

    //Deposit:
    savings.deposit(600);

    //Check balance:
    savings.checkBalance();

  }
}

/*
public class SavingsAccount {

  int balance;

  public SavingsAccount(int initialBalance){
    balance = initialBalance;
  }

  public static void main(String[] args){
    SavingsAccount savings = new SavingsAccount(2000);

    //Check balance:
    System.out.println("Hello!");
    System.out.println("Your balance is "+savings.balance);

    //Withdrawing:
    int afterWithdraw = savings.balance - 300;
    savings.balance = afterWithdraw;
    System.out.println("You just withdrew "+300);

    //Check balance:
    System.out.println("Hello!");
    System.out.println("Your balance is "+savings.balance);

    //Deposit:
    int afterDeposit = savings.balance + 600;
    savings.balance = afterDeposit;
    System.out.println("You just deposited "+600);

    //Check balance:
    System.out.println("Hello!");
    System.out.println("Your balance is "+savings.balance);

    //Deposit:
    int afterDeposit2 = savings.balance + 600;
    savings.balance = afterDeposit2;
    System.out.println("You just deposited "+600);

    //Check balance:
    System.out.println("Hello!");
    System.out.println("Your balance is "+savings.balance);

  }
}

*/
