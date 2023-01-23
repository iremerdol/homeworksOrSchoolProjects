#pragma once
#include<string.h>
#define MAX_STR_LEN 50
/*CENG114*/
char * strassign(char dest[], /* output - destination string */
	const char src[], /* input - source string */
	int dest_len) { /* input - space available in dest */
	int new_len; /* number of characters to copy into dest */
	int len = strlen(src);
	/* If the length of the source is less than the length of the
	destination, all characters in the source can be copied */
	if (len < dest_len)
		new_len = len;
	else /* otherwise, it is possible to copy only dest_len - 1 characters */
		new_len = dest_len - 1;
	/* Copies new_len chars from src to dest using function that
	gives correct results even if src and dest overlap */
	memmove(dest, src, new_len);
	/* Adds null character at end of string */
	dest[new_len] = '\0';
	return(dest);
}

char * concat(
	char dest[], /* output - destination string */
	const char str1[], /* input - strings */
	const char str2[], /* to concatenate */
	int dest_len) /* input - available space in dest */
{
	char result[MAX_STR_LEN]; /* local string space for result */
							  /* Checks if result will be wrong due to lack of local space */
	if (dest_len > MAX_STR_LEN &&
		strlen(str1) + strlen(str2) >= MAX_STR_LEN)
		//printf("\nInsufficent local storage causing loss of data!\n");
	/* Builds result in local storage to properly handle overlap of dest
	and str1 or str2 */
		strassign(result, str1, MAX_STR_LEN);
	strncat(result, str2, MAX_STR_LEN - strlen(result) - 1);
	strassign(dest, result, dest_len);
	return(dest);
}

/**********************************************************************
Extracts a substring from src and returns it in dest, truncating if
the substring contains dest_len or more characters. The substring
extracted starts with src[start] and contains characters including
src[end] unless src[end] is beyond the end of src, in which case the
substring returned is src[start] to the end of src. The empty string
is returned if start > end or if start >= strlen(src)
**********************************************************************/
char * substr(
	char dest[], /* output - destination string */
	char src[], /* input - source string */
	int start, /* input - subscript of first character */
	/* of src to include */
	int end, /* input - subscript of last char included*/
	int dest_len) /* input - space available in dest */
{
	int sub_len; /* length of substring returned */
	int len = strlen(src);
	/* Adjusts start and end if they are beyond the ends of src */
	if (end > len - 1)
		end = len - 1;
	if (start < 0)
		start = 0;
	if (start > end) /* if starting point is past ending point */
		dest[0] = '\0';
	else
	{ /* Find the length of the substring */
		sub_len = end - start + 1;
		/* sub_len can not be greater than dest_len - 1 */
		if (sub_len >= dest_len)
			sub_len = dest_len - 1;
		memmove(dest, src + start, sub_len);
		dest[sub_len] = '\0';
	}
	return(dest);
}