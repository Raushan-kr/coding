<?php

	$file = $_FILES['file'];
	
	$filename = $_FILES['file']['name'];
	echo $filename ."<br>" ;
	$filetmpname = $_FILES['file']['tmp_name'];
	echo $filetmpname."<br>" ;
	$filesize = $_FILES['file']['size'];
	echo $filesize."<br>" ;
	$fileerror = $_FILES['file']['error'];
	echo $fileerror ."<br>" ;
	$filetype = $_FILES['file']['type'];
	echo $filetype ."<br>" ;
	$fileExt = explode('.',$filename);
	echo $fileExt."<br>" ;

	$fileactualExt = strtolower(end($fileExt));
	echo $fileactualExt."<br>"; 
	$allowed = array('jpg','jpeg','png','pdf');
	echo $allowed."<br>" ;
	if(in_array($fileactualExt, $allowed)){
		
			
				$filenewname = uniqid('',true).".".$fileactualExt;
				echo $filenewname."<br>" ;
				$filedestination = 'upload/'.$filenewname;
				move_uploaded_file($filetmpname,$filedestination );
				header("location:content.php");

		}
	


