function validation() {    
  var loginform = document.forms['loginform'];  
  var eposta = loginform['kullanici'];   // eposta  seçimi
  var parola = loginform['parola'];  // sifre  seçimi
    if (eposta.value == "g191210378@sakarya.edu.tr") {
      
      if(parola.value == "ibrahimsaid" )
      {
        alert("Giris Isleminiz Basarılı. Yonlendiriliyorsunuz ...");
        return true;
      }else{
        alert("E-posta Adresiniz Kayitli degil veya Parolaniz Hatali !");
        return false;
      }
    } else {
      alert("Kayıtlı Bir E-posta Adresi Giriniz");
      return false;  
    }
}