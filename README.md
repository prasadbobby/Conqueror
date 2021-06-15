# Conqueror
<h2>A low level Operating System designed using Linux Kernel</h2>
<p>To develop the basic low level operating system, we need following</p>
<ul>
  <li>Virtual Machine</li>
  <li>Clean Debian OS</li>
  <li>KDE Desktop Environment</li>
</ul>
<p>You need to have basic knowledge on</p>
<ul>
  <li>Programming in C</li>
  <li>x86_64 Assembly Programming</li>
  <li>Linux Basic Commands</li>
</ul>
<p>After getting all this, lets start building the Operating System using <b>Kernel</b></p>
<h2>Checking and Creating Hard drive Partitions</h2>
<ul>
  <li>Open the <b>Terminal</b></li>
  <li>Type <b>lsblk</b> command</li>
  <li>It will display sdb. Its actually a Hard Drive</li>
  <li>Change the user to <b>root</b> by typing the command <b>sudo su</b></li>
  <li>Type <b>cfdisk /dev/sdb</b></li>
  <li>It will open <b>Hard drive partition table</b></li>
  <li>Click on <b>[ New ] and hit enter</b></li>
  <li>Hit Enter again so that it will allocate default size</li>
  <li>Click on <b>[ Primary ]</b> and hit enter</li>
  <li>Click on <b>[ Bootable ]</b> and hit enter</li>
  <li>And then click on <b>[ Write ]</b> and type <b>yes</b>and hit enter</li>
  <li>Finally, click on <b>[ Quit ]</b> to exit</li>
</ul>
