<?php

/**
 * @file views-limit-grouping.tpl.php
 * Basically, just a copy of views-view-unformatted.tpl.php.
 */
?>
<div class="views-limit-grouping-group">
  <?php if (!empty($title)): ?>
    <h3 class="event-title"><?php print $title; ?></h3>
  <?php endif; ?>
  <?php foreach ($rows as $id => $row): ?>

    <div class="masonry-item views-row views-row-<?php print $zebra; ?> <?php print $classes; ?> col-xs-12 col-sm-6 col-md-3">
      <div class="views-row-inner">
      <?php print $row; ?>
    </div>
    </div>
  <?php endforeach; ?>
</div>
