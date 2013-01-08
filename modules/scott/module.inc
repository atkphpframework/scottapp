<?php

  class mod_scott extends atkModule
  {
	function getMenuItems()
	{
	  $this->menuitem("dept", dispatch_url("scott.dept", "admin"));
	  $this->menuitem("emp", dispatch_url("scott.emp", "admin"));
	}
  }
?>
