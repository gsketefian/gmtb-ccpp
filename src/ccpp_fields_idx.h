/**
 * @file ccpp_fields_idx.h
 *
 * Routines and functions to generate and lookup
 * fields/variables needed for the physics routines.
 *
 * @ingroup Physics
 * @{
 **/
#ifndef CCPP_FIELD_IDX_H
#define CCPP_FIELD_IDX_H

#ifdef __cplusplus
extern "C"
{
#endif


#define  CCPP_FIELD_IDX_MAX     75
#define  CCPP_FIELD_IDX_GROW    1.75


struct ccpp_field {
	int  n;         /**< Location within nodes array **/
	char *name;     /**< Name of the field **/
};

struct ccpp_field_idx {
	int sorted;                 /**< Sorted flag. 0=unsorted, 1=sorted **/
	int n;                      /**< Current number of used nodes **/
	int max;                    /**< Maximum nodes allocated **/
	struct ccpp_field **fields; /**< Array of fields **/
};


/** CCPP field index initialization routine. **/
int ccpp_field_idx_init(void **);


/** CCPP field index finialization routine. **/
int ccpp_field_idx_fini(void **);

/** CCPP field index add/insert a field. **/
int ccpp_field_idx_add(const char *, void **);

/** CCPP field index find a field location. **/
int ccpp_field_idx_find(const char *, void **);

/** CCPP field index sorting routine. **/
int ccpp_field_idx_sort(void **);

/** CCPP field index array extension. **/
int ccpp_field_idx_grow(void **);

/** CCPP field index maximum number of fields. **/
int ccpp_field_idx_max(void **);


#ifdef __cplusplus
}                               /* extern "C" */
#endif

#endif                          /* CCPP_FIELD_IDX_H */


/**
 * @}
 **/