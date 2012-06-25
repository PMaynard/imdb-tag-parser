/*
 * File: 	datatypes.h
 * Author:	Pete Maynard 
 * Date:	23rd May 2012
 */

#define LINE_MAX 1024

/* This holds the film  and a link to TAG lines. */
typedef struct _node{
	char name[LINE_MAX];
	struct _tag *tag;
	struct _node *next;
}node;

/* This holds the tag line, with a link to the next tag. */
typedef struct _tag{
	char tag[LINE_MAX];
	struct _tag *next;
}tag;
