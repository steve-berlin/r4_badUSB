# r4_badUSB
Some code to turn your Arduino uno R4 wifi into a badUSB
## Setup
To ensure functionality, please do the following:
### 1. Clone the repo
`git clone https://github.com/steve-berlin/r4_badUSB/`
### 2. Insure PIO is installed
If it isn't enter these commands into your CLI of choice (linux only!):
`curl -fsSL -o get-platformio.py https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py`

_or_

`wget -O get-platformio.py https://raw.githubusercontent.com/platformio/platformio-core-installer/master/get-platformio.py`

then

`python3 get-platformio.py`

and

`ln -s ~/.platformio/penv/bin/platformio ~/.local/bin/pio`.


Afterwards you should be able to use the `platformio` (aka `pio`) command anywhere in your system!
### 3. Upload code to your arduino
In the repository, run:
`pio run --target upload`

## _Notice_
The code provided should press enter upon plugging your arduino in a computer or, if plugged in, when the "reset" button is pressed
Feel free to modify the given code (`src/main.ino`) to do more complex things, such as opening an app on the computer.
I hope you will get to enjoy this project a lot!
