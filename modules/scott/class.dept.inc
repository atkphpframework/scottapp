<?php

  userelation("atkonetomanyrelation");

  class dept extends atkNode
  {
    function dept()
    {
      $this->atkNode("dept");
      $this->add(new atkAttribute("deptno", AF_PRIMARY));
      $this->add(new atkAttribute("dname", AF_SEARCHABLE));
      $this->add(new atkAttribute("loc", AF_SEARCHABLE));
      $this->add(new atkOneToManyRelation("emps", "scott.emp", "deptno",
                                          AF_HIDE_LIST));

      $this->setOrder("dname");
      $this->setTable("dept");
    }

    function descriptor_def()
    {
      return "[dname] ([loc])";
    }
  }
?>