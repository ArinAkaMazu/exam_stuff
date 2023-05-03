<?php
mysql_connect("localhost","root",null);
mysql_select_db("abc");
$but=$_REQUEST['but'];
if($but)
{
    $name=$_REQUEST['na'];
    $pass=$_REQUEST['pa'];
    if($but=="ok")
    {
        $res=mysql_query("select * from user where uid='$name' and pwd='$pass'");
        $c=0;
        while($rec=mysql_fetch_array($res))
        {
            $c=$c+1;
        }
        if($c==0)
        {
            echo "not match";
        }
        else{
            echo "data find";
        }
    }
}
?>