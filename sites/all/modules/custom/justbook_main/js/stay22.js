
  document.addEventListener("DOMContentLoaded", function(e) {
    // 1. Edit widget size
    var settings22 = {
      width: '100%', // set the width in px or %
      height: '375px' // set the height in px or %
    };
    
    // 2. Fill out your config here and the rest should work
    var s22obj = {
      aid: 'affiliateid', // your affiliate id for tracking
      address: Drupal.settings.justBook.address, // full street address or venue name + city
      checkin: '7/12/2018', // checkin date for their stay in MM/DD/YYYY
      maincolor: '00549E', // your brand color in hex (without the #)
      markerimage: "https://www.stay22.com/logo.png", // url of your logo or event image (in https)
      hidebrandlogo: true,
      hideppn: true,
      hidefooter: true,
      title: 'Places to stay',
      hidenavbuttons: true,
      hidenavbar: true,//то тайтл і сабтайтл.
      subtitle: Drupal.settings.justBook.address
    };
    
    // Leave this part intact
    var params22='';
    for (var key in s22obj){if (params22){params22 +='&';}params22 +=key + '=' + encodeURIComponent(s22obj[key]);}var div22=document.getElementById('test_id'); div22.insertAdjacentHTML('afterend', '<iframe id="stay22-widget" width="' + settings22.width + '" height="' + settings22.height + '" src="' + 'https://www.stay22.com/embed/gm?' + params22 + '" frameborder="0"></iframe>');
    
  });
