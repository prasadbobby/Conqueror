unsigned long open_file(char *fn, int flags)
{
	return _syscall(SYS_open, fn, flags, 0, 0, 0, 0);
}

unsigned long read_file(unsigned long fd, char *buff, unsigned long size)
{
	return _syscall(SYS_read, fd, buff, size, 0, 0, 0);
}
