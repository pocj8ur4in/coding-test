package main

import (
	"fmt"
	"reflect"
)

func main() {
	testCases := []struct {
		nums     []int
		target   int
		expected []int
	}{
		{[]int{3, 3}, 6, []int{0, 1}},
	}

	for _, testCase := range testCases {
		result := twoSum(testCase.nums, testCase.target)
		if !reflect.DeepEqual(result, testCase.expected) {
			fmt.Printf("testcase failed: %v\n", testCase)
		}
	}
}
