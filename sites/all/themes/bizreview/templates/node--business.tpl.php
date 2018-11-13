<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php global $base_url; ?>
  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
  <header>
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <div class="submitted">
        <?php print $user_picture; ?>
        <span class="glyphicon glyphicon-calendar"></span> <?php print $submitted; ?>
      </div>
    <?php endif; ?>
  </header>
  <?php endif; ?>
  <?php $term_name = taxonomy_term_load($field_location[LANGUAGE_NONE][0]['tid']); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
    <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>
  <script type="application/ld+json">
  {
    "@context": "http://schema.org",
    "@type": "Event",
    "name": "<?php print $node->title; ?>",
    "location": {
      "@type": "Place",
      "address": {
        "@type": "PostalAddress",
        "streetAddress": "<?php print $node->field_address[LANGUAGE_NONE][0]['value']; ?>"
      },
      "name": "<?php print $term_name->name; ?>"
    },
    "composer": {
      "@type": "Organization",
      "name": "<?php print $node->field_organiser[LANGUAGE_NONE][0]['value']; ?>"
    },
    "image": "<?php print file_create_url($node->field_image[LANGUAGE_NONE][0]['uri']); ?>",
    "description": "<?php print $node->body[LANGUAGE_NONE][0]['value']; ?>",
    "startDate": "2016-04-21T20:00",
     "url": "<?php print $base_url . request_uri(); ?>"
  }
  </script>
</article>
<?php if(!empty($node->field_ticket_link)) : ?>
  <div class="button-buy-tic">
    <a href="<?php print $field_ticket_link[LANGUAGE_NONE][0]['url']; ?>" target="_blank">
      <?php print $field_ticket_link[LANGUAGE_NONE][0]['title']; ?>
    </a>
  </div>
<?php endif; ?>
<div class="button-back-to-category">
  <a href="<?php print $_SERVER['HTTP_REFERER'] ?>">
    <?php print t('Back to category'); ?>
  </a>
</div>
