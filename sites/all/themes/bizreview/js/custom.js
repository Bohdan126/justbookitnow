
(function($) {
  /**
   * @todo
   */
  
  
  Drupal.behaviors.bizreviewDropdownMenu = {
    attach: function (context) {
        $('.dropdown').hover(
        function () {
			$(this).addClass('open');
		},
		
        function () {
			$(this).removeClass('open');
		}
		);
    }
  };
  
  
  // Drupal.behaviors.bizreviewEqualHeights = {
  //   attach: function (context) {
  //     $('body', context).once('views-row-equalheights', function () {
  //       $(window).resize(function() {
  //         $($('.view-list-business-grid .view-content, .view-categories .view-content, .view-list-modern .view-content').get().reverse()).each(function () {
  //           var elements = $(this).children('.views-row').css('height', '');
  //           if($(window).width() > 960) {
  //             var tallest = 0;
  //             elements.each(function () {
  //               if ($(this).height() > tallest) {
  //                 tallest = $(this).height();
  //               }
  //             }).each(function() {
  //               if (($(this).height() < tallest) || ($(this).height() == tallest)) {
  //                 $(this).css('height', tallest);
		// 		  $('.views-row-inner',this).css('height', tallest);
  //               }
  //             });
		// 	}
		// 	else {
		// 		elements.each(function () {
		// 		  $(this).css('height', 'auto');
		// 		  $('.views-row-inner',this).css('height', 'auto');
		// 		});
		// 	}
  //         });
  //       });
  //     });
  //   }
  // };
  
  Drupal.behaviors.bizreviewGalleryPage = {
    attach: function (context) {
      $('.block-featured-business .views-field-field-image, .view-member .views-field-picture, .view-meet-our-team .views-field-field-image').hover(
        function () {
		  $(this).addClass('hover');
        },
        function () {
		  $(this).removeClass('hover');
        }
      );
    }
  };
  Drupal.behaviors.bizreviewThemeColors = {
    attach: function (context) {
      $('body', context).once('block-theme-colors-showhide', function () {
        jQuery('.block-theme-colors .close').click(function(e){
		  e.preventDefault();
		  jQuery('.block-theme-colors .block-theme-color-content ').hide();
		  jQuery(this).hide();
		  jQuery('.block-theme-colors .open').show();
		});
		jQuery('.block-theme-colors .open').click(function(e){
          e.preventDefault();
		  jQuery('.block-theme-colors .block-theme-color-content ').show();
		  jQuery(this).hide();
		  jQuery('.block-theme-colors .close').show();
		});
      });
    }
  };
  Drupal.behaviors.addressfield = {
    attach: function (context) {
      var geoAddress = $(".field-name-field-coordinates .geofield-gmap-search");
      var address = $(".field-name-field-address input");

      geoAddress.keyup(function() {
        address.val( this.value );
      });
      geoAddress.blur(function() {
        address.val( this.value );
      });
    }
  };
  Drupal.behaviors.test = {
    attach: function (context) {
        $( "#edit-field-open-time-value" ).datepicker({
          dateFormat: "yy-mm-dd",
        });
    }
  };
  Drupal.behaviors.masonryInclude = {
    attach: function (context) {
      $('.masonry-processed').masonry({
        itemSelector: '.views-row',
      });
      $(".form-item-field-open-time-value-min-date input").attr("placeholder", "Start date");
      $(".form-item-field-open-time-value-max-date input").attr("placeholder", "End date");
      $('.view-search-event').masonry({
        itemSelector: '.col-xs-12',
      });
      
    }
  };
  Drupal.behaviors.stateForm = {
    attach: function (context) {
      var role = $('.form-type-checkbox input#edit-select-roles-4');
      if (role.is(':checked')) {
        $('form .field-name-field-business-organiser-name').show();
      }
      else {
        $('form .field-name-field-business-organiser-name').hide();
      }
      role.on('change', function () {
        if (role.is(':checked')) {
          $('form .field-name-field-business-organiser-name').show();
        }
        else {
          $('form .field-name-field-business-organiser-name').hide();
        }
      });
    }
  };
  Drupal.behaviors.homepageTabs = {
    attach: function (context) {
      console.log(1);
      $('h2.live').click(function () {
        setTimeout(function () {
          $('#block-views-list-business-block-8').show();
          $('#block-views-list-business-block-9').hide();
          $('.masonry-processed').masonry({
            itemSelector: '.views-row',
          });
        }, 0);
        if($(this).hasClass('active')) {
          $('h2.past').removeClass('active');
        }
        else {
          $(this).addClass('active');
          $('h2.past').removeClass('active');
        }
      });
      $('h2.past').click(function () {
        setTimeout(function () {
          $('#block-views-list-business-block-8').hide();
          $('#block-views-list-business-block-9').show();
          $('.masonry-processed').masonry({
            itemSelector: '.views-row',
          });
        }, 0);
        if($(this).hasClass('active')) {
          $('h2.live').removeClass('active');
        }
        else {
          $(this).addClass('active');
          $('h2.live').removeClass('active');
        }
      });
    }
  };
  
  Drupal.behaviors.categoryfield = {
    attach: function (context) {
      $('#block-views-list-business-block-11 .views-field-field-category-1 a').text("Show all");
      var width = $("#block-views-list-business-block-11 .views-limit-grouping-group .event-title").width();
    }
  };
  
})(jQuery);

