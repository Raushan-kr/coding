
<!DOCTYPEhtml>
<html>
<head>
	<link rel="stylesheet" href="content.css" type="text/css">
	<title></title>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	


<style>
  .body
  {
    background-color: black;
    color: red;

  }
.hello{

  text-align: right;
  
  color: white;
  background-color:black;
}
</style>




</head>

<body class="body">
  <section>
    <?php
include_once'session.php';

    ?>
    <section><pre class='hello'><a  href="msg.php">message</a></pre></section>
  </section>
  <section>
    <form action="friend.php">
      <button>friend list</button>
    </form>
     <form action="addfriend.php">
      <button>add friend</button>
    </form>
    <pre>the songs you like :<a href="songlist.php"> songs list</a></pre>
    
    <pre>add song to your favourite :<a href="addsong.php"> add song</a></pre>
    <pre>the  groups you have joined: <a href="group.php">group</a></pre>
   <pre>join new group<a href="join.php">click here</a></pre>


  </section>
  <section>
    <pre>want to see all things related to your friends, group , favourite artist and songs ,message : <a href="view.php">view</a> </pre>
  </section>

<section><pre>your contacts details:<a href="contact.php">click here</a></pre></section>
	
</div>


</body>
</html>