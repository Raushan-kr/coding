
 
<!DOCTYPE html>
<html>
<head>
	<title></title>
	<style>
.hello{

	text-align: right;
	
	color: white;
}

	</style>
</head>
<body>
<?php 
  include_once 'db.php';
  $em = $_SESSION['email'];
  $name =$_SESSION['first_name'];
  $last_name =$_SESSION['last_name'];
       echo "<pre class='hello'> hello ".$name." ".$last_name ;
  echo "<br><form class='hello' action='logout.php' method='POST'><button type='submit' name='submit'>logout</button></form>";
  echo "</pre>";
  ?>
</body>
</html>

  