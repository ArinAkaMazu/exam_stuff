<?php
if(isset($_GET['na']) && isset($_GET['pa']))
{ 
$name=$_GET['na'];
$pass=$_GET['pa'];
echo "name is:".$name."<br>"."password is:".$pass;
}
else
{
    $name=$_POST['na'];
$pass=$_POST['pa'];
echo "name is:".$name."<br>"."password is:".$pass;
}
?>