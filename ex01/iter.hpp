#pragma once

#include <stdlib.h>
#include <iostream>
#include <cstddef>
template <typename T, typename Func>

void iter(T (*arr), const std::size_t len, Func foo){
	for (std::size_t i = 0; i < len; i++){
		foo(arr[i]);
	}
}
