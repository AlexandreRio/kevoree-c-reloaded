#ifndef H_NamedElement
#define H_NamedElement

#include "KMFContainer.h"

typedef struct _NamedElement NamedElement;

typedef struct _NamedElement_VT {
	KMFContainer_VT *super;
	/*
	 * KMFContainer
	 * NamedElement
	 */
	fptrKMFMetaClassName metaClassName;
	fptrKMFInternalGetKey internalGetKey;
	fptrKMFGetPath getPath;
	fptrVisit visit;
	fptrFindByPath findByPath;
	fptrDelete delete;
} NamedElement_VT;

typedef struct _NamedElement {
	NamedElement_VT *VT;
	/*
	 * KMFContainer
	 */
	KMFContainer *eContainer;
	/*
	 * NamedElement
	 */
	char *name;
} NamedElement;

NamedElement* new_NamedElement(void);
extern const NamedElement_VT namedElement_VT;
void initNamedElement(NamedElement * const this);

#endif
