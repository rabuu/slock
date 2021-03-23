# slock - simple screen locker
simple screen locker utility for X.


### Requirements
In order to build slock you need the Xlib header files.


### Installation
Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

`make clean install`


### Running slock
Simply invoke the 'slock' command. To get out of it, enter your password.

## edit by rabuu
User that uses slock has to be in slock group.
Colors can be defined in Xresources with:
- slock.colorBackground
- slock.colorInit
- slock.colorInput
- slock.colorFailed
- slock.colorCaps

### used patches
- [capscolor](https://tools.suckless.org/slock/patches/capscolor/slock-capscolor-20170106-2d2a21a.diff)
- [dpms](https://tools.suckless.org/slock/patches/dpms/slock-dpms-1.4.diff)
- [dwmlogo](https://github.com/arieboven/slock/blob/master/slock-dwmlogo-20210322.diff)
- [quickcancel](https://tools.suckless.org/slock/patches/quickcancel/slock-quickcancel-1.4.diff)
- [terminalkeys](https://tools.suckless.org/slock/patches/terminalkeys/slock-terminalkeys-1.4.diff)
- [xresources](https://tools.suckless.org/slock/patches/xresources/slock-xresources-20191126-53e56c7.diff)
