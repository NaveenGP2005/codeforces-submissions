<h2><a href="https://codeforces.com/contest/1573/problem/C" target="_blank" rel="noopener noreferrer">1573C — Book</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1573C](https://codeforces.com/contest/1573/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Book</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a book with $$$n$$$ chapters.</p><p>Each chapter has a specified list of other chapters that need to be understood in order to understand this chapter. To understand a chapter, you must read it after you understand every chapter on its required list.</p><p>Currently you don't understand any of the chapters. You are going to read the book from the beginning till the end repeatedly until you understand the whole book. Note that if you read a chapter at a moment when you don't understand some of the required chapters, you don't understand this chapter.</p><p>Determine how many times you will read the book to understand every chapter, or determine that you will never understand every chapter no matter how many times you read the book.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 2\cdot10^4$$$).</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot10^5$$$) — number of chapters.</p><p>Then $$$n$$$ lines follow. The $$$i$$$-th line begins with an integer $$$k_i$$$ ($$$0 \le k_i \le n-1$$$) — number of chapters required to understand the $$$i$$$-th chapter. Then $$$k_i$$$ integers $$$a_{i,1}, a_{i,2}, \dots, a_{i, k_i}$$$ ($$$1 \le a_{i, j} \le n, a_{i, j} \ne i, a_{i, j} \ne a_{i, l}$$$ for $$$j \ne l$$$) follow — the chapters required to understand the $$$i$$$-th chapter.</p><p>It is guaranteed that the sum of $$$n$$$ and sum of $$$k_i$$$ over all testcases do not exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if the entire book can be understood, print how many times you will read it, otherwise print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010221812904010885" id="id007440906316693366" class="input-output-copier">Copy</div></div><pre id="id0010221812904010885">5
4
1 2
0
2 1 4
1 2
5
1 5
1 1
1 2
1 3
1 4
5
0
0
2 1 2
1 2
2 2 1
4
2 2 3
0
0
2 3 2
5
1 2
1 3
1 4
1 5
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005870586084354145" id="id00043306654689148516" class="input-output-copier">Copy</div></div><pre id="id005870586084354145">2
-1
1
2
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we will understand chapters $$$\{2, 4\}$$$ in the first reading and chapters $$$\{1, 3\}$$$ in the second reading of the book.</p><p>In the second example, every chapter requires the understanding of some other chapter, so it is impossible to understand the book.</p><p>In the third example, every chapter requires only chapters that appear earlier in the book, so we can understand everything in one go.</p><p>In the fourth example, we will understand chapters $$$\{2, 3, 4\}$$$ in the first reading and chapter $$$1$$$ in the second reading of the book.</p><p>In the fifth example, we will understand one chapter in every reading from $$$5$$$ to $$$1$$$.</p></div>