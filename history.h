#ifndef HISTORY_H
#define HISTORY_H

/* Append a plain text line to history.txt (adds timestamp automatically) */
void history_append(const char *line);

/* Special log helpers (nice formatting) */
void history_append_series_parallel(const char *mode, const double *r, int n, double req);
void history_append_ohms(const char *label, double V, double I, double R);

/* Print history.txt to screen */
void history_view(void);

#endif
