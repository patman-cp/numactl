extern void printmask(char *name, nodemask_t *mask);
extern nodemask_t nodemask(char *s);
extern int read_sysctl(char *name);
extern void complain(char *fmt, ...);

/* defined in main module, but called by util.c */
extern void usage(void);

extern long memsize(char *s);
extern int parse_policy(char *name, char *arg);
extern void print_policies(void);
