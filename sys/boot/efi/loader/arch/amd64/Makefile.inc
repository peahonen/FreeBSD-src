# $FreeBSD$

SRCS+=	amd64_tramp.S \
	start.S \
	framebuffer.c \
	elf64_freebsd.c \
	reloc.c

.PATH:	${.CURDIR}/../../i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c
