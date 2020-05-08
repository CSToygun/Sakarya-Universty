<!DOCTYPE html>
<html>
    <head>
        <head>
            <title>Ozgecmis Page</title>
             <!-- Required meta tags -->
             <meta charset="utf-8">
             <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no , maximum-scale=1">  
            <!--Custom styles-->
         <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/Css/style.css">
         <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/Css/index.css">
         <link rel="shortcut icon" type="image/png" href="/WebTechnology/City-Web-Site-Project/Denizli.png">
    </head> 
<body>
        <?php
            $kullanici = "g191210378@sakarya.edu.tr";
            $parola="ibrahimsaid";
              if( $kullanici == $_POST['kullanici'] && $parola == $_POST['parola']) 
			{
                echo "<script language='javascript'> alert('Sayın : $kullanici --- Hoşgeldiniz...') </script>";            
            }
            else {
                echo "<script language='javascript'> alert('Kullanıcı Bilgilerinizi Yanlış Girdiniz. Tekrar Yönlendiriliyorsunuz...') </script>";
			    header ("Location:/WebTechnology/City-Web-Site-Project/Login/login.html");;
			}

        ?>
        <header class="up">
            <nav id="menu">
                 <ul class="ul">
                    <li class="shr"><a class="a" href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.html">Sehir Bilgisi</a>
                        <ul class="ul2">
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.html#bolum2"  class="a">Nüfus</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.html#bolum3"  class="a">Coğrafi Özellikleri</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.html#bolum4" class="a" >İlçeleri</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Bilgisi.htmlbolum5"  class="a">Spor Klüpleri</a></li>
                        </ul>
                    </li>
            
                    <li class="shr"><a class="a" href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html">Sehir Mirası</a>
                        <ul class="ul2">
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html#bolum2"  class="a">Tarihçesi</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html#bolum3"  class="a">Kültürel Değerler</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html" class="a" >Gelenekleri</a></li>
                            <li class="li2"><a href="/WebTechnology/City-Web-Site-Project/Pages/Sehir-Mirası.html"  class="a">Yöresel Kıyafetleri</a></li>
                        </ul>
                    </li>
                    <li class="denizli shr "><a  class="a" href="/WebTechnology/City-Web-Site-Project/index.html">DENİZLİ</a></li>
                    <li class="iletisim shr "><a class="a" href="/WebTechnology/City-Web-Site-Project/Pages/Hesabim.php">Hesabım</a></li>
                    <li class="iletisim shr "><a class="a" href="/WebTechnology/City-Web-Site-Project/Pages/Ozgecmis.html">Ozgecmis</a>
                        <ul class="ul2">
                            <li class="li2"><a href="#"  class="a">Egitim Hayatı</a></li>
                            <li class="li2"><a href="#"  class="a">Hayalleri</a></li>
                        </ul>
                    </li>
                    <li class="login shr "><a class="a" href="/WebTechnology/City-Web-Site-Project/Pages/hakkımda.html">Hakkımda</a>
                        <ul class="ul2">
                            <li class="li2"><a href="#"  class="a">Çocuklugu</a></li>
                            <li class="li2"><a href="#"  class="a">Hobileri</a></li>
                            <li class="li2"><a href="#"  class="a">Resimleri</a></li>
                        </ul>
                    </li>
            </nav>
            <marquee scrolldelay="70" id="kayanyazi">Denizliyi Seviyorum</marquee>
        </header>
        

    <div id="particle-canvas">
        <script src="/WebTechnology/City-Web-Site-Project/Js/particle.js"></script>
        <div class="container">
            <span class="text1"> DENİZLİ </span>
            <iframe width="0" height="0" src=" https://www.youtube.com/embed/WzgfnbouSrI?autoplay=1"> </iframe>
            <span class="text2  "> Hayatımız <i id="yesil">Yeşil</i> - <i id="siyah">Siyah</i>  </span>
        </div> 
    </div>
</body>
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
</html>

