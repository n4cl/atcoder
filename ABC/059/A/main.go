package main

import (
	"bufio"
	"os"
	"strings"
	"fmt"
)

var sc = bufio.NewScanner(os.Stdin)

func inputLine() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	s := inputLine()
	el := strings.Split(s, " ")
	var res string = ""

	for _, v := range el {
		res += strings.ToUpper(v[0:1])
	}
	fmt.Println(res)
}
