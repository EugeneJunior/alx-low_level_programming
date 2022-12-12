#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	enum numbers
	{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, aa, ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, an, ao, ap, aq, ar, as, at, au, av, aw, ax, ay, az, ba, bb, bc, bd, be, bf, bg, bh, bi, bj, bk, bl, bm, bn, bo, bp, bq, br, bs, bt, bu, bv, bw, bx, by, bz, ca, cb, cc, cd, ce, cf, cg, ch, ci, cj, ck, cl, cm, cn, co, cp, cq, cr, cs, ct, cu, cv, cw, cx, cy, cz, da, db, dc, dd, de, df, dg, dh, di, dj, dk, dl, dm, dn, dp, dq, dr, ds, dt, du, dv, dw, dx, dy, dz, fa, fb, fc, fd, fe, ff, fg, fh, fi, fj, fk, fl, fm, fn, fo, fp, fq, fr, fs, ft, fu, fv, fw, fx, fy, fz, ga, gb, gc, gd, ge, gf, gg, gh, gi, gj, gk, gl, gm, gn, go, gp, gq, gr, gs, gt, gu, gv, gw};

	enum numbers single_digit[] = {'0', '1', ',', ' ', '0', '2', ',', ' ', '0', '3', ',', ' ', '0', '4', ',', ' ', '0', '5', ',', ' ', '0', '6', ',', ' ', '0', '7', ',', ' ', '0', '8', ',', ' ', '0', '9', ',', ' ', '1', '2', ',', ' ', '1', '3', ',', ' ', '1', '4', ',', ' ', '1', '5', ',', ' ', '1', '6', ',', ' ', '1', '7', ',', ' ', '1', '8', ',', ' ', '1', '9', ',', ' ', '2', '3', ',', ' ', '2', '4', ',', ' ', '2', '5', ',', ' ', '2', '6', ',', ' ', '2', '7', ',', ' ', '2', '8', ',', ' ', '2', '9', ',', ' ', '3', '4', ',', ' ', '3', '5', ',', ' ', '3', '6', ',', ' ', '3', '7', ',', ' ', '3', '8', ',', ' ', '3', '9', ',', ' ', '4', '5', ',', ' ', '4', '6', ',', ' ', '4', '7', ',', ' ', '4', '8', ',', ' ', '4', '9', ',', ' ', '5', '6', ',', ' ', '5', '7', ',', ' ', '5', '8', ',', ' ', '5', '9', ',', ' ', '6', '7', ',', ' ', '6', '8', ',', ' ', '6', '9', ',', ' ', '7', '8', ',', ' ', '7', '9', ',', ' ', '8', '9'};

	int iter;

	for (iter = 0; iter < 178; iter++)
		putchar(single_digit[iter]);
	putchar('\n');

	return (0);

}
