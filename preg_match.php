<?php
$str="hello anil how are you";
$patt="/are/";
$v=preg_match($patt,$str); //array is optional $arr
if($v)
echo $v." "."match";
else
echo $v." "."not match";
?>