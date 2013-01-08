<?php

  class dept extends atkNode
  {
    function dept()
    {
      $this->atkNode("dept");
      $this->add(new atkAttribute("deptno", AF_PRIMARY));
      $this->add(new atkAttribute("dname", AF_SEARCHABLE));
      $this->add(new atkAttribute("loc", AF_SEARCHABLE));

      $this->setOrder("dname");
      $this->setTable("dept");
    }

    function descriptor_def()
    {
      return "[dname] ([loc])";
    }
  }
?>