    


<?php
session_start();
include_once'db.php';
if(isset($_SESSION['email']))
{
	include_once 'cse5thsem.php';

}
else {
	echo"login first"; 
}
?>