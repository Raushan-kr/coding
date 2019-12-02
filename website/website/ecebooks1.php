    


<?php
session_start();
include_once'db.php';
if(isset($_SESSION['email']))
{
	include_once 'ecebooks.php';

}
else {
	echo"login first"; 
}
?>