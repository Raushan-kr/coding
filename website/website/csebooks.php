
<!DOCTYPE html>
<html>
<head>
	<title>computer science and  engineering</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel='stylesheet' type='text/css' href='csebooks.css'>
	<style type='text/css'>



.body{
  background: black;
}

div.scrollmenu {
    background-color: ;
    overflow: auto;
    white-space: nowrap;
}

div.scrollmenu a {
    display: inline-block;
    color: #ffffcc;
    text-align: center;
    padding: 14px;
    text-decoration: none;
}

div.scrollmenu a:hover {
    background-color: #777;
}
.top{
  margin-left: 150px;
  width:82%;
  height: 730px;
  background-color:lightblue;
  background-image: url('image/aag.jpg');
}


* {box-sizing: border-box}
body {font-family: "Lato", sans-serif;}

.tab {
    float: left;
    border: 1px solid blue;
    background-color: lightblue;
    width: 10%;
    height: 270px;
}

/* Style the buttons inside the tab */
.tab button {
    display: block;
    background-color: white;
    color: black;
    padding: 22px 16px;
    width: 100%;
    border: solid ;
    outline: none;
    text-align: left;
    cursor: pointer;
    transition: 0.3s;
    font-size: 17px;
}

/* Change background color of buttons on hover */
.tab button:hover {
    background-color: #ddd;
}

/* Create an active/current "tab button" class */
.tab button.active {
    background-color: #6666;
}

/* Style the tab content */
.tabcontent {
    float: left;
    padding: 0px 12px;
    border: 1px solid #ccc;
    width: 70%;
    border-left: none;
    height: 400px;
}
.iframe{
  margin-right:185px;
  text-align: center;
  border: 2px solid red;
  border-top: #c00 1px dotted;
  border-right: #c00 2px dotted;
  border-left: #c00 2px dotted;
  border-bottom: #c00 1px dotted;
    -moz-border-radius: 12px;
  -webkit-border-radius: 12px;
  border-radius: 12px;

  -moz-box-shadow: 4px 4px 14px #000;
  -webkit-box-shadow: 4px 4px 14px #000;
  box-shadow: 4px 4px 14px #000;
background-color: ;

}

.hello{

  text-align: right;
  
  color: white;
}

	</style>

</head>
<body class='body'>
	<section class='top'>
	<section>
	<?php	
	include_once 'session.php';
	?></section>
	<?php

	echo "<div class='scrollmenu'>
	<a href='content1.php'>home</a>
	 

	 <a  href='cse1stsem1.php'>cse first sem </a>
	 <a       href='cse2ndsem1.php'>cse second sem      </a>
	 <a       href='cse3rdsem1.php'>cse third sem      </a>
	 <a       href='cse4thsem1.php'>cse fourth sem      </a>
	 <a       href='cse5thsem1.php'>cse fifth sem      </a>
	 <a       href='cse6thsem1.php'>cse sixth sem      </a>
	 <a       href='cse7thsem1.php'>cse seventh sem      </a>
	 <a        href='cse8thsem1.php'>cse eightth sem      </a>
	 <a href=''>help</a>
	 </div>";
	 ?>
	
<section>
	<div class="tab">
    <a class="tablinks" onclick="openCity(event, 'London3')" id="defaultOpen"></a>
  <button class="tablinks" onclick="openCity(event, 'London')" id="defaultOpen">visual computing</button>
  <button class="tablinks" onclick="openCity(event, 'Paris')">mobile computing</button>
  <button class="tablinks" onclick="openCity(event, 'tokyo')">cloud computing</button>

</div>
<div id="London3" class="tabcontent">
<?php
  include_once'computesci.php';
  ?>
</div>

<div id="London" class="tabcontent">
<?php
	include_once'visualcomputing.php';
	?>
</div>

<div id="Paris" class="tabcontent">
<?php
	include_once'mobilecomputing.php';
	?>
</div>
<div id="tokyo" class="tabcontent">
<?php
	include_once'cloudcomputing.php';
	?>
</div>

<div id="London1" class="tabcontent">
<?php
	include_once'datamanagement.php';
	?>
</div>

<div id="Paris1" class="tabcontent">
<?php
	include_once'machinelearning.php';
	?>
</div>
<div id="tokyo1" class="tabcontent">
<?php
	include_once'informtionsystem.php';
	?>
</div>

<div id="London2" class="tabcontent">
<?php
	include_once'datamanagement.php';
	?>
</div>

<div id="Paris2" class="tabcontent">
<?php
	include_once'mobilecomputing.php';
	?>
</div>
<div id="tokyo2" class="tabcontent">
<?php
	include_once'cloudcomputing.php';
	?>
</div>

<script>
function openCity(evt, cityName) {
    var i, tabcontent, tablinks;
    tabcontent = document.getElementsByClassName("tabcontent");
    for (i = 0; i < tabcontent.length; i++) {
        tabcontent[i].style.display = "none";
    }
    tablinks = document.getElementsByClassName("tablinks");
    for (i = 0; i < tablinks.length; i++) {
        tablinks[i].className = tablinks[i].className.replace(" active", "");
    }
    document.getElementById(cityName).style.display = "block";
    evt.currentTarget.className += " active";
}


document.getElementById("defaultOpen").click();
</script>
   	<div class="tab">
  <button class="tablinks" onclick="openCity(event, 'London1')" >Data management</button>
  <button class="tablinks" onclick="openCity(event, 'Paris1')">machine learning</button>
  <button class="tablinks" onclick="openCity(event, 'tokyo1')">information & system security</button>

</div>


	<div class="tab">
  <button class="tablinks" onclick="openCity(event, 'London2')" >Theory and algorithms</button>
  <button class="tablinks" onclick="openCity(event, 'Paris2')">computer architecture</button>
  <button class="tablinks" onclick="openCity(event, 'tokyo2')">intro to GIS</button>
</div>
<section>
  <div><p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</p></div>

</section>
<br><br>
</section>
<section><div >
  <form><input type="" name=""><button >search</button><br>
  <button >video lecture</button>
  <button >comment and suggestion</button>
  <button>elective courses</button></form>
</div>
</section>


</section>
<section class="last"></section>
</body>
</html>