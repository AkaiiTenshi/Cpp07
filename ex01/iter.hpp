#pragma once

#include <stdlib.h>
#include <iostream>
#include <cstddef>
template <typename T, std::size_t N, typename Func>

void iter(T (*arr)[N], Func foo){
	for (std::size_t i = 0; i < N; i++){
		foo(arr[i]);
	}
}
