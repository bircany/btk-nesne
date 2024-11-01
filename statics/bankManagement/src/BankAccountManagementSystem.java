public class BankAccountManagementSystem {
    public static void main(String[] args){
        Bank.displayBankInfo();
        Account account1 = new Account("123456789","Ali Yılmaz",1000);
        Account account2 = new Account("987654321","Ayşe Demir",1500);
        
        account1.viewBalance();
        account1.deposit(500);
        account1.withdraw(200);
        account1.viewBalance();
        System.out.println("----------------------");
        account2.viewBalance();
        account2.deposit(1000);
        account2.withdraw(2000);
        account2.viewBalance();


        Bank.displayTransactionHistory();
    }
}
