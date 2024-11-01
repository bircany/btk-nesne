from Helpers.ProductHelper import ProductHelper
try:
    if __name__ == "__main__":
        products = ProductHelper.create_item_from_texT("Data/products.txt") #Ürünleri Dosyadan Oluştur
        for product in products:
            print(product) #Ürünleri Yazdır
        total_balance = ProductHelper.get_total_balance(products) #Toplam Bakiye Hesapla ve Yazdır.
        print(f"Toplam bakiye (KDV dahil): {total_balance:.2f}") 
except ValueError as e:
    print(f"Hata: {e}")
