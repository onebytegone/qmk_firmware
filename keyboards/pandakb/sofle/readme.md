# Sofle Keyboard

![SofleKeyboard version 1](https://raw.githubusercontent.com/josefadamcik/SofleKeyboard/master/Images/IMG_20200126_114622.jpg)

Sofle is 6×4+5 keys column-staggered split keyboard. Based on Lily58, Corne and Helix keyboards.

Make example for this keyboard (after setting up your build environment):

```bash
make pandakb/sofle:default
```

Flash the default keymap:

```bash
qmk flash --keyboard pandakb/sofle --keymap default
```

Press reset button on the keyboard when asked.

Disconnect the first half, connect the second one and repeat the process.
