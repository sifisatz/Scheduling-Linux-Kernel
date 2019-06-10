test1: final_test_1.c
    gcc -o test1 final_test_1.c

test2: final_test_2.c
    gcc -o test2 final_test_2.c

clean:
    rm -rf test1 test2