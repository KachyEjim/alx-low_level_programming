global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format
	call	printf
	ret
format:
	db "Hello, Holberton", 10, 0
