var slideIndex2 = 1;
gosterSlides2(slideIndex2);

function degistirSlides(n) {
  gosterSlides(slideIndex += n);
}

function currentSlide(n) {
  gosterSlides(slideIndex = n);
}

function gosterSlides(n) 
{
    var i;
    var slides = document.getElementsByClassName("mySlides");
    var dots = document.getElementsByClassName("dot");
    if (n > slides.length) {slideIndex = 1}
    if (n < 1) {slideIndex = slides.length}
    for (i = 0; i < slides.length; i++) {
        slides[i].style.display = "none";
    }
    for (i = 0; i < dots.length; i++) {
        dots[i].className = dots[i].className.replace(" active", "");
    }
    slides[slideIndex-1].style.display = "block";
    dots[slideIndex-1].className += "active";
}
/*-------------------------------------2.Slider ----------------------------------------------------------------*/
var slideIndex2 = 1;
gosterSlides2(slideIndex2);

function degistirSlides2(n) {
  gosterSlides2(slideIndex2 += n);
}

function currentSlide2(n) {
  gosterSlides2(slideIndex2 = n);
}

function gosterSlides2(n) {
  var j;
  var slides2 = document.getElementsByClassName("mySlides2");
  var dots2 = document.getElementsByClassName("dot");
  if (n > slides2.length) {slideIndex2 = 1}
  if (n < 1) {slideIndex2 = slides.length}
  for (j = 0; j < slides2.length; j++) {
      slides2[j].style.display = "none";
  }
  for (j = 0; j < dots2.length; j++) {
      dots2[j].className = dots2[j].className.replace(" active", "");
  }
  slides2[slideIndex2-1].style.display = "block";
  dots2[slideIndex2-1].className += "active";
}