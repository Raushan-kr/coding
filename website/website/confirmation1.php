<?php
function format_email($info, $format){
 
    //set the root
    $root = $_SERVER['DOCUMENT_ROOT'].'/dev/tutorials/email_signup';
 
    //grab the template content
    $template = file_get_contents($root.'/signup_template.'.$format);
             
    //replace all the tags
    $template = ereg_replace('{USERNAME}', $info['username'], $template);
    $template = ereg_replace('{EMAIL}', $info['email'], $template);
    $template = ereg_replace('{KEY}', $info['key'], $template);
    $template = ereg_replace('{SITEPATH}','http://site-path.com', $template);
         
    //return the html of the template
    return $template;
 
}
?>