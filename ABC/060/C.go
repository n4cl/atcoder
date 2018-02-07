package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

var rs = bufio.NewReaderSize(os.Stdin, 1000000)

func readLine() string {
	buf := make([]byte, 0, 1000000)
	for {
		l, p, e := rs.ReadLine()
		if e != nil {
			panic(e)
		}
		buf = append(buf, l...)
		if !p {
			break
		}
	}
	return string(buf)
}

func min(a, b int) int {
	if a > b {
		return b
	}
	return a
}

func main() {
	var n, t, ti, ti_plus1 int
	fmt.Scan(&n, &t)

	s := readLine()
	ti_list := strings.Split(s, " ")

	total := t

	for i := 0; i < n; i++ {
		ti_plus1, _ = strconv.Atoi(ti_list[i])
		total += min(ti_plus1-ti, t)
		ti = ti_plus1
	}
	fmt.Println(total)
}
