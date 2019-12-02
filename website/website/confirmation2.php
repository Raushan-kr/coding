<?php
function send_email($info){
         
    //format each email
    $body = format_email($info,'html');
    $body_plain_txt = format_email($info,'txt');
 
    //setup the mailer
    $transport = Swift_MailTransport::newInstance();
    $mailer = Swift_Mailer::newInstance($transport);
    $message = Swift_Message::newInstance();
    $message ->setSubject('Welcome to Site Name');
    $message ->setFrom(array('noreply@sitename.com' => 'Site Name'));
    $message ->setTo(array($info['email'] => $info['username']));
     
    $message ->setBody($body_plain_txt);
    $message ->addPart($body, 'text/html');
             
    $result = $mailer->send($message);
     
    return $result;
     
}
?>