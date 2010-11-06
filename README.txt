ax3 is an Aegir XML-RPC Sign-Up module.

ax3 will set up user 2 and email login 
info to the person who signed up for this website. 

This module depends on ax1 (installed in Aegir)
and ax2 (installed in the websites where people 
sign up for their own websites).

set up
-----------------------------------
1. open ax.inc

2. enter the url of the website where ax2 is installed
   on line 24.

3. enter your api key on line 38.

4. make sure your install profile installs ax3
   on installation. 

5. Add these lines to your install profile's 
   .profile file: 

      // create and notify user number 2 
      ax3_create_user2();
      // now disable ax3. we're done with it.
      module_disable(array('ax3'));  
