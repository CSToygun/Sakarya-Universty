function epostaValid()
{
    var iletisimform = document.forms['iletisimform'];  
    var eposta = iletisimform['mail'];
    var mailformat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;

    if(eposta.value.match(mailformat)){
        alert("Formunuz Başarılı Şekilde Ulaştırıldı");
        return true;
    }
    else
    {
       alert("Lutfen Gecerlı Formatta mail adresi Giriniz");
       document.iletisim.mail.focus();
       return false;
    }
}
