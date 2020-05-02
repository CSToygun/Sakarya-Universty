<!DOCTYPE html>
<html>
    <head>
        <title>HOSGELDINIZ</title>
        <meta charset="utf-8">
        <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/style.css">
        <link rel="shortcut icon" type="image/png" href="/WebTechnology/City-Web-Site-Project/Denizli.png">
        <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/Login/login.css">
    </head> 
<body>
    <nav id="menu">
        <ul>
            <li class="shr"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.html">Sehir Bilgisi</a>
                <ul>
                    <li><a href="#">Nüfus</a></li>
                    <li><a href="#">Coğrafi Özellikleri</a></li>
                    <li><a href="#">Spor Klüpleri</a></li>
                </ul>
            </li>
        
            <li class="shr"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html">Sehir Mirası</a></li>
            <li id="denizli"><a href="/WebTechnology/City-Web-Site-Project/index.html">DENİZLİ</a></li>
            <li class="Hesap" ><a href="#">Hesap</a></li>
            <li class="Ozgecmis" ><a href="/WebTechnology/City-Web-Site-Project/Pages/ozgecmis.html">Özgeçmiş</a></li>
            <li class="Hakkinda" ><a href="/WebTechnology/City-Web-Site-Project/Pages/hakkında.html">Hakkında</a></li>
        </ul>
    </nav>
    <marquee scrolldelay="70" id="kayanyazi">Denizliyi Seviyorum</marquee>
    <center>
      <h2>PHP Form ile Kullanıcı Girişi</h2>
  <form method="post">
      <input type="text" name="kullaniciadi" placeholder="Kullanıcı Adınız"><br><br>
      <input type="password" name="sifreniz" placeholder="Sifreniz"><br><br>
      <div>
<?php
  if($_POST)// Post İşlemi varmı kontrol ediyoruz.
  {
      $Kullanici=$_POST["kullaniciadi"];//Formdan aldıgımız kullanici değerini değişkene atadık.
      $Sifreniz=$_POST["sifreniz"];//Formdan aldıgımız sifre değerini değişkene atadık.

      if(!empty($Kullanici) || !empty($Sifreniz))// Eğer Kullanıcı veya Şifre boş değilse buraya gir dedik
      {
          $sorgu=$debe->prepare("SELECT * FROM form_giris WHERE username=? and password=?");// sql yazarak verilerin doğruluğunu kontrol ediyoruz.
          $sorgu->execute(array($Kullanici,$Sifreniz));//Kontrol edilecek olan değişkenleri yazdık
          $islem=$sorgu->fetch();// Burada sorguyu parcalayarak girilen bilgilerin karşılığı varmı dedik

          if($islem)// Karşığılı varsa buraya gir dedik
          {
              $_SESSION['KullaniciAdi'] = $islem['username'];// Giriş yaptığımız kullanici adımızı SEssion atadık
              header("Location:admin.php");//Yönlendirmemizi yapıyoruz.
          }
          else//Eğer girilen bilgiler eşleşmiyorsa
          {
              echo "Kullanıcı Adınız veya Şifreniz Yanlış";//Hatamızı Cevabını Yazdırdık.
          }
      }
      else//Eğer alanlar boş ise ekranda yazıcak olan kısım.
      {
          echo "Boş Alan Bırakmayınız.";
      }
  } 
?>
      </div><br>
      <input type="submit" value="Giriş Yap"> 
  </form>
    </center>
</body>

<script src="/WebTechnology/City-Web-Site-Project/Login/login.js" ></script>
</html>