function validation() {    
  var loginform = document.forms['loginform'];  
  var eposta = loginform['kullanici'];   // eposta  seçimi
  var parola = loginform['parola'];  // sifre  seçimi
    if (eposta.value == "g191210378@sakarya.edu.tr") {
      
      if(parola.value == "ibrahimsaid" )
      {
        alert("Giriş İşleminiz Başarılı. Yönlendiriliyorusnuz ...");
        return true;
      }else{
        alert("Eposta Adresiniz Kayıtlı degil veya Parolanız Hatalı !");
        return false;
      }
    } else {
      alert("Kayıtlı Bir E-posta Adresi Giriniz");
      return false;  
    }
}