# Quantum Mechanical Keyboard Firmware

_The official repo is located at [qmk/qmk_firmware](https://github.com/qmk/qmk_firmware)._

## Cloning

```
git clone git@github.com:onebytegone/qmk_firmware.git
cd qmk_firmware
git remote add upstream git@github.com:qmk/qmk_firmware.git
git fetch --all
```
## Keyboards

### Redox

#### Build & Flash

```
./bin/qmk compile -kb redox/onebytegone -km onebytegone
```

#### Flash EEPROM to define sides

```
sudo avrdude -p atmega32u4 -P "$(ls /dev/cu.usbmodem*)" -c avr109 -U eeprom:w:./quantum/split_common/eeprom-lefthand.eep
sudo avrdude -p atmega32u4 -P "$(ls /dev/cu.usbmodem*)" -c avr109 -U eeprom:w:./quantum/split_common/eeprom-righthand.eep
```
