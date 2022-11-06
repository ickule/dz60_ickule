# DZ60 60% Mechanical Keyboard PCB

![DZ60](https://cdn.shopify.com/s/files/1/1473/3902/products/c_1.jpg)

## A Customizable 60% Mechanical Keyboard PCB

This section is **copied form the QMK repository**.

![A Customizable 60% Mechanical Keyboard PCB](https://cdn.shopify.com/s/files/1/1473/3902/files/1_03_abb48769-9486-44bd-a761-7cd39d7e1bda.jpg)

* Keyboard Maintainer: QMK Community
* Hardware Supported: DZ60 60% Mechanical Keyboard PCB
* Hardware Availability: [KBDfans](https://kbdfans.com/collections/60/products/dz60-60-pcb)

Make example for this keyboard (after setting up your build environment):

    make dz60:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## QMK setup

First, we must setup setup qmk.
To install the necessray packages and python modules

    ```bash
    sudo apt install -y git python3-pip
    python3 -m pip install --user qmk
    ```

Next, add the your local/bin to your path

    ```bash
    export PATH="home/$USER/.local/bin:$PATH"
    ```

Now, clone the qmk repository

    ```bash
    git clone https://github.com/qmk/qmk_firmware.git
    ```

Finally, run the setup

    ```bash
    qmk setup
    ```

## This repository

This config is suitable for a V2 board, like the **DZ60 V2 Flex cut**.

### Cloning this repo

This repository holds a fake new keyboard with only custom changes. It requires needs to be cloned in the "qmk_firmqwares/keyboard" directory of QMK in order to be usable.

    ```bash
    cd qmk_firmware/keyboards/
    git clone https://github.com/ickule/dz60_ickule.git
    ```

### QMK configuration

To set this keyboard and its keymap as default, use the following:

    ```bash
    qmk config compile.keyboard=dz60_ickule
    qmk config compile.keymap=default
    ```

To set the default number of threads to use for compiling, use the following:
Make sure you adapt the number to the number  of threads of your computer.

    ```bash
    qmk config compile.parallel=12
    ```

### Compiling the keyboard

To compile after the previous section setup, run the following:

    ```bash
    qmk compile
    ```

Alternatively, you can compile the keyboard and its keymap directly with the following:

    ```bash
    qmk compile -kb dz60_ickule -km default -j 12
    ```
