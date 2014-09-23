Caroline Ramani

Hours Spent on Assignment: 6
Discussed algorithms with: Sam Weiser and Elliot Cobb

Strategy:

In order to account for local variables in the impcore interpreter, 
I modified the USERDEF case of the APPLY section of the recursive
eval function, as well as the initial basis functions in impcore.c. 
Initially, I tried adding a separate local environment that would
be passed into the eval and evallist functions, but eventually settled
on less tedious solution.
        I created an environment to hold both the local variables, which
are all initialized to zero, and the formal variables. This environment is
called allval_env in the codebase and is then passed into the recursive call
to the eval function. If a local variable name conflicts with a formal
variable name, the value of the local variable will be bound to that name
and the value of the formal will be discarded.



