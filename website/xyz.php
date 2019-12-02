    


<?php
session_start();

if(isset($_SESSION['email']))
{
	include_once 'website/content1.php';

}
else {
	include_once'index1.php' ;
}
?>