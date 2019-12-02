<!doctypehtml>
<html>
<head>
<title>sign up </title>
<link rel="stylesheet" type="text/css" href="stylecc.css">
 <style type="text/css">
body{
  background-color:black;
  color:white;
}
img{
  margin-left: 200px: 
}

form{
  color: black;
text-align:center;
font-size:15px;
margin-left:200px;
margin-right:200px;
margin-top:50px;
border:1px solid white ;
background:#ccc;
}
.signupbtn {
  float: center;
width: 20%;}  


.top{
  margin-left: 200px;
  width:80%;
  height: 800px;
  background-color:lightblue;
  float: top;
}</style>
</head>
<body  class=""><section class="top">
  <img src="" alt="librarylogo" >
<section >
<form action="signup01.php" method="POST">
  <div class="">
  <h1 class="aa">sign up</h1>
  <p></p>
  <hr>
 <div>
   <label for="first"><b>Full name Name:&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</b></label>
  <input type="text" placeholder="Enter your first name" name="first" required><br><br>
  <label for="dob"><b>DATE of birth:&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</b></label>
  <input type="text" placeholder="Enter your date of birth" name="dob" required><br><br>
  <label for="st_add"><b>street add:&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</b></label>
  <input type="text" placeholder="Enter your street address" name="st_add" required><br><br>

  <label for="email"><b>Email:&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp </b></label>
  <input type="text" placeholder="Enter your email" name="email" required><br><br>
  
  
  
  <label for="password"><b>Password:&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp </b></label>
  <input type="password" pattern=".{8,}"   required title="8 characters minimum" name="password"placeholder="set your password"><br><br>
  <label for="pwd"><b>confirm password: </b></label>
  <input type="password" placeholder="Enter password again" name="conpassword" required><br><br>

</select><br><br>

  </div>
  </div>
  
     <br> <button type="submit"  class="signupbtn">sign up</button><br><br>
	  
	</form>  


    


	 <br><br> 
	 <div><div>
	 <label for="text"><b>Already have an account </label>
	<button> <a rel="" href="../index.php">sign in</a></b></button>
 </div></div>
 
 
 
 
 </section>
 
 
</label></div></div></section>




</body>
</html>