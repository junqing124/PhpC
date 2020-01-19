本项目的目的是为了把PHP源码里的东西替换成最原始的C源码
比如我们要分析
        PHP_FUNCTION(ord)
        {
                zend_string *str;

                ZEND_PARSE_PARAMETERS_START(1, 1)
                        Z_PARAM_STR(str)
                ZEND_PARSE_PARAMETERS_END();

                RETURN_LONG((unsigned char) ZSTR_VAL(str)[0]);
        }
底层的C源码是怎么实现的，可以用本项目
1、修改php.c
2、在命令中进入项目后执行:
   gcc -E php.c >result.e
3、打开resilt.e,把要格式化的代码复制出来到http://tools.jb51.net/code/jb51_c_format里格式化就行了。
