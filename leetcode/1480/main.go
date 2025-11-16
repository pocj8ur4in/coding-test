package main

import (
	"fmt"
	"reflect"
)

func main() {
	testCases := []struct {
		nums     []int
		expected []int
	}{
		{[]int{1, 2, 3, 4}, []int{1, 3, 6, 10}},
		{[]int{1, 1, 1, 1, 1}, []int{1, 2, 3, 4, 5}},
		{[]int{3, 1, 2, 10, 1}, []int{3, 4, 6, 16, 17}},
	}

	for _, testCase := range testCases {
		result := runningSum(testCase.nums)
		if !reflect.DeepEqual(result, testCase.expected) {
			fmt.Printf("testcase failed: %v\n", testCase)
		}
	}
}
