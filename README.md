*Hexchat te komutların algılanması için başına '/' koymak gerekiyor.*

https://github.com/ahkalama/FT_IRC_Internet-Relay-Chat/assets/116187665/ed66fcac-0a4c-4bf8-97cb-acd4a89bed53

## Server Komutları

PASS : nc ile bağlandığımızda kanal şifresi istediğinde kullanılır 
~ "/PASS 123" formatında girilmelidir.

NICK : nc ile bağlandığımızda nickname istendiğinde girilmelidir. 
~ "/NICK tturna" formatında girilmelidir

USER : nc ile username girmek için kullanılır.
~ "/USER <USERNAME> <HOSTNAME> <SERVERNAME> <REALNAME> olarak girilir.

QUIT : Server ile bağlantıyı koparır.
~ "/QUIT " şeklinde kullanılır.

JOIN : Yeni bir oda ya da bağlantı kurmaya yarar.
~ "/JOIN 42 (şifre var ise) 123" formatında kullanılır.

PART : User bir kanala bağlı ise kanaldan ayrılmak için kullanılır.
~ "/PART 42" formatında kullanılır.

MODE : Kanal yetkilerini yönetmek için kullanılabilir.
~ "/MODE <KanalAdı> <YetkiOperatörü> <Sifre-Isim> 

KICK : Kanalda ki kullanıcıları atar, yalnızca operatorler kickleyebilir.
~ "/KICK tturna " formatında kullanılır.

INVITE : Kullanıcılara davet atmak için kullanırız.
~ "/INVITE <KullanıcıAdı> <KanalAdı>" formatında kullanılır.

NOTICE : Bir mesaj değil Bildirim atmak için kullanılır.
~ "/NOTICE <KullanıcıAdı> <Mesaj>" formatında kullanılır.

PRIVMSG : Kanala ya da kullanıcıya doğrudan mesaj atar.
~ "/PRIVMSG <KanalAdı> <Mesaj>" formatında kullanılabilir.

