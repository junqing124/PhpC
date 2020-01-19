#include "Zend/zend_API.h"
#include "main/php.h"

int main()
{
        PHP_FUNCTION(ord)
        {
                zend_string *str;

                ZEND_PARSE_PARAMETERS_START(1, 1)
                        Z_PARAM_STR(str)
                ZEND_PARSE_PARAMETERS_END();

                RETURN_LONG((unsigned char) ZSTR_VAL(str)[0]);
        }
}
