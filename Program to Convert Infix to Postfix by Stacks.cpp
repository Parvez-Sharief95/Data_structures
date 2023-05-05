/* Program to Convert Infix to Postfix by Stacks /*

ALGORITHM :
Precend(+,-) --> 1
precend(*,/) --> 2
Precend(^) ----> 3
Step 1 : Take a stack and a postfix string
step 2 : Run a loop through Infix string
step 3 : If the character is an OPERAND add it to the postfix string.
	    Else
		If stack is empty push the operator into the stack.
		Else
		Run a loop till
		Top != -1 && prec(infix([i]) <= prec (stack[top])
		pop the element from stack and add it to the postfix string.
		After the end of the loop push infix[i] into the stack
Step 4 :Add the remaining operators in the stack to postfix string.

A+B*C/D-E*F+G+H*I-J
