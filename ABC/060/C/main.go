package main

import (
	"bufio"
	"fmt"
	"os"
)

var sc = bufio.NewScanner(os.Stdin)

func min(a, b int) int {
	if a > b {
		return b
	}
	return a
}

func main() {
	var n, t, ti, ti_plus1 int
	fmt.Scan(&n, &t)
	fmt.Scan(&ti)
	total := t

	for i := 0; i < n-1; i++ {
		fmt.Scan(&ti_plus1)
		total += min(ti_plus1-ti, t)
		ti = ti_plus1
	}
	fmt.Println(total)

}
