<h2><a href="https://leetcode.com/problems/max-increase-to-keep-city-skyline/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">3</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Amazon</div><div class="companyTagsContainer--tagOccurence">2</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>807. Max Increase to Keep City Skyline</a></h2><h3>Medium</h3><hr><div><p>There is a city composed of <code>n x n</code> blocks, where each block contains a single building shaped like a vertical square prism. You are given a <strong>0-indexed</strong> <code>n x n</code> integer matrix <code>grid</code> where <code>grid[r][c]</code> represents the <strong>height</strong> of the building located in the block at row <code>r</code> and column <code>c</code>.</p>

<p>A city's <strong>skyline</strong> is the&nbsp;outer contour formed by all the building when viewing the side of the city from a distance. The <strong>skyline</strong> from each cardinal direction north, east, south, and west may be different.</p>

<p>We are allowed to increase the height of <strong>any number of buildings by any amount</strong> (the amount can be different per building). The height of a <code>0</code>-height building can also be increased. However, increasing the height of a building should <strong>not</strong> affect the city's <strong>skyline</strong> from any cardinal direction.</p>

<p>Return <em>the <strong>maximum total sum</strong> that the height of the buildings can be increased by <strong>without</strong> changing the city's <strong>skyline</strong> from any cardinal direction</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/21/807-ex1.png" style="width: 700px; height: 603px;">
<pre><strong>Input:</strong> grid = [[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
<strong>Output:</strong> 35
<strong>Explanation:</strong> The building heights are shown in the center of the above image.
The skylines when viewed from each cardinal direction are drawn in red.
The grid after increasing the height of buildings without affecting skylines is:
gridNew = [ [8, 4, 8, 7],
            [7, 4, 7, 7],
            [9, 4, 8, 7],
            [3, 3, 3, 3] ]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [[0,0,0],[0,0,0],[0,0,0]]
<strong>Output:</strong> 0
<strong>Explanation:</strong> Increasing the height of any building will result in the skyline changing.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == grid.length</code></li>
	<li><code>n == grid[r].length</code></li>
	<li><code>2 &lt;= n &lt;= 50</code></li>
	<li><code>0 &lt;= grid[r][c] &lt;= 100</code></li>
</ul>
</div>