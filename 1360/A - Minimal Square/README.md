<h3><a href="https://codeforces.com/contest/1360/problem/A" target="_blank" rel="noopener noreferrer">Minimal Square</a></h3>

<div class="header"><div class="title">A. Minimal Square</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Find the minimum area of a <span class="tex-font-style-bf">square</span> land on which you can place two identical rectangular $$$a \times b$$$ houses. The sides of the houses should be parallel to the sides of the desired square land.</p><p>Formally, </p><ul> <li> You are given two identical rectangles with side lengths $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 100$$$) — positive integers (you are given just the sizes, but <span class="tex-font-style-bf">not</span> their positions). </li><li> Find the square of the minimum area that contains both given rectangles. Rectangles can be rotated (both or just one), moved, but the sides of the rectangles should be parallel to the sides of the desired square. </li></ul><p>Two rectangles can touch each other (side or corner), but cannot intersect. Rectangles can also touch the sides of the square but must be completely inside it. You can rotate the rectangles. Take a look at the examples for a better understanding.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/043a4d2a05b6b97f60299c6445948d48f8dd3ffe.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">The picture shows a square that contains red and green rectangles.</span> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10\,000$$$) —the number of test cases in the input. Then $$$t$$$ test cases follow.</p><p>Each test case is a line containing two integers $$$a$$$, $$$b$$$ ($$$1 \le a, b \le 100$$$) — side lengths of the rectangles.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ answers to the test cases. Each answer must be a single integer — minimal area of square land, that contains two rectangles with dimensions $$$a \times b$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004594595820989009" id="id0033888532875193966" class="input-output-copier">Copy</div></div><pre id="id004594595820989009">8
3 2
4 2
1 1
3 1
4 7
1 3
7 4
100 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00723541635947393" id="id002510801193683082" class="input-output-copier">Copy</div></div><pre id="id00723541635947393">16
16
4
9
64
9
64
40000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Below are the answers for the first two test cases: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/043a4d2a05b6b97f60299c6445948d48f8dd3ffe.png" style="max-width: 100.0%;max-height: 100.0%;"> </center> <center> <img class="tex-graphics" src="https://espresso.codeforces.com/88654d9ab53614681b715e09c65e85005890e4fa.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>