<?php

$items = $variables['items'];
if (!empty($items['organiser_name'])) {
  print '<b>Business/Organiser name:</b>';
  print '<div class="user-profile-link">';

  print '<a href="/user/'. $items['user_id'] . '">' . render($items['organiser_name']) . '</a>';

  if (!empty($items['fb'])) {
    print '<a class="user-fb-link" target="_blank" href="' . $items['facebook_link'] . '"></a>';
  }
  if (!empty($items['tw'])) {
    print '<a class="user-tw-link" target="_blank" href="' . $items['twitter_link'] . '"></a>';
  }
  print '</div>';
}

