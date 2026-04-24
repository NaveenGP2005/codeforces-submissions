<h3><a href="https://codeforces.com/contest/1257/problem/B" target="_blank" rel="noopener noreferrer">Magic Stick</a></h3>

<div class="header"><div class="title">B. Magic Stick</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently Petya walked in the forest and found a magic stick.</p><p>Since Petya really likes numbers, the first thing he learned was spells for changing numbers. So far, he knows only two spells that can be applied to a <span class="tex-font-style-bf">positive</span> integer: </p><ol> <li> If the chosen number $$$a$$$ is even, then the spell will turn it into $$$\frac{3a}{2}$$$; </li><li> If the chosen number $$$a$$$ is greater than one, then the spell will turn it into $$$a-1$$$. </li></ol><p>Note that if the number is even and greater than one, then Petya can choose which spell to apply.</p><p>Petya now has only one number $$$x$$$. He wants to know if his favorite number $$$y$$$ can be obtained from $$$x$$$ using the spells he knows. The spells can be used any number of times in any order. It is not required to use spells, Petya can leave $$$x$$$ as it is.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains single integer $$$T$$$ ($$$1 \le T \le 10^4$$$) — the number of test cases. Each test case consists of two lines.</p><p>The first line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$1 \le x, y \le 10^9$$$) — the current number and the number that Petya wants to get.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For the $$$i$$$-th test case print the answer on it — <span class="tex-font-style-tt">YES</span> if Petya can get the number $$$y$$$ from the number $$$x$$$ using known spells, and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>You may print every letter in any case you want (so, for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will all be recognized as positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022035343224043324" id="id007486332687973761" class="input-output-copier">Copy</div></div><pre id="id0022035343224043324">7
2 3
1 1
3 6
6 8
1 2
4 1
31235 6578234
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0001856047031609176" id="id007622237808414278" class="input-output-copier">Copy</div></div><pre id="id0001856047031609176">YES
YES
NO
YES
NO
YES
YES
</pre></div></div></div>