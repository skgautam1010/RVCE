<?php
	if($_POST["username"]
	{
		if(preg_match(/[^a-zA-Z$]/,$_POST['username']))
		{
			die("InvalidName & name should be alphabet");
		}
		echo "welcome".$_POST['username']."<br>";
	}
	SWITCH($_POST["favouritecolor"])
	{
		case "red":
			$strbcolor="rgb(255,0,0)";
			break;
		case "green":
			$strbcolor="rgb(0,255,0)";
			break;
		case "blue":
			$strbcolor="rgb(0,0,255)";
			break;
		default:
			$strbcolor="rgb(0,0,0)";
			break;
	}
?>
