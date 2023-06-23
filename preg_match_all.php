<?php
$str="hello anil how are are you";
$patt="/are/";
$v=preg_match_All($patt,$str,$arr); //array is must $arr
if($v)
echo $v." "."match";
else
echo $v." "."not match";
?>