<a href="showform.php?f=formexample">Form example</a>
<?php
error_reporting(0);
if ($_GET['f']) {include ($_GET['f'].".inc");}
?>