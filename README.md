*Hexchat te komutların algılanması için başına '/' koymak gerekiyor.*

## ~SERVER KOMUTLARI~

PASS : nc ile bağlandığımızda kanal şifresi istediğinde kullanılır 
~ "/PASS 123" formatında girilmelidir.

NICK : nc ile bağlandığımızda nickname istendiğinde girilmelidir. 
~ "/NICK tturna" formatında girilmelidir

USER : nc ile bağlanırken bağlandığımız username girmek gerektiğinde kullanırız.
~ "/USER <USERNAME> <HOSTNAME> <SERVERNAME> <REALNAME> formatında girilmelidir.

QUIT : Server ile bağlantıyı koparır.
~ "/QUIT " şeklinde kullanılır.

JOIN : Yeni bir oda ya da bağlantı kurmaya yarar.
~ "/JOIN 42 (şifre var ise) 123" formatında kullanılır.

PART : User bir kanala bağlı ise kanaldan ayrılmak için kullanılır.
~ "/PART 42" formatında kullanılır.

MODE : Kanal yetkilerini yönetmek için kullanılabilir.
~ "/MODE <KanalAdı> <YetkiOperatörü> <Sifre-Isim> 

KICK : Kanalda bulunan kullanıcıları atmaya yarar, yalnızca operatorler kickleyebilir.
~ "/KICK tturna " formatında kullanılır.

INVITE : Invite ile girilen kanallarda kullanıcılara davet atmak için kullanırız.
~ "/INVITE <KullanıcıAdı> <KanalAdı>" formatında kullanılır.

NOTICE : Bir mesaj değil Bildirim atmak için kullanılır.
~ "/NOTICE <KullanıcıAdı> <Mesaj>" formatında kullanılır.

PRIVMSG : Kanala ya da kullanıcıya doğrudan mesaj atmak için kullanılır.
~ "/PRIVMSG <KanalAdı> <Mesaj>" ya da <KullanıcıAdı> <Mesaj> formatında kullanılabilir

https://github.com/ahkalama/FT_IRC_Internet-Relay-Chat/assets/116187665/ed66fcac-0a4c-4bf8-97cb-acd4a89bed53

