#ifndef RESISTOR_H
#define RESISTOR_H

typedef struct {
    int bands; /* 4 or 5 */
    double ohms;
    double tolerance_percent;
    double min_ohms;
    double max_ohms;

    char formatted_value[64];
    char formatted_min[64];
    char formatted_max[64];

    /* ready-to-log line */
    char history_line[256];
} ResistorResult;

/* Decode from a user line like "red violet yellow gold" */
int resistor_decode_from_line(const char *line, ResistorResult *out);

#endif
