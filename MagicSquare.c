#include <stdio.h>

int main(void) {
    long iter = 0;
    int sum1, sum2;
    int n[] = {20, 20, 20, 20, 20, 20, 20, 20, 20};
    for (int a = 0; a < n[0]; ++a) {
        for (int b = 0; b < n[1]; ++b) {
			printf("%ld\n", iter);
            if (b == a) {
                continue;
            }
            for (int c = 0; c < n[2]; ++c) {
                if (c == b || c == a) {
                    continue;
                }
                for (int d = 0; d < n[3]; ++d) {
                    if (d == c || d == b || d == a) {
                        continue;
                    }
                    for (int e = 0; e < n[4]; ++e) {
                        if (e == d || e == c || e == b || e == a) {
                            continue;
                        }
                        for (int f = 0; f < n[5]; ++f) {
                            if (f == e || f == d || f == c || f == b || f == a) {
                                continue;
                            }
                            for (int g = 0; g < n[6]; ++g) {
                                if (g == f || g == e || g == d || g == c || g == b || g == a) {
                                    continue;
                                }
                                for (int h = 0; h < n[7]; ++h) {
                                    if (h == g || h == f || h == e || h == d || h == c || h == b || h == a) {
                                        continue;
                                    }
                                    for (int i = 0; i < n[8]; ++i) {
                                        if (i == h || i == g || i == f || i == e || i == d || i == c || i == b || i == a) {
                                            continue;
                                        }
                                        ++iter;
                                        sum1 = a + b + c;
                                        sum2 = d + e + f;
                                        if (sum1 == sum2) {
                                            sum1 = g + h + i;
                                            if (sum1 == sum2) {
                                                sum1 = a + d + g;
                                                if (sum1 == sum2) {
                                                    sum1 = b + e + h;
                                                    if (sum1 == sum2) {
                                                        sum1 = c + f + i;
                                                        if (sum1 == sum2) {
                                                            sum1 = a + e + i;
                                                            if (sum1 == sum2) {
                                                                sum1 = c + e + g;
                                                                if (sum1 == sum2) {
                                                                    printf("\n%d %d %d\n", a, b, c);
                                                                    printf("%d %d %d\n", d, e, f);
                                                                    printf("%d %d %d\n", g, h, i);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}