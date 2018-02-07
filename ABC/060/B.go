package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Scan()
	s := sc.Text()
	e := strings.Split(s, " ")
	a, _ := strconv.Atoi(e[0])
	b, _ := strconv.Atoi(e[1])
	c, _ := strconv.Atoi(e[2])

	for i := a; i <= a*b; i += a {
		if i%b == c {
			fmt.Println("YES")
			return
		}
	}
	fmt.Println("NO")
}
