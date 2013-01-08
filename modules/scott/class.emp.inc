<?php

  useattrib("atkdateattribute");
  useattrib("atkcurrencyattribute");
  useattrib("atknumberattribute");
  useattrib("atklistattribute");

  class emp extends atkNode
  {
    function emp()
    {
      $this->atkNode("emp");
      $this->add(new atkAttribute("empno", AF_PRIMARY));
      $this->add(new atkAttribute("ename", AF_SEARCHABLE));
      $this->add(new atkListAttribute("job", array("CLERK", "SALESMAN",
                            "ANALYST", "MANAGER", "PRESIDENT"), array(),
                            AF_SEARCHABLE));
      $this->add(new atkDateAttribute("hiredate"));
      $this->add(new atkCurrencyAttribute("sal", AF_HIDE_LIST, 7, "USD"));
      $this->add(new atkNumberAttribute("comm", AF_HIDE_LIST, 7, 2));
      $this->setOrder("ename");
      $this->setIndex("ename");
      $this->setTable("emp");
    }

    function descriptor_def()
    {
      return "[ename] ([job])";
    }
  }
?>
