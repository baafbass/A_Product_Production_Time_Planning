ISE105-Programlamaya Giriş - Ödev 3
En az 3 parçadan oluşan ve her parçanın da kendi içerisinde alt parçalardan oluştuğu bir ürünün üretim zamanı
planlamasını gerçekleştiriniz.
ISE105 numaralı ürün A, B ve C parçalarından oluşmaktadır.
A parçası için gerekli malzemeler 5 adet olup a1,a2,a3,a4,a5 numaralı malzemelerdir.
B parçası için gerekli malzemeler 7 adet olup b1,b2,b3,b4,b5,b6,b7 numaralı malzemelerdir.
C parçası için gerekli malzemeler 3 adet olup c1,c2,c3 numaralı malzemelerdir.
A, B ve C parçalarının elde edilmesi için gerekli alt parçaların üretiminde kullanılması gereken malzeme miktarları
ve birim başına üretimi için gerekli süre (gün bazında) aşağıdaki tablolarda verilmiştir.
A Gerekli
malzeme
(br.)
Birim başına
üretimi için
gerekli süre
a1 20 2
a2 58 5
a3 70 7
a4 63 6
a5 80 8
B Gerekli
malzeme
(br.)
Birim
başına
üretimi için
gerekli süre
b1 10 1
b2 30 3
b3 45 4
b4 58 5
b5 70 7
b6 10 10
b7 12 12
C Gerekli
malzeme
(br.)
Birim başına
üretimi için
gerekli süre
c1 20 2
c2 82 8
c3 40 4
Kurallar:
➢ Bir alt parça bitmeden diğerinin üretimine geçilemediği varsayılmaktadır.
➢ İlk önce A ardından B ve en son C parçası üretilmelidir.
➢ Üretime başlamadan önce alt parçaların depoda olma durumu kontrol edilmelidir. Depodaki miktarlar program
başlangıcında 0-100 aralığında rastgele olarak program tarafından belirlenecektir.
➢ Programınız gerekli malzeme ile depodaki malzeme karşılaştırmasını yapmalı ve ihtiyaç duyulan malzeme adedini
birim başına üretim için gerekli süre ile çarparak hesaplamalıdır. Depoda yeterli malzeme varsa parçanın üretimi
için gerekli süre 0 alınmalıdır.
➢ Ayrıca ürünlerin montaj süreleri de toplam süreye eklenmelidir. A parçası montajı : 3 gün, B parçası montajı: 7 gün,
C parçasının montajı ise 8 gündür. A-B-C parçalarının birleştirilerek ürünü oluşturma montajı ise 12 gün olarak
hesaplanmalıdır.
➢ Sonuçlar ayrıca öğrenci numaranız olan bir .txt dosyasına program içerisinden kaydedilmelidir.
➢ Dizi işlemleri (hesaplama, yazdırma vb.) ve dosya işlemleri fonksiyonlar kullanılarak gerçekleştirilmelidir. 
