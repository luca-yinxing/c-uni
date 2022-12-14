#pragma once
#include <stddef.h>

/**
 * @brief Copy a generic array source into an array destination
 * 
 * @param elements Number of elements of the array
 * @param sz Size of each element
 * @param src Source array pointer
 * @param dest Destination array pointer
 * @return int 0 if invalid or memcpy fails, else 1
 */
int copy_array(size_t elements, size_t sz, const void* src, void* dest);

/**
 * @brief Copy a integer array source into an array destination
 * 
 * @param sz Number of elements of the array
 * @param src Source array pointer
 * @param dest Destination array pointer
 * @return int 0 if invalid or memcpy fails, else 1
 */
static inline int copy_array_int(size_t sz, const int* src, int* dest) 
{
	return copy_array(sz, sizeof(int), src, dest);
}

/**
 * @brief Compare two integer array
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param a1 First interger pointer of the array, cannot be NULL
 * @param a2 Second interger pointer of the array, cannot be NULL
 * @return int 0 if fails or array are not equal, else 1
 */
int cmp_array_int(int sz, const int* a1, const int* a2);

/**
 * @brief Compare an integer array with second reverse
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param a1 First interger pointer of the array, cannot be NULL
 * @param a2 Second interger pointer of the reverse array, cannot be NULL
 * @return int 0 if fails or array are not equal, else 1
 */
int cmp_reverse_array_int(int sz, const int* a1, const int* a2);

/**
 * @brief Reverse an integer array
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Number of elements reversed on array, if invalid arguments 0
 */
int reverse_array_int(int sz, int* arr);

/**
 * @brief Takes an integer array and fill it with a N as random value where min <= N < max
 * 
 * @param sz Size of the integer array
 * @param arr Interger pointer of the array, cannot be NULL
 * @param max Maximum value on the array
 * @param min Minimum value on the array
 * @return size_t Number of elements filled on array, if invalid arguments 0
 */
size_t fill_array_rand_range(size_t sz, int* arr, int min, int max);

/**
 * @brief Takes an integer array and fill it with a N as random value where -max < N < max
 * 
 * @param sz Size of the integer array
 * @param arr Interger pointer of the array, cannot be NULL
 * @param max Maximum (and Minimum negative) value on the array, dont care if positive or negative
 * @return size_t Number of elements filled on array, if invalid arguments 0
 */
size_t fill_array_rand_range_sign(size_t sz, int* arr, int max);

/**
 * @brief Takes an integer array and fill it with a N as random value where 0 <= N < max
 * 
 * @param sz Size of the integer array
 * @param arr Interger pointer of the array, cannot be NULL
 * @param max Maximum value on the array, cannot be <= 0
 * @return size_t Number of elements filled on array, if invalid arguments 0
 */
size_t fill_array_rand_range_zero(size_t sz, int* arr, int max);

/**
 * @brief Print an array of integer
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Number of elements printed on array, if invalid arguments 0
 */
int print_array_int(int sz, const int* arr);

/**
 * @brief Search the index of the minimum value on the array of integers
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Index of the minimum value on the array, if invalid arguments -1
 */
int min_array_int_index(int sz, const int* arr);

/**
 * @brief Search the index of the maximum value on the array of integers
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Index of the maximum value on the array, if invalid arguments -1
 */
int max_array_int_index(int sz, const int* arr);

/**
 * @brief Search the minimum value on the array of integers
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Index of the minimum value on the array, if invalid return INT_MIN constant
 */
int min_array_int_value(int sz, const int* arr);

/**
 * @brief Search the maximum value on the array of integers
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Index of the maximum value on the array, if invalid return INT_MAX constant
 */
int max_array_int_value(int sz, const int* arr);

/**
 * @brief Calculate the integer average of the array of integer
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @return int Number average of the array, if invalid return INT_MIN constant
 */
int avg_array_int(int sz, const int* arr);


/**
 * @brief Find the longest (and first) ascending (or stable) sorted subarray on the integer array
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @param len single int slot where return len of the subarray, cannot be NULL
 * @return int* pointer at input array's longest subarray (no alloc)
 */
const int* asc_sorted_int_sub(int sz, const int* arr, int* len);

/**
 * @brief Find the longest (and first) descending (or stable) sorted subarray on the integer array
 * 
 * @param sz Size of the integer array, cannot be <= 0
 * @param arr Interger pointer of the array, cannot be NULL
 * @param len single int slot where return len of the subarray, cannot be NULL
 * @return int* pointer at input array's longest subarray (no alloc)
 */
const int* desc_sorted_int_sub(int sz, const int* arr, int* len);

/**
 * @brief Check if the string is numeric (only > 0)
 * 
 * @param str char array zero terminated to check
 * @return int 0 if string has some non numeric char, else 1 
 */
int check_string_numeric_positive(const char* str);

/**
 * @brief Check if the string is numeric
 * 
 * @param str char array zero terminated to check
 * @return int 0 if string has some non numeric char, else 1 
 */
static inline int check_string_numeric(const char* str)
{
	if (*str == '-') {
		str++;
	}
	
	return check_string_numeric_positive(str);
}