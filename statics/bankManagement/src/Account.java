import java.util.ArrayList;
import java.util.List;

class Account {
    private final String accountNumber;
    private final String owner;
    private double balance;
    public static List<Account> accounts = new ArrayList<>();

    public Account(String accountNumber,String owner,double balance){
        this.accountNumber = accountNumber;
        this.owner = owner;
        this.balance = balance;
        accounts.add(this);
    }
    public void viewBalance() {
        System.out.println("Hesap Sahibi: " + owner);
        System.out.println("Hesap Numarası: " + accountNumber);
        System.out.println("Hesap Bakiyesi: " + balance + " TL");
    }
    public void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                Bank.trackTransaction(owner + " hesap numarası " + accountNumber + " için " + amount + " TL çekti.");
                System.out.println(amount + " TL çekildi. Yeni bakiye: " + balance + " TL");
            } else {
                System.out.println("Yetersiz bakiye. Mevcut bakiye: " + balance + " TL");
            }
        } else {
            System.out.println("Çekilen miktar sıfırdan büyük olmalıdır.");
        }
    }
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            Bank.trackTransaction(owner + " hesap numarası " + accountNumber + " için " + amount + " TL yatırdı.");
            System.out.println(amount + " TL yatırıldı. Yeni bakiye: " + balance + " TL");
        } else {
            System.out.println("Yatırılan miktar sıfırdan büyük olmalıdır.");
        }
    }
}
