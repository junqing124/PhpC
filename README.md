本项目的目的是为了把PHP源码里的东西替换成最原始的C源码<br>
比如我们要分析<br>
PHP_FUNCTION(ord)<br>
{<br>
	zend_string *str;<br>

	ZEND_PARSE_PARAMETERS_START(1, 1)<br>
		Z_PARAM_STR(str)<br>
	ZEND_PARSE_PARAMETERS_END();<br>

	RETURN_LONG((unsigned char) ZSTR_VAL(str)[0]);<br>
}<br>
底层的C源码是怎么实现的，可以用本项目<br>
1、修改php.c<br>
2、在命令中进入项目后执行:<br>
   gcc -E php.c >result.e<br>
3、打开resilt.e,把要格式化的代码复制出来到http://tools.jb51.net/code/jb51_c_format里格式化就行了。<br>
