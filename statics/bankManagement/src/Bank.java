import java.util.ArrayList;
import java.util.List;
class Bank {
    public static List<String> transactionHistory = new ArrayList<>();

    public static void displayBankInfo(){
        System.out.println("Banka Hesap Yönetim Sistemi");
        System.out.println("Tüm hesaplar ve işlemler burada yönetilmektedir.");

    }
    public static void trackTransaction(String description){
        transactionHistory.add(description);
    }
    public static void displayTransactionHistory(){
        System.out.println("İşlem Geçmişi");
        for(String transaction: transactionHistory){
            System.out.println(transaction);
        }
    }
    
}
