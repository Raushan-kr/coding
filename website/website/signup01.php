<?php

    include_once 'db.php';
     $first = mysqli_real_escape_string($conn,$_POST['first']);
	 
	$em = mysqli_real_escape_string($conn,$_POST['email']);
	$phone = mysqli_real_escape_string($conn,$_POST['phone']);
	$dob = mysqli_real_escape_string($conn,$_POST['dob']);
	$password = mysqli_real_escape_string($conn,$_POST['password']);
	$pass = mysqli_real_escape_string($conn,$_POST['conpassword']);
	$stree_add=mysqli_real_escape_string($conn,$_POST['st_add']);
	
	
	if(empty($first)||empty($dob)|| empty($em)||empty($stree_add)||empty($password)){
		 header("Location: ../loginsystem1.php");
	exit();
	}
	else{
	
	
	
	if(!filter_var($em ,FILTER_VALIDATE_EMAIL)){
		echo"email error , your email does not get recognised";
		echo"please enter valid email so that we can regonise you as our genuine customer<a href='loginsystem1.php'</a>signup";
		echo"if you have already signed up provide your email and password to get<a href='../index.php'> sign in</a>";
		 }
	
	else {
		$sql = "select * from part1miniproject/user_info where email ='$em' ";
		$result = mysqli_query($conn,$sql);
		$resultcheck = mysqli_num_rows($result);
		if ($resultcheck > 0){
			echo'error';
			 #header("Location: website/loginsystem1.php?signup=emailtaken or  ");
			exit(); 
		}
		else{
			
	 $hashpwd=password_hash($password,PASSWORD_DEFAULT);
	
	
    $sq = "INSERT INTO  user_info (email,password,first_name,dob,street_add) VALUES('$em','$hashpwd','$first',$dob','$stree_add');";
   mysqli_query($conn,$sq);
   if (mysqli_query($conn, $sql)) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}


mysqli_close($conn);
 	 


   
   

		exit();}
		}
	}
	



  ?>