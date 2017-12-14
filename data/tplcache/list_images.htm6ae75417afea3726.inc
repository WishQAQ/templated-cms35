<?php
$z[0]=Array("global","",48,76);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",89,111);
$z[1][4]['name']="typename";
$z[2]=Array("global","",114,140);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",181,210);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",250,308);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("include","",314,350);
$z[5][4]['filename']="style.htm";
$z[6]=Array("include","",369,404);
$z[6][4]['filename']="head.htm";
$z[7]=Array("channel","\r\n            <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n            ",489,720);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[8]=Array("field","",777,806);
$z[8][4]['name']="position";
$z[9]=Array("list","\r\n        <li>[field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}' alt='{@me['title']}'/>{@me['title']}</a>\"); [/field:array]</li>\r\n        ",859,1098);
$z[9][4]['pagesize']="12";
$z[10]=Array("pagelist","",1143,1221);
$z[10][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",1242,1279);
$z[11][4]['filename']="footer.htm";

?>