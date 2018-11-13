<?php $a= 3; ?>
<div>
  <div class="sponsor-image">
    <a href="<?php echo $field_sponsor_link[0]['url']; ?>" target='_blank'><img src="<?php echo file_create_url($field_sponsor_image[0]['uri']); ?>"></a>
  </div>
  <div class="sponsor-description">
    <p><?php echo $field_sponsor_description[0]['value']; ?></p>
  </div>
</div>
