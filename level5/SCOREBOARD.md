# 🏆 Polyglot Quine Scoreboard

This table collects known **multi-language polyglot quines** — programs that, in a **single source file**, are valid in multiple languages and output their own exact source code in all of them.

---

## Polyglot Quines (single-file)

| Author / Project              | Year   | Size (bytes) | Languages (strict count) | Languages (generous count) | Status / Notes |
|-------------------------------|--------|--------------|---------------------------|-----------------------------|----------------|
| **Johannes Lötzsch** ([personal site](https://johannesloetzsch.de/software/quines/#polyglot_quines)) | ~2000s | Multi-KB | 3 (sh, C, Python2) | 3 | Works in `sh` and `gcc`; fails on Py3; fragile on other C compilers |
| **fwiffo / Thomas Schumm** ([gist](https://gist.github.com/fwiffo/5232237)) | 2013   | 857  | 3 (C, Python, Perl) | 5 (C, C++, Py2, Py3, Perl) | Verified working; compact; robust; strict = 3-way |
| **Rooster17678** ([GitHub](https://github.com/Rooster17678/polyglot_quine_c_python2)) | ~2015 | ~1 KB | 2 (C, Python2) | 2 | Fully works in `gcc` + Python 2.7 |
| **d0sboots – PyZipQuine** ([GitHub](https://github.com/d0sboots/PyZipQuine)) | ~2018 | ~1–2 KB | 2 (Python, PKZIP) | 2 | Runs as both a `.zip` archive and Python script |
| **davidsun0 – GraalQuine** ([GitHub](https://github.com/davidsun0/GraalQuine)) | ~2021 | Multi-KB | 2 (Java, Python via GraalVM) | 2 | Works under GraalVM with Java 11 + Python 3.8 |
| **Nicolas Sauzede – First polyquine** ([GitHub](https://github.com/nsauzede/quine_test/blob/main/level5/pqminirun2)) | 2025 | **428** | 2 (C, Python3) | 2 | Rather small duo-polyquine |
| **Nicolas Sauzede – Second polyquine** ([GitHub](https://github.com/nsauzede/quine_test/blob/main/level5/pqminirun3)) | 2025 | **479** | 3 (C, Python3, Perl) | 3 | Smallest known working tri-polyquine |
| **Nicolas Sauzede – Quatuor polyquine** ([GitHub](https://github.com/nsauzede/quine_test/blob/main/level5/pqminirun4)) | 2025 | **2543** | 4 (C, Python3, Perl, sh) | 4 | First known working 4-way polyglot quine |

---

## Notes
- **Strict vs. generous counts**:  
  - *Strict* counts only fundamentally different languages (e.g., C, Python, Perl, sh).  
  - *Generous* counts dialects separately (e.g., C vs. C++, Python2 vs. Python3).  
- **Quine relay projects** (e.g., *Quine Relay* in 128 languages) are excluded here, since they are multi-file and sequential, not true single-file polyglot quines.
- This scoreboard focuses on **verified, public, single-file polyglot quines**.

---

✨ Contributions welcome! If you know of another working polyglot quine, please add it here.
