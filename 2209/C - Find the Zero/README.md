<h3><a href="https://codeforces.com/contest/2209/problem/C" target="_blank" rel="noopener noreferrer">Find the Zero</a></h3>

<div class="header"><div class="title">C. Find the Zero</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p><span class="tex-font-style-it">This is an interactive problem.</span></p><p>You are given an integer $$$n$$$. There is a hidden array $$$a$$$ of length $$$2n$$$. Each integer from $$$1$$$ to $$$n$$$ appears <span class="tex-font-style-bf">exactly once</span> in $$$a$$$. The rest of the elements are all $$$0$$$.</p><p>You can make the following type of query:</p><ul> <li> Choose two integers $$$i$$$ and $$$j$$$ ($$$1 \le i,j \le 2n$$$, $$$i \ne j$$$). The judge will respond with $$$1$$$ if $$$a_i=a_j$$$, and will respond with $$$0$$$ otherwise. </li></ul><p>Find any integer $$$k$$$ ($$$1 \le k \le 2n$$$) such that $$$a_k=0$$$ in no more than $$$n+1$$$ queries. Note that the interactor is <span class="tex-font-style-bf">adaptive</span>, which means that the hidden array $$$a$$$ may change depending on your queries but will not contradict previous queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^3$$$). The description of the test cases follows. </p><p>The first line of each test case contains an integer $$$n$$$ ($$$2 \le n \le 10^4$$$). The length of the hidden array $$$a$$$ will be $$$2n$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^4$$$. </p></div><div><div class="section-title">Interaction</div><p>To make a query, output a line in the following format:</p><ul> <li> $$$\texttt{?}\;i\;j$$$ ($$$1 \le i,j \le 2n$$$, $$$i \ne j$$$) </li></ul><p>As a response to the query, you will get:</p><ul> <li> $$$1$$$ if $$$a_i=a_j$$$;</li><li> $$$0$$$ if $$$a_i \ne a_j$$$;</li><li> $$$-1$$$ if you made an invalid query or if you exceed the limit of $$$n+1$$$ queries. </li></ul><p>To report the answer, output a line in the following format:</p><ul> <li> $$$\texttt{!}\;k$$$ ($$$1 \le k \le 2n$$$) </li></ul><p>After this, proceed to the next test case or terminate if this is the last test case.</p><p>Note that reporting the answer does not count towards the $$$n+1$$$ queries.</p><p>The interactor is <span class="tex-font-style-bf">adaptive</span>. This means that the hidden array $$$a$$$ may change depending on your queries but will not contradict previous queries.</p><p>After printing each query do not forget to output the end of line and flush$$$^{\text{∗}}$$$ the output. Otherwise, you will get <span class="tex-font-style-tt">Idleness limit exceeded</span> verdict. If, at any interaction step, you read $$$-1$$$ instead of valid data, your solution must exit immediately. This means that your solution will receive <span class="tex-font-style-tt">Wrong answer</span> because of an invalid query or any other mistake. Failing to exit can result in an arbitrary verdict because your solution will continue to read from a closed stream. </p><p><span class="tex-font-style-bf">For this problem, hacks are disabled.</span></p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$To flush, use: </p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">sys.stdout.flush()</span> in Python; </li><li> see the documentation for other languages. </li></ul></div></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005687304808279686" id="id0011834470837916822" class="input-output-copier">Copy</div></div><pre id="id005687304808279686">2
2

0

1

3

1

0

0

</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012100771918102893" id="id0034987171417274854" class="input-output-copier">Copy</div></div><pre id="id0012100771918102893">

? 1 2

? 3 1

! 3

? 5 6

? 2 4

? 1 3

! 6</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example test case, the hidden array $$$a$$$ is $$$[0,1,0,2]$$$:</p><ul> <li> In the first query, $$$(i,j)=(1,2)$$$. Since $$$a_1=0$$$, $$$a_2=1$$$, $$$a_1 \ne a_2$$$, the judge responds with $$$0$$$.</li><li> In the second query, $$$(i,j)=(3,1)$$$. Since $$$a_3=0$$$, $$$a_1=0$$$, $$$a_3 = a_1$$$, the judge responds with $$$1$$$.</li><li> The program reports $$$k=3$$$ as an answer. Since $$$a_3=0$$$, the answer is correct. </li></ul><p>In the second example test case, the hidden array $$$a$$$ is $$$[3,2,0,1,0,0]$$$:</p><ul> <li> In the first query, $$$(i,j)=(5,6)$$$. Since $$$a_5=0$$$, $$$a_6=0$$$, $$$a_5 = a_6$$$, the judge responds with $$$1$$$.</li><li> In the second query, $$$(i,j)=(2,4)$$$. Since $$$a_2=2$$$, $$$a_4=1$$$, $$$a_2 \ne a_4$$$, the judge responds with $$$0$$$.</li><li> In the third query, $$$(i,j)=(1,3)$$$. Since $$$a_1=3$$$, $$$a_3=0$$$, $$$a_1 \ne a_3$$$, the judge responds with $$$0$$$.</li><li> The program reports $$$k=6$$$ as an answer. Since $$$a_6=0$$$, the answer is correct. </li></ul></div>