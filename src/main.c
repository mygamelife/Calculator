#include "main.h"
#include <stdio.h>
#include <CException.h>


int main()
{
	int length_of_historybuffer=5;
	CEXCEPTION_T err;
  
	initialize_historybuffer(length_of_historybuffer);
	printf(">>");
	
	while(end_of_program != 1)
	{
		main_command_prompt();
		if(isEnter == 1)
		{
			String *str = stringNew(expressiontoevaluate);
      Try {
        int result = Calculator(str);
        printf("\nanswer : %i\n", result);
        printf(">>");
      } Catch(err) {
        dumpErrorCode(err);
        tokenDisplay(currentToken);
        printf(">>");
      }
		}
		isEnter = 0;
		
	}
	
	historyBufferDel(hb);
}

