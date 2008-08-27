/* This file was generated by cproto. */
#if PROTOTYPES /* defined in config.h */
#define P_(s) s
#else
#define P_(s) ()
#endif

/* append.c */
int encode_lzhuf P_((FILE *infp, FILE *outfp, off_t size, off_t *original_size_var, off_t *packed_size_var, char *name, char *hdr_method));
/* bitio.c */
void fillbuf P_((int n));
unsigned short getbits P_((int n));
void putcode P_((int n, int x));
void putbits P_((int n, int x));
void init_getbits P_((void));
void init_putbits P_((void));
/* crcio.c */
void make_crctable P_((void));
unsigned int calccrc P_((unsigned int crc, char *p, unsigned int n));
int fread_crc P_((unsigned int *crcp, void *p, int n, FILE *fp));
void fwrite_crc P_((unsigned int *crcp, void *p, int n, FILE *fp));
void init_code_cache P_((void));
int fwrite_txt P_((void *vp, int n, FILE *fp));
int fread_txt P_((void *vp, int n, FILE *fp));
/* dhuf.c */
void start_c_dyn P_((void));
void decode_start_dyn P_((void));
unsigned short decode_c_dyn P_((void));
unsigned short decode_p_dyn P_((void));
void output_dyn P_((unsigned int code, unsigned int pos));
void encode_end_dyn P_((void));
/* extract.c */
int decode_lzhuf P_((FILE *infp, FILE *outfp, off_t original_size, off_t packed_size, char *name, int method, off_t *read_sizep));
/* header.c */
int calc_sum P_((void *p, int len));
void convert_filename P_((char *name, int len, int size, int from_code, int to_code, char *from_delim, char *to_delim, int case_to));
boolean get_header P_((FILE *fp, LzHeader *hdr));
int seek_lha_header P_((FILE *fp));
void init_header P_((char *name, struct stat *v_stat, LzHeader *hdr));
void write_header P_((FILE *fp, LzHeader *hdr));
char *sjis_to_utf8 P_((char *dst, const char *src, size_t dstsize));
char *utf8_to_sjis P_((char *dst, const char *src, size_t dstsize));
void euc2sjis P_((int *p1, int *p2));
void sjis2euc P_((int *p1, int *p2));
int cap_to_sjis P_((char *dst, const char *src, size_t dstsize));
int sjis_to_cap P_((char *dst, const char *src, size_t dstsize));
/* huf.c */
void output_st1 P_((int c, int p));
unsigned char *alloc_buf P_((void));
void encode_start_st1 P_((void));
void encode_end_st1 P_((void));
unsigned short decode_c_st1 P_((void));
unsigned short decode_p_st1 P_((void));
void decode_start_st1 P_((void));
/* indicator.c */
void start_indicator P_((char *name, off_t size, char *msg, long def_indicator_threshold));
void put_indicator P_((long int count));
void finish_indicator2 P_((char *name, char *msg, int pcnt));
void finish_indicator P_((char *name, char *msg));
/* larc.c */
unsigned short decode_c_lzs P_((void));
unsigned short decode_p_lzs P_((void));
void decode_start_lzs P_((void));
unsigned short decode_c_lz5 P_((void));
unsigned short decode_p_lz5 P_((void));
void decode_start_lz5 P_((void));
/* lhadd.c */
FILE *append_it P_((char *name, FILE *oafp, FILE *nafp));
FILE *build_temporary_file P_((void));
void temporary_to_new_archive_file P_((off_t new_archive_size));
void cmd_add P_((void));
void cmd_delete P_((void));
/* lharc.c */
void message P_((char *fmt, ...));
void warning P_((char *fmt, ...));
void error P_((char *fmt, ...));
void fatal_error P_((char *fmt, ...));
void cleanup P_((void));
RETSIGTYPE interrupt P_((int signo));
void *xmalloc P_((size_t size));
void *xrealloc P_((void *old, size_t size));
char *xstrdup P_((char *str));
void init_sp P_((struct string_pool *sp));
void add_sp P_((struct string_pool *sp, char *name, int len));
void finish_sp P_((register struct string_pool *sp, int *v_count, char ***v_vector));
void free_sp P_((char **vector));
void cleaning_files P_((int *v_filec, char ***v_filev));
boolean find_files P_((char *name, int *v_filec, char ***v_filev));
void free_files P_((int filec, char **filev));
int build_temporary_name P_((void));
void build_backup_name P_((char *buffer, char *original, size_t size));
void build_standard_archive_name P_((char *buffer, char *original, size_t size));
boolean need_file P_((char *name));
FILE *xfopen P_((char *name, char *mode));
FILE *open_old_archive P_((void));
int inquire P_((char *msg, char *name, char *selective));
void write_archive_tail P_((FILE *nafp));
void lha_exit P_((int status));
/* lhext.c */
void cmd_extract P_((void));
int is_directory_traversal P_((char *path));
/* lhlist.c */
void cmd_list P_((void));
/* maketbl.c */
void make_table P_((int nchar, unsigned char bitlen[], int tablebits, unsigned short table[]));
/* maketree.c */
short make_tree P_((int nchar, unsigned short *freq, unsigned char *bitlen, unsigned short *code));
/* patmatch.c */
int patmatch P_((register char *p, register char *s, int f));
/* shuf.c */
void decode_start_st0 P_((void));
void encode_p_st0 P_((int j));
void encode_start_fix P_((void));
void decode_start_fix P_((void));
unsigned short decode_c_st0 P_((void));
unsigned short decode_p_st0 P_((void));
/* slide.c */
int encode_alloc P_((int method));
unsigned int encode P_((struct interfacing *interface));
unsigned int decode P_((struct interfacing *interface));
/* util.c */
off_t copyfile P_((FILE *f1, FILE *f2, off_t size, int text_flg, unsigned int *crcp));
int encode_stored_crc P_((FILE *ifp, FILE *ofp, off_t size, off_t *original_size_var, off_t *write_size_var));
boolean archive_is_msdos_sfx1 P_((char *name));
int xsnprintf P_((char *dest, size_t size, char *fmt, ...));
char *xstrchr P_((const char *s, int c));
char *xstrrchr P_((const char *s, int c));
char *xmemchr P_((const char *s, int c, size_t n));
char *xmemrchr P_((const char *s, int c, size_t n));
int str_safe_copy P_((char *dst, const char *src, int dstsz));

/* util.c */
#if !HAVE_MEMMOVE
void *memmove P_((void *dst, const void *src, size_t cnt));
#endif
#if !HAVE_STRDUP
char *strdup P_((const char *buf));
#endif
#if !HAVE_MEMSET
char *memset P_((char *s, int c, size_t n));
#endif
#if !HAVE_STRCASECMP
int strcasecmp P_((const char *p1, const char *p2));
#endif
#if defined HAVE_DECL_BASENAME && !HAVE_DECL_BASENAME
char *basename P_((char *s));
#endif

/* vsnprintf.c */
#if !HAVE_VSNPRINTF
int vsnprintf P_((char *str, size_t n, const char *fmt, va_list ap));
int snprintf P_((char *str, size_t n, char const *fmt, ...));
#endif

#undef P_
