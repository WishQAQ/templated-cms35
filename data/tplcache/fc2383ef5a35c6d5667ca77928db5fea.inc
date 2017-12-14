<li>[field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='img'><img src='{@me['litpic']}' alt='{@me['title']}'/></a>"); [/field:array]
            <h2><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h2>
            <p class="intro"> [field:description/]... <br/><a href="[field:arcurl/]" title="[field:title/]">[+查看详细]</a></p>
            <p class="in">DATE:[field:pubdate function="GetDateMK(@me)"/]</p>
        </li>