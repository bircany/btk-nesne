from Models.Product import Product
class ProductHelper:
    @staticmethod
    def create_item_from_texT(file_path:str):
        products = []
        with open(file_path,'r',encoding='utf-8') as file:
            for line in file:
                line = line.strip() #Satır Başı Boşluklarını atla.
                if not line:
                    continue #Boş Satırları Atla.
                try:  # Satırı ayır ve uygun türlerdeki değerlere dönüştür
                    _,name,price_str,quantity_str = line.split(',')
                    name = name.strip()
                    price = float(price_str.strip())
                    quantity = int(quantity_str.strip()) if quantity_str.strip() else 0 # Boş değer kontrolü
                    if quantity < 1:
                        raise ValueError("Ürün adedi en az 1 olmalı")
                    

                    product = Product(name,price,quantity)
                    products.append(product)
                except(ValueError,IndexError) as e:
                    print(f"Geçersiz veri satırı:{line}. Hata: {e}")
        return products
    
    @staticmethod
    def get_total_balance(products:list) -> float:
        total_balance = sum(product.get_total_price() for product in products)
        total_balance_with_tax = total_balance * 1.20 # %20 kdv
        return total_balance_with_tax