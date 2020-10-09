
Debian
====================
This directory contains files used to package learniumd/learnium-qt
for Debian-based Linux systems. If you compile learniumd/learnium-qt yourself, there are some useful files here.

## learnium: URI support ##


learnium-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install learnium-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your learnium-qt binary to `/usr/bin`
and the `../../share/pixmaps/learnium128.png` to `/usr/share/pixmaps`

learnium-qt.protocol (KDE)

