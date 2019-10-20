# MIPS II / Instruction Formats

## 1. Translate the following C code into MIPS

```c
// Strcpy:
// $s1 -> char s1[] = “Hello!”;
// $s2 -> char *s2 =
// malloc(sizeof(char)*7);
int i=0;
do {
 s2[i] = s1[i];
 i++;
} while(s1[i] != '\0');
s2[i] = '\0';
```

```asm
addi $t0, $0, 0 # putting 0 in $t0 (maps to int i =0;)
Loop: addu $t1, $s1, $t0 # s1[i]
      addu $t2, $s2, $t0 # s2[i]
      lb $t3, 0($t1) # char is
      sb $t3, 0($t2) # 1 byte!
      addi $t0, $t0, 1

```
