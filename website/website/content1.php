

<?php
session_start();
include_once'db.php';
if(isset($_SESSION['email']))
{
	include_once 'content.php';

}
else {
	include_once'notlogin.php'; 
}
?>