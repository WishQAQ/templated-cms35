<div class="n">
      <h3><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h3>
      <div class="tone"> 
      {dede:arclist titlelen='' row='1' flag='c'   imgwidth='120'   imgheight='120'}
        <div class="img"><a href="[field:typeurl/]" title="[field:typename/]">[field:image/]</a></div>
        {/dede:arclist} 
        </div>
      <ul class="clearfix">
        {dede:arclist titlelen='220' row='4' noflag='c'}
        <li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></li>
        {/dede:arclist}
      </ul>
      <a href="{dede:field name='typeurl'/}" rel="nofollow" class="more">more+</a> </div>