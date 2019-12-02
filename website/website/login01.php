<?php

session_start();

 
	    include_once 'db.php';
		
		$em = mysqli_real_escape_string($conn,$_POST['email']);
		$pwd = mysqli_real_escape_string($conn,$_POST['password']);
		
		$sql="select * from signuppage where email ='$em'";
		$ab="select email from signuppage where email ='$em'";
		$abc = mysqli_query($conn,$ab);
		$abcd = mysqli_num_rows($abc);
		$abcde = mysqli_fetch_assoc($abc);

		if(!$abcd){
				 echo "<p style='text-align:center;color:red;size:30px bold;'>alert(email is not registered) </p>";
					 echo"please register your email to access this site <a href='loginsystem1.php'>signup</a><br>";
					 echo "if you have already registered with different email please <a href='../index.php'>log in</a>here";

		}
		else{
		$result = mysqli_query($conn,$sql);
		$resultcheck = mysqli_num_rows($result);
		
			if($row = mysqli_fetch_assoc($result)){
				$hashedpwd = password_verify($pwd,$row['password']);
				if($hashedpwd == false){
					 echo "<p style='text-align:center;color:red;size:30px bold;'>alert(wrong email or password) </p>";
					 echo"<a href='../index.php'>back to login page</a>";


					exit();
				}
				elseif($hashedpwd == true){
				$_SESSION['email'] = $row['email'];
				$_SESSION['first_name'] = $row['first_name'];
				$_SESSION['last_name'] = $row['last_name'];
				$_SESSION['phone'] = $row['phone'];	
				$_SESSION['roll'] = $row['iiitn_rollnumber'];





				header("Location:content1.php");
				
				
				
				
				
				}
			}
			
		}
		
		