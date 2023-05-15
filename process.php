<?php
mysql_connect("localhost","root",null);
mysql_select_db("mydata");

$but=$_REQUEST['but'];
$nam=$_REQUEST['na'];
$age=$_REQUEST['ag'];
$sal=$_REQUEST['sl'];

if($but=="insert")
{
mysql_query("insert into emp values('$nam',$age,$sal)");
echo "data inserted sucessfully";
}
else if($but=="update")
{
mysql_query("update emp set age=$age, sal=$sal where name='$nam'");
echo "record updated sucessfully";

}
else if($but=="delete")
{
mysql_query("delete from emp where name='$nam'");
echo "sucessfully deleted";
}
else if($but=="select")
{
$res=mysql_query("select * from emp");
while($rec=mysql_fetch_array($res))
{
echo $rec[0]." ".$rec[1]." ".$rec[2]."<br>";
}


}
?>