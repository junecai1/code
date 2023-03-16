<?php
if (isset($_POST['name']) and isset($_POST['password'])){if ($_POST['name'] == $_POST['password'])
echo '用户名和密码不能相同";
else if (md5($_POST['name']) == md5($_POST['password']))die('Flag: '.$flag);
else
echo '密码错误;
}
else{
echo '请登录';}
?>