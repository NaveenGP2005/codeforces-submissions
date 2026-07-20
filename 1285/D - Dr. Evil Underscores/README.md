<h2><a href="https://codeforces.com/contest/1285/problem/D" target="_blank" rel="noopener noreferrer">1285D — Dr. Evil Underscores</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285D](https://codeforces.com/contest/1285/problem/D) |

## Topics
`bitmasks` `brute force` `dfs and similar` `divide and conquer` `dp` `greedy` `strings` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. Dr. Evil Underscores</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, as a friendship gift, Bakry gave Badawy $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ and challenged him to choose an integer $$$X$$$ such that the value $$$\underset{1 \leq i \leq n}{\max} (a_i \oplus X)$$$ is minimum possible, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>.</p><p>As always, Badawy is too lazy, so you decided to help him and find the minimum possible value of $$$\underset{1 \leq i \leq n}{\max} (a_i \oplus X)$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer $$$n$$$ ($$$1\le n \le 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 2^{30}-1$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum possible value of $$$\underset{1 \leq i \leq n}{\max} (a_i \oplus X)$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009754067481842046" id="id005823100222001879" class="input-output-copier">Copy</div></div><pre id="id009754067481842046">3
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004423671675006402" id="id003710094917832282" class="input-output-copier">Copy</div></div><pre id="id004423671675006402">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016920875418935855" id="id0009759068793904313" class="input-output-copier">Copy</div></div><pre id="id0016920875418935855">2
1 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008971158502175125" id="id0002929360130185188" class="input-output-copier">Copy</div></div><pre id="id0008971158502175125">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, we can choose $$$X = 3$$$.</p><p>In the second sample, we can choose $$$X = 5$$$.</p></div>