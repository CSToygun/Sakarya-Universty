<!DOCTYPE html>
<html>
<body>
<table   class="table table-striped table-dark my-table" align="center">
<tr>
            <td >Ad-Soyad :</td>
            <td ><?php echo $_POST['isim']?></td>
        </tr>
        <tr>
            <td>Mail :</td>
            <td ><?php echo $_POST['mail']?></td>
        </tr>
        <tr>
            <td>Cinsiyet :</td>
            <td ><?php echo $_POST['cinsiyet']?></td>
        </tr>

        <tr>
            <td>Memleket :</td>
            <td ><?php echo $_POST['Memleket'] ?></td>
        </tr>
        <tr>
            <td>Hobiler :</td>
            <td >
				<?php
			if(isset($_POST['hobi'])) 
			{
				$secim = $_POST['hobi']; 
				foreach($secim as $scm) {
				echo '-' . $scm ;
				}
			}else {
			echo "";
				}
                  ?></td>	
        </tr>
        <tr>
            <td>Konu :</td>
            <td ><?php echo $_POST['konu']?></td>
        </tr>
        <tr>
            <td>Adres: </td>
            <td ><?php echo $_POST['adres']?></td>
        </tr>
</table>


</body>

</html>
