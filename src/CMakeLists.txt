enable_testing()

set(C_FILE_UTILS "utils.c")

add_executable (ia1 ia1.c ${C_FILE_UTILS})
add_test(test_ia1 ia1)

add_executable (ia2 ia2.c ${C_FILE_UTILS})
add_test(test_ia2 ia2)

add_executable (ia3 ia3.c ${C_FILE_UTILS})
add_test(test_ia3 ia3)

add_executable (ia4 ia4.c ${C_FILE_UTILS})
add_test(test_ia4 ia4)

add_executable (ia5 ia5.c ${C_FILE_UTILS})
add_test(test_ia5 ia5)

add_executable (ia_extra01 ia_extra01.c ${C_FILE_UTILS})
add_test(test_ia_extra01 ia_extra01)

add_executable (ia_extra02 ia_extra02.c ${C_FILE_UTILS})
add_test(test_ia_extra02 ia_extra02)

add_executable (ia_extra03 ia_extra03.c ${C_FILE_UTILS})
add_test(test_ia_extra03 ia_extra03)

add_executable (ia_extra04 ia_extra04.c ${C_FILE_UTILS})
add_test(test_ia_extra04 ia_extra04)