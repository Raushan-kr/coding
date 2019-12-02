
<!DOCTYPE html>
<html>
<head>
  <title>computer science and  engineering</title>
  <link rel='stylesheet' type='text/css' href='csebooks.css'>
  <style type='text/css'>
.body{
  background-color: #ccc;
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


* {box-sizing: border-box}
body {font-family: "Lato", sans-serif;}

.tab {
    float: left;
    border: 1px solid blue;
  
    width: 10%;
    height: 510px;
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
    height: 510px;
}


.footer{
  color:white;
  margin-left:2px;
}
.lib{
  text-align: center;
  font-size: 40px;
  
}
.bb{
border: 1px;
border-color: white;

}
  </style>


</head>
<body class='body'>

  <section>
    <?php
include_once'session.php';

    ?>
  </section>
 
<p > <button><a href="content1.php">home</a></button></p><section class="bb"><hr style="border: 2px solid black;" /> </section>
  
<section>
  
  <div class="tab">
    <a class="tablinks" onclick="openCity(event, 'London3')" id="defaultOpen"></a>
  <button class="tablinks" onclick="openCity(event, 'London')">mathematics</button>
  <button class="tablinks" onclick="openCity(event, 'Paris')">analog electronics</button>
  <button class="tablinks" onclick="openCity(event, 'tokyo')">environmenttal studies</button>
  <button class="tablinks" onclick="openCity(event, 'London1')" >c programming</button>
  <button class="tablinks" onclick="openCity(event, 'Paris1')">element of electrical engineering</button>
  <button class="tablinks" onclick="openCity(event, 'tokyo1')">apllied science</button>

</div>
<div id="London3" class="tabcontent">
<?php
  include_once'librarynote.php';
  ?>
</div>


<div id="London" class="tabcontent">
<?php
  include_once'maths1stsem.php';
  ?>
</div>

<div id="Paris" class="tabcontent">
<?php
  include_once'analogelectronics.php';
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
    
  




</section>
<section><div >
  <form><input type="" name=""><br><button >search</button><br>
  <button ><a href="">video lecture</a></button>
  <button ><a href=""> suggestion</a></button>
  </form>
</div>

</section>
<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
<section><div></div></section><div><a class="footer" href="csebooks1.php">back</a></div>

</section>
</body>
</html>