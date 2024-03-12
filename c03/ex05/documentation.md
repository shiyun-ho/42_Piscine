strlcat(): Copy and concatenate strings
-Takes full size of destination buffer
-Guarantees NUL-termination *if* there is room. 
-Both src AND dst must be NULL terminated.
-Appends string src to end of dst
-Append at most (dstsize - string length of dst - 1) characters
- Then null terminate:
	- Unless dstsize is 0
	- Orieginal dst string is longer than dst size 
-src and dst strings overlap, behaviour is undefined.
-Return values:
	- Returns the total length of string they tried to create
	- Initial length of dst + length of src
	- if return value >= dstsize
		-output string truncated
		-caller responsibility to handle

#Some Ideas

unsigned int	ft_strlcat(chat *dest, ii
