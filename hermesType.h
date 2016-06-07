/**
* VALUE BASED DATA TYPE
*/
typedef enum {FALSE, TRUE} bool;

/**
*	REFERENCE BASED DATA TYPE
*	THE NEED FOR REFERENCE BASED DATA TYPE IS DUE TO THE FACT THAT FUNCTION IN C ONLY RETURNS ONE VALUE.
*	MEANING, FUNCTION HAS MULTIPLE INPUT AND SINGLE OUTPUT
*	BY USING REFERENCES, THIS LIMITATION CAN BE OVERCOME
*/

typedef bool* Boolean;
typedef int* Integer;
typedef float* Float;
typedef char* String;

/*
*	BASIC BUILDING BLOCKS OF THE FRAMEWORK
*/

struct _Container{	//CONTAINER
	char *name;
	int position;
	int size;
	void* content;
	struct _Container *next;
	struct _Container *previous;	
};
typedef struct _Container* HermesContainer;

struct _List{	//LIST
    Int index;
	HermesContainer start;
	HermesContainer end;
} ;
typedef struct _List* HermesList;

struct _Context{	//CONTEXT
	int List_count;
	HermesList Liste_access;	
	HermesList error_report;
	bool error_stat;
	int error_count;
	
} ;
typedef struct _Context* HermesContext;


