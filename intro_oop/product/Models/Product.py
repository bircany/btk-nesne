import datetime as dt
class Product():
    def __init__(self,name:str = "default",price:float = 0,quantity:int = 1) -> None:
        self.__name = name  ##__ private attr.
        self.__price = price
        self.__quantity = quantity
        print(f"{self.__name} isimli yeni bir obje şu {dt.datetime.now()}  oluşturuldu.")

    @property
    def name(self):
        return self.__name
    
    @name.setter
    def name(self,value:str) -> str:
        if len(value) < 3 or len(value) > 8:
            raise ValueError("Ürün adı 3 ile 8 karakter arasında olmalı.")
        self.__name = value
    
    @property
    def price(self): 
        return self.__price
    
    @price.setter
    def price(self,value:float):
        if value < 0:
            raise ValueError("Ürün Fiyatı 0 veya daha büyük olmalı")
        self.__price = value
       
    @property
    def quantity(self):
        return self.__quantity
    
    @quantity.setter
    def quantity(self,value:int):
        if value < 1:
            raise ValueError("Ürün Adedi en az 1 olmalıdır.")
        self.__quantity = value
    
    def get_total_price(self) -> float:
        total_price = self.__price * self.__quantity
        return total_price
    
    def __repr__(self):
        return (f"Ürün Adı: {self.__name}, Fiyat: {self.__price}, "
                f"Miktar: {self.__quantity}, Toplam Fiyat: {self.get_total_price()}")
    

        
 