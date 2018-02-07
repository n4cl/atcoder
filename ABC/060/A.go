package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

var sc = bufio.NewScanner(os.Stdin)

func main() {
	sc.Scan()
	s := sc.Text()
	e := strings.Split(s, " ")
	a, b, c := e[0], e[1], e[2]

	if (a[len(a)-1] == b[0]) && (b[len(b)-1] == c[0]) {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
