<!DOCTYPE html>
<html>
    <head>
        <head>
            <title>Hesabim</title>
             <!-- Required meta tags -->
             <meta charset="utf-8">
             <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no , maximum-scale=1">  
            <!--Custom styles-->
         <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/Css/style.css">
         <link rel="stylesheet" type="text/css" href="/WebTechnology/City-Web-Site-Project/Css/index.css">
         <link rel="shortcut icon" type="image/png" href="/WebTechnology/City-Web-Site-Project/Denizli.png">
         <style>
                .up{
                background-image:url("/WebTechnology/City-Web-Site-Project/Pictures/Dbl-Cluster-in-Perseus.png"),url("/WebTechnology/City-Web-Site-Project/Pictures/Denizlinin-gece-manzaras-334.jpg");
                position: relative;
                background-size: cover;
                width: 100%;
                height: 100vh;
            }
            .up #banner{
                margin-left: 37%;
                width: 20%;
                position:absolute;
                top: 20%;
                text-align: center  ;
                border: 5px solid rgb(0, 0, 0); /* Kenar kalınlığı, şekli ve rengi */
                background-color: #093001;
                opacity: 80%;
                padding: 10px;
            }
            .up #banner #h2{
                color: burlywood;
                font-style: italic;
                font-weight: 200;

            }
            .up #banner #h4{
                color: burlywood;
                font-style: oblique;
                letter-spacing: 2px;
            }
            .up #banner #h5{
                color: teal;
                font-style: italic;
            }
         </style>
    </head> 
<body>
        <?php
        if (isset($_POST['kullanici']) && isset($_POST['parola'])  ) {
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
        }else{
            header ("Location:/WebTechnology/City-Web-Site-Project/Login/login.html");
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
            <div id="banner">
                <h2 id="h2"> Hoşgeldiniz <br></h2>    
                <img src="/WebTechnology/City-Web-Site-Project/Pictures/Ben.JPG" width="70%" height="70%" border="1"/>
                <h4 id="h4"><br>İbrahim Said Kavas <br><br></h4>
                <h5 id="h5">Sakarya Üniversitesi Bilgisayar Mühendisliği 1.Sınıf Öğrencisi<br><br></h5>
                <a href="https://www.github.com/CSToygun" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/github-logo.png " width="14%" height="14%" align="left" ></a>
                <a href="https://www.github.com/CSToygun" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/Twitter.png " width="14%" height="14%" align="left" ></a>
                <a href="https://www.github.com/CSToygun" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/Linkedin.png " width="14%" height="14%""  align="left" ></a>
                <a href="https://www.instagram.com/ibrahimsaidkavas_20" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/instagram.png " width="14%" height="14%"  align="center" ></a>
                <a href="https://www.youtube.com/channel/UCHxw8GMMg62MXepyA-0wtDw" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/Youtube.png " width="14%" height="14%"  align="right" ></a>
                <a href="https://www.facebook.com" ><img src="/WebTechnology/City-Web-Site-Project/Pictures/Facebook.png " width="14%" height="14%"  align="right" ></a>
                <a href="mailto:ibrahimsaidkavas@gmail.com"><img src="/WebTechnology/City-Web-Site-Project/Pictures/Gmail.png " width="14%" height="14%"   align="right" ></a> 
            </div>
        </header>
        
</body>
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
</html>

